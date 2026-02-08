// Name: core_flies.cpp_CFlies_getPropertyList_FUN_004ccaa0
// Address: 004ccaa0
// Address Range: [[004ccaa0, 004ccae0]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_CFlies_getPropertyList_FUN_004ccaa0 (CFlies *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_flies_cpp_CFlies_getPropertyList_FUN_004ccaa0
          (CFlies *this_ptr,CActorPropertyList *property_list)

{
  CActorProperty *pCVar1;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  pCVar1 = core_actor_cpp_CActorPropertyList_addIntRange_FUN_0040e220
                     (property_list,"flyCount",&this_ptr->count,0,200,
                      (CActorPropertyValidatorFunc *)0x0);
  pCVar1->auto_update_flag = 1;
  return;
}
