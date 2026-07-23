// Name: core_smiley.cpp_CSmiley_ctor_FUN_0051fcf0
// Address: 0051fcf0
// Address Range: [[0051fcf0, 0051fd87]]
// Convention: unknown
// Signature: int core_smiley_cpp_CSmiley_ctor_FUN_0051fcf0(undefined4 param_1)

#include "nocturne.h"

int core_smiley_cpp_CSmiley_ctor_FUN_0051fcf0(uint param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  *(byte ***)(iVar3 + 0x14c) = &PTR_core_smiley_cpp_CSmiley_setup_FUN_0051fd90_005a1fb4;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(iVar3 + 0x150,"smiley.dfm");
  *(uint *)(iVar3 + 0xbd24) = 0;
  *(uint *)(iVar3 + 0xbd28) = 0x42c80000;
  *(uint *)(iVar3 + 0x2dd4) = 0x3f19999a;
  *(uint *)(iVar3 + 0x2dd8) = 0x3f666666;
  *(uint *)(iVar3 + 0xbd58) = 0;
  fVar1 = 50.0f;
  *(uint *)(iVar3 + 0xbd5c) = 0;
  fVar2 = 100.0f;
  *(uint *)(iVar3 + 0xbd60) = 0;
  *(uint *)(iVar3 + 0xbd64) = 1;
  *(float *)(iVar3 + 0x2ddc) = fVar1;
  *(float *)(iVar3 + 0x2de0) = fVar2;
  return iVar3;
}
