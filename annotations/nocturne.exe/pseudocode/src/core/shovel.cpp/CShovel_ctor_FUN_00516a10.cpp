// Name: core_shovel.cpp_CShovel_ctor_FUN_00516a10
// Address: 00516a10
// Address Range: [[00516a10, 00516a8d]]
// Convention: unknown
// Signature: int core_shovel_cpp_CShovel_ctor_FUN_00516a10(undefined4 param_1)

#include "nocturne.h"

int core_shovel_cpp_CShovel_ctor_FUN_00516a10(uint param_1)

{
  int iVar1;
  
  iVar1 = core_weapon_cpp_CWeapon_ctor_FUN_00553d90(param_1);
  *(byte ***)(iVar1 + 0x14c) = &PTR_core_weapon_cpp_CWeapon_setup_FUN_00553f10_005a1c34;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (iVar1 + 0x150,"shoveit.kfm");
  *(uint *)(iVar1 + 0x2d8) = 7;
  *(uint *)(iVar1 + 0x564) = 0xffffffff;
  *(uint *)(iVar1 + 0x560) = 0;
  *(uint *)(iVar1 + 0x2d0) = 0;
  *(uint *)(iVar1 + 0x2d4) = 0;
  *(uint *)(iVar1 + 0x2dc) = 0;
  *(uint *)(iVar1 + 0x2e0) = 0x40a00000;
  *(uint *)(iVar1 + 0x2e4) = 0;
  return iVar1;
}
