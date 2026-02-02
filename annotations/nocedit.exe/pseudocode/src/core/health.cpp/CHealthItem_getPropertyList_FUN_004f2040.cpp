// Name: core_health.cpp_CHealthItem_getPropertyList_FUN_004f2040
// Address: 004f2040
// Address Range: [[004f2040, 004f20a2]]
// Convention: __cdecl
// Signature: void __cdecl core_health_cpp_CHealthItem_getPropertyList_FUN_004f2040 (CHealthItem *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_health_cpp_CHealthItem_getPropertyList_FUN_004f2040
          (CHealthItem *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (property_list,"Model file (.kfm)",&this_ptr->model,0);
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (property_list,"Number of uses",&this_ptr->use_count,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
            (property_list,"HP restored",&this_ptr->hp_restored,0.0,100.0,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  return;
}
