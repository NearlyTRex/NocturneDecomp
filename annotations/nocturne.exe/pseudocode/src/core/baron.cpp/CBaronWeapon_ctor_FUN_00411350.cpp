// Name: core_baron.cpp_CBaronWeapon_ctor_FUN_00411350
// Address: 00411350
// Address Range: [[00411350, 004113a3]]
// Convention: unknown
// Signature: void core_baron_cpp_CBaronWeapon_ctor_FUN_00411350(undefined4 param_1)

#include "nocturne.h"

void core_baron_cpp_CBaronWeapon_ctor_FUN_00411350(uint param_1)

{
  int iVar1;
  
  iVar1 = core_weapon_cpp_CWeapon_ctor_FUN_00553d90(param_1);
  *(byte ***)(iVar1 + 0x14c) = &PTR_core_baron_cpp_CBaronWeapon_setup_FUN_004113b0_00599c14;
  *(uint *)(iVar1 + 0x2d8) = 8;
  *(uint *)(iVar1 + 0x2dc) = 0;
  *(uint *)(iVar1 + 0x2e0) = 0x43480000;
  *(uint *)(iVar1 + 0x2e4) = 0;
  *(uint *)(iVar1 + 0x2e8) = 0;
  *(uint *)(iVar1 + 0x570) = 0;
  return;
}
