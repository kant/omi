/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _CIM_Policy_h
#define _CIM_Policy_h

#include <MI.h>
#include "CIM_ManagedElement.h"

/*
**==============================================================================
**
** CIM_Policy [CIM_Policy]
**
** Keys:
**
**==============================================================================
*/

typedef struct _CIM_Policy /* extends CIM_ManagedElement */
{
    MI_Instance __instance;
    /* CIM_ManagedElement properties */
    MI_ConstStringField InstanceID;
    MI_ConstStringField Caption;
    MI_ConstStringField Description;
    MI_ConstStringField ElementName;
    /* CIM_Policy properties */
    MI_ConstStringField CommonName;
    MI_ConstStringAField PolicyKeywords;
}
CIM_Policy;

typedef struct _CIM_Policy_Ref
{
    CIM_Policy* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_Policy_Ref;

typedef struct _CIM_Policy_ConstRef
{
    MI_CONST CIM_Policy* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_Policy_ConstRef;

typedef struct _CIM_Policy_Array
{
    struct _CIM_Policy** data;
    MI_Uint32 size;
}
CIM_Policy_Array;

typedef struct _CIM_Policy_ConstArray
{
    struct _CIM_Policy MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
CIM_Policy_ConstArray;

typedef struct _CIM_Policy_ArrayRef
{
    CIM_Policy_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_Policy_ArrayRef;

typedef struct _CIM_Policy_ConstArrayRef
{
    CIM_Policy_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_Policy_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl CIM_Policy_rtti;

MI_INLINE MI_Result MI_CALL CIM_Policy_Construct(
    _Out_ CIM_Policy* self,
    _In_ MI_Context* context)
{
    return MI_Context_ConstructInstance(context, &CIM_Policy_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_Policy_Clone(
    _In_ const CIM_Policy* self,
    _Outptr_ CIM_Policy** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL CIM_Policy_IsA(
    _In_ const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &CIM_Policy_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL CIM_Policy_Destruct(_Inout_ CIM_Policy* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_Policy_Delete(_Inout_ CIM_Policy* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_Policy_Post(
    _In_ const CIM_Policy* self,
    _In_ MI_Context* context)
{
    return MI_Context_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_Policy_Set_InstanceID(
    _Inout_ CIM_Policy* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_Policy_SetPtr_InstanceID(
    _Inout_ CIM_Policy* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_Policy_Clear_InstanceID(
    _Inout_ CIM_Policy* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_Policy_Set_Caption(
    _Inout_ CIM_Policy* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_Policy_SetPtr_Caption(
    _Inout_ CIM_Policy* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_Policy_Clear_Caption(
    _Inout_ CIM_Policy* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL CIM_Policy_Set_Description(
    _Inout_ CIM_Policy* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_Policy_SetPtr_Description(
    _Inout_ CIM_Policy* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_Policy_Clear_Description(
    _Inout_ CIM_Policy* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL CIM_Policy_Set_ElementName(
    _Inout_ CIM_Policy* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_Policy_SetPtr_ElementName(
    _Inout_ CIM_Policy* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_Policy_Clear_ElementName(
    _Inout_ CIM_Policy* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

MI_INLINE MI_Result MI_CALL CIM_Policy_Set_CommonName(
    _Inout_ CIM_Policy* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_Policy_SetPtr_CommonName(
    _Inout_ CIM_Policy* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_Policy_Clear_CommonName(
    _Inout_ CIM_Policy* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        4);
}

MI_INLINE MI_Result MI_CALL CIM_Policy_Set_PolicyKeywords(
    _Inout_ CIM_Policy* self,
    _In_reads_opt_(size) const MI_Char** data,
    _In_ MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&arr,
        MI_STRINGA,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_Policy_SetPtr_PolicyKeywords(
    _Inout_ CIM_Policy* self,
    _In_reads_opt_(size) const MI_Char** data,
    _In_ MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&arr,
        MI_STRINGA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_Policy_Clear_PolicyKeywords(
    _Inout_ CIM_Policy* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        5);
}


#endif /* _CIM_Policy_h */
