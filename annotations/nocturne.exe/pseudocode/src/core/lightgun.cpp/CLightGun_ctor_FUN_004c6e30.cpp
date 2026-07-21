// Name: core_lightgun.cpp_CLightGun_ctor_FUN_004c6e30
// Address: 004c6e30
// Address Range: [[004c6e30, 004c6ee5]]
// Convention: unknown
// Signature: int core_lightgun_cpp_CLightGun_ctor_FUN_004c6e30(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_lightgun_cpp_CLightGun_ctor_FUN_004c6e30(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = core_weapon_cpp_CWeapon_ctor_FUN_00553d90(param_1);
  *(byte ***)(iVar3 + 0x14c) = &PTR_core_weapon_cpp_CWeapon_setup_FUN_00553f10_0059fd94;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (iVar3 + 0x150,"cre.kfm");
  *(uint *)(iVar3 + 0x574) = 0;
  *(uint *)(iVar3 + 0x570) = 0;
  *(uint *)(iVar3 + 0x2d0) = 0;
  *(uint *)(iVar3 + 0x2d4) = 0;
  *(uint *)(iVar3 + 0x2d8) = 2;
  *(uint *)(iVar3 + 0x2dc) = 0;
  *(uint *)(iVar3 + 0x2e0) = 0x42000000;
  *(uint *)(iVar3 + 0x2e4) = 1;
  uVar1 = _DAT_0059fd5c;
  *(uint *)(iVar3 + 0x2e8) = 0;
  uVar2 = 0x41F00000;
  *(uint *)(iVar3 + 0x580) = 0;
  *(uint *)(iVar3 + 0x57c) = 0x3f800000;
  *(uint *)(iVar3 + 0x55c) = uVar1;
  *(uint *)(iVar3 + 0x578) = uVar2;
  return iVar3;
}
