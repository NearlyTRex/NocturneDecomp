// Name: core_tommygun.cpp_CTommyGun_ctor_FUN_00545b90
// Address: 00545b90
// Address Range: [[00545b90, 00545c23]]
// Convention: __cdecl
// Signature: int __cdecl core_tommygun_cpp_CTommyGun_ctor_FUN_00545b90(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_tommygun_cpp_CTommyGun_ctor_FUN_00545b90(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = core_weapon_cpp_CWeapon_ctor_FUN_00553d90(param_1);
  *(byte ***)(iVar2 + 0x14c) = &PTR_core_weapon_cpp_CWeapon_setup_FUN_00553f10_005a32e4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (iVar2 + 0x150,"tommygun.kfm");
  *(uint *)(iVar2 + 0x2d0) = 0;
  *(uint *)(iVar2 + 0x2d4) = 0;
  *(uint *)(iVar2 + 0x2d8) = 4;
  *(uint *)(iVar2 + 0x2dc) = 1;
  *(uint *)(iVar2 + 0x2e0) = 0x42c80000;
  *(uint *)(iVar2 + 0x2e4) = 1;
  *(uint *)(iVar2 + 0x574) = 0;
  uVar1 = _DAT_005a32dc;
  *(uint *)(iVar2 + 0x578) = 0;
  *(uint *)(iVar2 + 0x570) = 0;
  *(uint *)(iVar2 + 0x55c) = uVar1;
  return iVar2;
}
