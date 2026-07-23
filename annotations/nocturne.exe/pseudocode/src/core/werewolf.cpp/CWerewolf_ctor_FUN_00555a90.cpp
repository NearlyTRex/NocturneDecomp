// Name: core_werewolf.cpp_CWerewolf_ctor_FUN_00555a90
// Address: 00555a90
// Address Range: [[00555a90, 00555b3d]]
// Convention: unknown
// Signature: int core_werewolf_cpp_CWerewolf_ctor_FUN_00555a90(undefined4 param_1)

#include "nocturne.h"

int core_werewolf_cpp_CWerewolf_ctor_FUN_00555a90(uint param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  iVar4 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  *(byte ***)(iVar4 + 0x14c) = &PTR_core_werewolf_cpp_CWerewolf_setup_FUN_00555b40_005a4314;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(iVar4 + 0x150,"wolfbrn.dfm")
  ;
  *(uint *)(iVar4 + 0x2dd4) = 0x3f800000;
  *(uint *)(iVar4 + 0x2dd8) = 0x40000000;
  *(uint *)(iVar4 + 0xbd24) = 0;
  *(uint *)(iVar4 + 0xbd3c) = 1;
  *(uint *)(iVar4 + 0xbd50) = 0;
  fVar1 = 50.0f;
  *(uint *)(iVar4 + 0xbd54) = 0x40a00000;
  fVar2 = 100.0f;
  *(uint *)(iVar4 + 0xbd58) = 0;
  fVar3 = 10.0f;
  *(uint *)(iVar4 + 0xbd5c) = 0;
  *(uint *)(iVar4 + 0xbd60) = 0;
  *(float *)(iVar4 + 0x2ddc) = fVar1;
  *(float *)(iVar4 + 0x2de0) = fVar2;
  *(float *)(iVar4 + 0xbd64) = fVar3;
  return iVar4;
}
