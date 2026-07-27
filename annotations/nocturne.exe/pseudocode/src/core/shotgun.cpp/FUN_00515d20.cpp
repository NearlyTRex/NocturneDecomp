// Name: core_shotgun.cpp_FUN_00515d20
// Address: 00515d20
// Address Range: [[00515d20, 00515da9]]
// Convention: unknown
// Signature: int core_shotgun_cpp_FUN_00515d20(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_shotgun_cpp_FUN_00515d20(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = core_weapon_cpp_CWeapon_ctor_FUN_00553d90(param_1);
  *(byte ***)(iVar2 + 0x14c) = &PTR_core_weapon_cpp_CWeapon_setup_FUN_00553f10_005a1af4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (iVar2 + 0x150,"shotgun.kfm");
  *(uint *)(iVar2 + 0x570) = 0x41200000;
  *(uint *)(iVar2 + 0x2d0) = 1;
  *(uint *)(iVar2 + 0x2d4) = 2;
  *(uint *)(iVar2 + 0x2d8) = 1;
  *(uint *)(iVar2 + 0x2dc) = 1;
  *(uint *)(iVar2 + 0x2e0) = 0x41700000;
  uVar1 = _DAT_005a1aec;
  *(uint *)(iVar2 + 0x2e4) = 0;
  *(uint *)(iVar2 + 0x574) = 0;
  *(uint *)(iVar2 + 0x55c) = uVar1;
  return iVar2;
}
