// Name: core_beast.cpp_FUN_00415050
// Address: 00415050
// Address Range: [[00415050, 004150ab]]
// Convention: unknown
// Signature: int core_beast_cpp_FUN_00415050(undefined4 param_1)

#include "nocturne.h"

int core_beast_cpp_FUN_00415050(uint param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  *(byte ***)(iVar3 + 0x14c) = &PTR_core_beast_cpp_FUN_004150b0_0059a414;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(iVar3 + 0x150,"beast.dfm");
  fVar2 = 100.0f;
  fVar1 = 100.0f;
  *(uint *)(iVar3 + 0x2dd4) = 0x41200000;
  *(uint *)(iVar3 + 0x2dd8) = 0x41200000;
  *(float *)(iVar3 + 0x2ddc) = fVar1;
  *(float *)(iVar3 + 0x2de0) = fVar2;
  return iVar3;
}
