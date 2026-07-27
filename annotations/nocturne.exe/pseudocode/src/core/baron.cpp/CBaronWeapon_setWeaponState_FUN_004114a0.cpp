// Name: core_baron.cpp_CBaronWeapon_setWeaponState_FUN_004114a0
// Address: 004114a0
// Address Range: [[004114a0, 0041152c]]
// Convention: unknown
// Signature: void core_baron_cpp_CBaronWeapon_setWeaponState_FUN_004114a0(int param_1,undefined4 param_2)

#include "nocturne.h"

void core_baron_cpp_CBaronWeapon_setWeaponState_FUN_004114a0(int param_1,uint param_2)

{
  int iVar1;
  
  core_weapon_cpp_CWeapon_setWeaponState_FUN_00554560(param_1,param_2);
  iVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x8c))(param_1);
  if (*(int *)(param_1 + 0x2cc) == 2) {
    if (iVar1 == 0) {
      PTR_01cc4800 = "..\\core\\baron.cpp";
      INT_01cc4804 = 0x31c;
      core_main_c_FUN_004c8440("CBaronWeapon::setWeaponState - I'm drawn, but nobody's carrying me??");
    }
    core_baron_cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530(param_1);
    core_baron_cpp_CBaron_attachToOwner_FUN_00410a80(*(uint *)(param_1 + 0x570),iVar1);
  }
  else if (*(int *)(param_1 + 0x570) != 0) {
    core_baron_cpp_CBaron_detachFromOwner_FUN_00410bb0(*(int *)(param_1 + 0x570),iVar1);
    return;
  }
  return;
}
