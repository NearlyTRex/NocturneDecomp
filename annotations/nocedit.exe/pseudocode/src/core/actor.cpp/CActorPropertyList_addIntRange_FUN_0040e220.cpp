// Name: core_actor.cpp_CActorPropertyList_addIntRange_FUN_0040e220
// Address: 0040e220
// Address Range: [[0040e220, 0040e25e]]
// Convention: __cdecl
// Signature: CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addIntRange_FUN_0040e220 (CActorPropertyList *this_ptr,char *property_name,int *data_ptr,int min_value, int max_value,CActorPropertyValidatorFunc *callback)

#include "nocturne.h"

CActorProperty * __cdecl
core_actor_cpp_CActorPropertyList_addIntRange_FUN_0040e220
          (CActorPropertyList *this_ptr,char *property_name,int *data_ptr,int min_value,
          int max_value,CActorPropertyValidatorFunc *callback)

{
  CActorProperty *pCVar1;
  
  pCVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                     (this_ptr,PROP_INT,property_name,data_ptr,callback);
  (pCVar1->param1).v_int = 1;
  (pCVar1->param4).v_int = 1;
  (pCVar1->param2).v_int = min_value;
  (pCVar1->param3).v_int = max_value;
  return pCVar1;
}
