// Name: core_health.cpp_CHealthItem_canPickup_FUN_004cdf70
// Address: 004cdf70
// Address Range: [[004cdf70, 004cdf8b]]
// Convention: __cdecl
// Signature: int __cdecl core_health_cpp_CHealthItem_canPickup_FUN_004cdf70(CHealthItem *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_health_cpp_CHealthItem_canPickup_FUN_004cdf70(CHealthItem *this_ptr,CDemonActor *picker)

{
  int iVar1;
  int iVar2;
  
  iVar1 = core_actor_cpp_FUN_0040c840(picker,"CHero");
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 2;
  }
  return iVar2;
}
