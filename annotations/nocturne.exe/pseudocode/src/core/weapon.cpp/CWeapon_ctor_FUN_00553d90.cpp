// Name: core_weapon.cpp_CWeapon_ctor_FUN_00553d90
// Address: 00553d90
// Address Range: [[00553d90, 00553e9f]]
// Convention: __cdecl
// Signature: int __cdecl core_weapon_cpp_CWeapon_ctor_FUN_00553d90(undefined4 param_1)

#include "nocturne.h"

int __cdecl core_weapon_cpp_CWeapon_ctor_FUN_00553d90(uint param_1)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_FUN_00409d30(param_1);
  iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(iVar1 + 0x150);
  iVar1 = core_box_cpp_CBox_ctor_FUN_0041a610(iVar1 + 0x1b0);
  *(byte ***)(iVar1 + -0x1b4) = &PTR_core_weapon_cpp_CWeapon_setup_FUN_00553f10_005a4154;
  *(uint *)(iVar1 + 0x25c) = 0x40a00000;
  *(uint *)(iVar1 + -8) = 0;
  *(uint *)(iVar1 + -0x34) = 0;
  *(uint *)(iVar1 + -4) = 0;
  *(uint *)(iVar1 + 0x260) = 0x14;
  *(uint *)(iVar1 + 0x264) = 0;
  *(uint *)(iVar1 + -0x200) = 1;
  *(uint *)(iVar1 + -0x30) = 0;
  *(uint *)(iVar1 + -0x2c) = 0;
  *(uint *)(iVar1 + -0x28) = 0;
  *(uint *)(iVar1 + -0x24) = 0;
  *(uint *)(iVar1 + -0x20) = 0x43480000;
  *(uint *)(iVar1 + -0x1c) = 0;
  *(uint *)(iVar1 + -0x18) = 1;
  *(uint *)(iVar1 + -0x14) = 0xff;
  *(uint *)(iVar1 + -0x10) = 0;
  *(uint *)(iVar1 + -0xc) = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (iVar1 + -0x1b0,"gat.kfm");
  *(uint *)(iVar1 + 0x268) = 0;
  *(uint *)(iVar1 + 0x26c) = 0;
  return iVar1 + -0x300;
}
