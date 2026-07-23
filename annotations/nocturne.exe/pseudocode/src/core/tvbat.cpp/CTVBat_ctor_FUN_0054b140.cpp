// Name: core_tvbat.cpp_CTVBat_ctor_FUN_0054b140
// Address: 0054b140
// Address Range: [[0054b140, 0054b299]]
// Convention: unknown
// Signature: int core_tvbat_cpp_CTVBat_ctor_FUN_0054b140(undefined4 param_1)

#include "nocturne.h"

int core_tvbat_cpp_CTVBat_ctor_FUN_0054b140(uint param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  
  iVar1 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(iVar1 + 0xbd28);
  *(byte ***)(iVar1 + -0xbbdc) = &PTR_core_tvbat_cpp_CTVBat_setup_FUN_0054b2a0_005a38f4;
  *(uint *)(iVar1 + -4) = 0;
  *(uint *)(iVar1 + 0x180) = 0;
  uVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3f666666,0x3f8ccccd);
  *(uint *)(iVar1 + 0x17c) = uVar2;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(iVar1,"bat.kfm");
  *(uint *)(iVar1 + 0x194) = 0x40a00000;
  *(uint *)(iVar1 + 400) = 0x41700000;
  fVar3 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3f666666,0x3f8ccccd);
  *(float *)(iVar1 + 0x19c) = fVar3 * 10.0f;
  fVar3 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3f666666,0x3f8ccccd);
  *(float *)(iVar1 + 0x198) = fVar3 * 2.0f;
  uVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x3f800000);
  *(uint *)(iVar1 + 0x1a4) = 0;
  *(uint *)(iVar1 + 0x1a8) = 0;
  *(uint *)(iVar1 + 0x1b8) = 0;
  *(uint *)(iVar1 + -0x970c) = 0;
  *(uint *)(iVar1 + 0x230) = 0;
  *(byte *)(iVar1 + 0x1bc) = 0;
  *(uint *)(iVar1 + 0x220) = 0x41700000;
  *(uint *)(iVar1 + 0x224) = 0x41f00000;
  *(uint *)(iVar1 + 0x22c) = 0;
  *(uint *)(iVar1 + 0x1a0) = uVar2;
  return iVar1 + -0xbd28;
}
