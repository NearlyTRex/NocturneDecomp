// Name: core_health.cpp_CHealthItem_canPickup_FUN_004b43d0
// Address: 004b43d0
// Address Range: [[004b43d0, 004b43eb]]
// Convention: __cdecl
// Signature: int __cdecl core_health_cpp_CHealthItem_canPickup_FUN_004b43d0(CHealthItem *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_health_cpp_CHealthItem_canPickup_FUN_004b43d0(CHealthItem *this_ptr,CDemonActor *picker)

{
  int iVar1;
  int iVar2;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(picker,"CHero");
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 2;
  }
  return iVar2;
}
