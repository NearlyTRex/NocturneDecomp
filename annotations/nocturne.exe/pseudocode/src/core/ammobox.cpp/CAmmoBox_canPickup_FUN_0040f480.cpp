// Name: core_ammobox.cpp_CAmmoBox_canPickup_FUN_0040f480
// Address: 0040f480
// Address Range: [[0040f480, 0040f4ab]]
// Convention: unknown
// Signature: undefined4 core_ammobox_cpp_CAmmoBox_canPickup_FUN_0040f480(int param_1,CDemonActor *param_2)

#include "nocturne.h"

uint core_ammobox_cpp_CAmmoBox_canPickup_FUN_0040f480(int param_1,CDemonActor *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x30c) != 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CHero");
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}
