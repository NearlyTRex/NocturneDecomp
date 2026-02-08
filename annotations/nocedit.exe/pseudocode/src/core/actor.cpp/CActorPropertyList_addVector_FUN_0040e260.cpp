// Name: core_actor.cpp_CActorPropertyList_addVector_FUN_0040e260
// Address: 0040e260
// Address Range: [[0040e260, 0040e289]]
// Convention: __cdecl
// Signature: CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addVector_FUN_0040e260 (CActorPropertyList *this_ptr,char *property_name,CVector3f *data_ptr, CActorPropertyValidatorFunc *callback)

#include "nocturne.h"

CActorProperty * __cdecl
core_actor_cpp_CActorPropertyList_addVector_FUN_0040e260
          (CActorPropertyList *this_ptr,char *property_name,CVector3f *data_ptr,
          CActorPropertyValidatorFunc *callback)

{
  CActorProperty *pCVar1;
  
  pCVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                     (this_ptr,PROP_VECTOR,property_name,data_ptr,callback);
  (pCVar1->param1).v_int = 0;
  return pCVar1;
}
