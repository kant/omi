#!/bin/bash
#
# shell script used by "make tests" target
#
# Three position parameters are required.  Format of command is:
#      make_tests.sh $(LIBDIR) $(BINDIR) $(TMPDIR)

libdir=$1
bindir=$2
tmpdir=$3

dir=`pwd`
cd "${libdir}"
cd ..
outputdir=`pwd`
cd $dir

echo "make tests, outputdir = " $outputdir

. ./tools/auth_tests_setup.sh $outputdir

LD_LIBRARY_PATH=$libdir
export LD_LIBRARY_PATH
DYLD_FALLBACK_LIBRARY_PATH=$libdir
export DYLD_FALLBACK_LIBRARY_PATH
DYLD_LIBRARY_PATH=$libdir
export DYLD_LIBRARY_PATH

echo -e '#!/bin/sh\necho "$1 $2 `id -u` `id -g`"' " > $tmpdir/cli_preexec.txt" > $bindir/cli_preexec.sh
chmod +x $bindir/cli_preexec.sh

$bindir/nits -file:$tmpdir/nitsargs.txt
e=$?

./tools/auth_tests_cleanup.sh

exit $e
