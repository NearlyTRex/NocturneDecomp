// Name: core_melee.cpp_CMelee_canPickup_FUN_004cef40
// Address: 004cef40
// Address Range: [[004cef40, 004cef6e]]
// Convention: unknown
// Signature: undefined4 core_melee_cpp_CMelee_canPickup_FUN_004cef40(int param_1,CDemonActor *param_2)

#include "nocturne.h"

uint core_melee_cpp_CMelee_canPickup_FUN_004cef40(int param_1,CDemonActor *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x580) != 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CHero");
    if (iVar1 != 0) {
      return 2;
    }
  }
  return 3;
}
