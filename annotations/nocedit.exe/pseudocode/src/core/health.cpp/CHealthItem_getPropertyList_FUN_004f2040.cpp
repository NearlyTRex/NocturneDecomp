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
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e1a0(property_list);
  return;
}
