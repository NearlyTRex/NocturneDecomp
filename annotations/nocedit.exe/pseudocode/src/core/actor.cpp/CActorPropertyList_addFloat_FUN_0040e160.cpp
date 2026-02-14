// Name: core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160
// Address: 0040e160
// Address Range: [[0040e160, 0040e190]]
// Convention: __cdecl
// Signature: CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList *this_ptr,char *property_name,float *data_ptr,CActorPropertyValidatorFunc *callback)

#include "nocturne.h"

CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList *this_ptr,char *property_name,float *data_ptr,CActorPropertyValidatorFunc *callback)

{
  CActorProperty *pCVar1;
  
  pCVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                     (this_ptr,PROP_FLOAT,property_name,data_ptr,callback);
  (pCVar1->param1).v_int = 0;
  (pCVar1->param4).v_int = 0x3f800000;
  return pCVar1;
}
