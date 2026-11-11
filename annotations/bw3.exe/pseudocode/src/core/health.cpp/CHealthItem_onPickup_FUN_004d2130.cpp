// Name: core_health.cpp_CHealthItem_onPickup_FUN_004d2130
// Address: 004d2130
// Address Range: [[004d2130, 004d2142]]
// Convention: __cdecl
// Signature: void __cdecl core_health_cpp_CHealthItem_onPickup_FUN_004d2130(CHealthItem *this_ptr,CDemonActor *owner)

#include "nocturne.h"

void __cdecl core_health_cpp_CHealthItem_onPickup_FUN_004d2130(CHealthItem *this_ptr,CDemonActor *owner)

{
  core_actor_cpp_CDemonActor_onPickup_FUN_00409d50(&this_ptr->base,owner);
  return;
}
