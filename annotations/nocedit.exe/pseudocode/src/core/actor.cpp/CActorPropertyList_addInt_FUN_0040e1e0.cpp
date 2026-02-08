// Name: core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0
// Address: 0040e1e0
// Address Range: [[0040e1e0, 0040e210]]
// Convention: __cdecl
// Signature: CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0 (CActorPropertyList *this_ptr,char *property_name,int *data_ptr, CActorPropertyValidatorFunc *callback)

#include "nocturne.h"

CActorProperty * __cdecl
core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
          (CActorPropertyList *this_ptr,char *property_name,int *data_ptr,
          CActorPropertyValidatorFunc *callback)

{
  CActorProperty *pCVar1;
  
  pCVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                     (this_ptr,PROP_INT,property_name,data_ptr,callback);
  (pCVar1->param1).v_int = 0;
  (pCVar1->param4).v_int = 1;
  return pCVar1;
}
