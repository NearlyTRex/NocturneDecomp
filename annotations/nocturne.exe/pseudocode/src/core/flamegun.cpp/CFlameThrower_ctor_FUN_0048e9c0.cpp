// Name: core_flamegun.cpp_CFlameThrower_ctor_FUN_0048e9c0
// Address: 0048e9c0
// Address Range: [[0048e9c0, 0048ea5d]]
// Convention: unknown
// Signature: int core_flamegun_cpp_CFlameThrower_ctor_FUN_0048e9c0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_flamegun_cpp_CFlameThrower_ctor_FUN_0048e9c0(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = core_weapon_cpp_CWeapon_ctor_FUN_00553d90(param_1);
  *(byte ***)(iVar2 + 0x14c) = &PTR_core_weapon_cpp_CWeapon_setup_FUN_00553f10_0059d7b4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (iVar2 + 0x150,"flamegun.kfm");
  *(uint *)(iVar2 + 0x574) = 0;
  *(uint *)(iVar2 + 0x570) = 0;
  *(uint *)(iVar2 + 0x2d0) = 0;
  *(uint *)(iVar2 + 0x2d4) = 0;
  *(uint *)(iVar2 + 0x2d8) = 2;
  *(uint *)(iVar2 + 0x2dc) = 0;
  *(uint *)(iVar2 + 0x2e0) = 0x41700000;
  *(uint *)(iVar2 + 0x2e4) = 1;
  uVar1 = _DAT_0059d79c;
  *(uint *)(iVar2 + 0x57c) = 0;
  *(uint *)(iVar2 + 0x578) = 0;
  *(uint *)(iVar2 + 0x55c) = uVar1;
  return iVar2;
}
