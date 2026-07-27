// Name: core_bride.cpp_FUN_0041fbb0
// Address: 0041fbb0
// Address Range: [[0041fbb0, 0041fc15]]
// Convention: unknown
// Signature: int core_bride_cpp_FUN_0041fbb0(undefined4 param_1)

#include "nocturne.h"

int core_bride_cpp_FUN_0041fbb0(uint param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  *(byte ***)(iVar3 + 0x14c) = &PTR_core_bride_cpp_CBride_setup_FUN_0041fc20_0059ad24;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(iVar3 + 0x150,"bride.dfm");
  fVar1 = 50.0f;
  *(uint *)(iVar3 + 0x2dd4) = 0x3f400000;
  fVar2 = 100.0f;
  *(uint *)(iVar3 + 0x2dd8) = 0x3fc00000;
  *(uint *)(iVar3 + 0xbd48) = 0;
  *(float *)(iVar3 + 0x2ddc) = fVar1;
  *(float *)(iVar3 + 0x2de0) = fVar2;
  return iVar3;
}
