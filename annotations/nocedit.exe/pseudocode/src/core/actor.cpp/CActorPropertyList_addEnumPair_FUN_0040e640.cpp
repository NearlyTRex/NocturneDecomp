// Name: core_actor.cpp_CActorPropertyList_addEnumPair_FUN_0040e640
// Address: 0040e640
// Address Range: [[0040e640, 0040e66b]]
// Convention: __cdecl
// Signature: CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640(CActorPropertyList *this_ptr,char *property_name,int num_pairs,SEnumPair *pairs,int *data_ptr)

#include "nocturne.h"

CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640(CActorPropertyList *this_ptr,char *property_name,int num_pairs,SEnumPair *pairs,int *data_ptr)

{
  CActorProperty *pCVar1;
  
  pCVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                     (this_ptr,PROP_ENUM_PAIR,property_name,data_ptr,
                      (CActorPropertyValidatorFunc *)0x0);
  (pCVar1->param1).v_int = num_pairs;
  (pCVar1->param2).v_ptr = pairs;
  return pCVar1;
}
