// Name: core_health.cpp_CHealthItem_onPickup_FUN_004f2020
// Address: 004f2020
// Address Range: [[004f2020, 004f2032]]
// Convention: __cdecl
// Signature: void __cdecl core_health_cpp_CHealthItem_onPickup_FUN_004f2020(CHealthItem *this_ptr,CDemonActor *owner)

#include "nocturne.h"

void __cdecl
core_health_cpp_CHealthItem_onPickup_FUN_004f2020(CHealthItem *this_ptr,CDemonActor *owner)

{
  core_actor_cpp_CDemonActor_onPickup_FUN_0040a010(&this_ptr->base,owner);
  return;
}
