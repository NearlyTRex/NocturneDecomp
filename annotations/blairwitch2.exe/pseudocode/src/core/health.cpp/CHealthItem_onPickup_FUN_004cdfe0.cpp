// Name: core_health.cpp_CHealthItem_onPickup_FUN_004cdfe0
// Address: 004cdfe0
// Address Range: [[004cdfe0, 004cdff2]]
// Convention: __cdecl
// Signature: void __cdecl core_health_cpp_CHealthItem_onPickup_FUN_004cdfe0(CHealthItem *this_ptr,CDemonActor *owner)

#include "nocturne.h"

void __cdecl core_health_cpp_CHealthItem_onPickup_FUN_004cdfe0(CHealthItem *this_ptr,CDemonActor *owner)

{
  core_actor_cpp_CDemonActor_onPickup_FUN_00409ec0(&this_ptr->base,owner);
  return;
}
