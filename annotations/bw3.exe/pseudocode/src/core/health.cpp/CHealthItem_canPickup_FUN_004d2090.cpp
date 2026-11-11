// Name: core_health.cpp_CHealthItem_canPickup_FUN_004d2090
// Address: 004d2090
// Address Range: [[004d2090, 004d20be]]
// Convention: __cdecl
// Signature: int __cdecl core_health_cpp_CHealthItem_canPickup_FUN_004d2090(CHealthItem *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_health_cpp_CHealthItem_canPickup_FUN_004d2090(CHealthItem *this_ptr,CDemonActor *picker)

{
  int iVar1;
  int iVar2;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c790(picker,"CHero");
  iVar2 = 0;
  if (iVar1 != 0) {
    if (this_ptr->automatic_use == 0) {
      return 2;
    }
    iVar2 = 5;
  }
  return iVar2;
}
