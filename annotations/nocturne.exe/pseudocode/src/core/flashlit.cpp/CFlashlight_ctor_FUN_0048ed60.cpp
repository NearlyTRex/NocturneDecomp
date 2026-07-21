// Name: core_flashlit.cpp_CFlashlight_ctor_FUN_0048ed60
// Address: 0048ed60
// Address Range: [[0048ed60, 0048eddf]]
// Convention: unknown
// Signature: int core_flashlit_cpp_CFlashlight_ctor_FUN_0048ed60(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_flashlit_cpp_CFlashlight_ctor_FUN_0048ed60(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = core_weapon_cpp_CWeapon_ctor_FUN_00553d90(param_1);
  *(byte ***)(iVar2 + 0x14c) = &PTR_core_weapon_cpp_CWeapon_setup_FUN_00553f10_0059d8f4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (iVar2 + 0x150,"flashlit.kfm");
  *(uint *)(iVar2 + 0x2d0) = 0;
  *(uint *)(iVar2 + 0x2d4) = 0;
  *(uint *)(iVar2 + 0x2d8) = 5;
  *(uint *)(iVar2 + 0x2dc) = 0;
  *(uint *)(iVar2 + 0x2e0) = 0;
  uVar1 = _DAT_0059d8ec;
  *(uint *)(iVar2 + 0x2e4) = 0;
  *(uint *)(iVar2 + 0x560) = 0;
  *(uint *)(iVar2 + 0x55c) = uVar1;
  return iVar2;
}
