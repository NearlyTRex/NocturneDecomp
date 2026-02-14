// Name: core_health.cpp_CHealthItem_canPickup_FUN_004f1fb0
// Address: 004f1fb0
// Address Range: [[004f1fb0, 004f1fcb]]
// Convention: __cdecl
// Signature: int __cdecl core_health_cpp_CHealthItem_canPickup_FUN_004f1fb0(CHealthItem *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_health_cpp_CHealthItem_canPickup_FUN_004f1fb0(CHealthItem *this_ptr,CDemonActor *picker)

{
  int iVar1;
  int iVar2;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(picker,"CHero");
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 2;
  }
  return iVar2;
}
