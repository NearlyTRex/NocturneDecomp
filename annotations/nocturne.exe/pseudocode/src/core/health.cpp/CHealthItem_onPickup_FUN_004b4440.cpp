// Name: core_health.cpp_CHealthItem_onPickup_FUN_004b4440
// Address: 004b4440
// Address Range: [[004b4440, 004b4452]]
// Convention: __cdecl
// Signature: void __cdecl core_health_cpp_CHealthItem_onPickup_FUN_004b4440(CHealthItem *this_ptr,CDemonActor *owner)

#include "nocturne.h"

void __cdecl core_health_cpp_CHealthItem_onPickup_FUN_004b4440(CHealthItem *this_ptr,CDemonActor *owner)

{
  core_actor_cpp_CDemonActor_onPickup_FUN_0040b1a0(&this_ptr->base,owner);
  return;
}
