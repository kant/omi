/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _CIM_HostedDependency_h
#define _CIM_HostedDependency_h

#include <MI.h>
#include "CIM_Dependency.h"
#include "CIM_ManagedElement.h"

/*
**==============================================================================
**
** CIM_HostedDependency [CIM_HostedDependency]
**
** Keys:
**    Antecedent
**    Dependent
**
**==============================================================================
*/

typedef struct _CIM_HostedDependency /* extends CIM_Dependency */
{
    MI_Instance __instance;
    /* CIM_Dependency properties */
    /*KEY*/ CIM_ManagedElement_ConstRef Antecedent;
    /*KEY*/ CIM_ManagedElement_ConstRef Dependent;
    /* CIM_HostedDependency properties */
}
CIM_HostedDependency;

typedef struct _CIM_HostedDependency_Ref
{
    CIM_HostedDependency* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_HostedDependency_Ref;

typedef struct _CIM_HostedDependency_ConstRef
{
    MI_CONST CIM_HostedDependency* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_HostedDependency_ConstRef;

typedef struct _CIM_HostedDependency_Array
{
    struct _CIM_HostedDependency** data;
    MI_Uint32 size;
}
CIM_HostedDependency_Array;

typedef struct _CIM_HostedDependency_ConstArray
{
    struct _CIM_HostedDependency MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
CIM_HostedDependency_ConstArray;

typedef struct _CIM_HostedDependency_ArrayRef
{
    CIM_HostedDependency_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_HostedDependency_ArrayRef;

typedef struct _CIM_HostedDependency_ConstArrayRef
{
    CIM_HostedDependency_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_HostedDependency_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl CIM_HostedDependency_rtti;

MI_INLINE MI_Result MI_CALL CIM_HostedDependency_Construct(
    CIM_HostedDependency* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &CIM_HostedDependency_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_HostedDependency_Clone(
    const CIM_HostedDependency* self,
    CIM_HostedDependency** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL CIM_HostedDependency_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &CIM_HostedDependency_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL CIM_HostedDependency_Destruct(CIM_HostedDependency* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_HostedDependency_Delete(CIM_HostedDependency* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_HostedDependency_Post(
    const CIM_HostedDependency* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_HostedDependency_Set_Antecedent(
    CIM_HostedDependency* self,
    const CIM_ManagedElement* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_HostedDependency_SetPtr_Antecedent(
    CIM_HostedDependency* self,
    const CIM_ManagedElement* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_HostedDependency_Clear_Antecedent(
    CIM_HostedDependency* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_HostedDependency_Set_Dependent(
    CIM_HostedDependency* self,
    const CIM_ManagedElement* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_HostedDependency_SetPtr_Dependent(
    CIM_HostedDependency* self,
    const CIM_ManagedElement* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_HostedDependency_Clear_Dependent(
    CIM_HostedDependency* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}


#endif /* _CIM_HostedDependency_h */
