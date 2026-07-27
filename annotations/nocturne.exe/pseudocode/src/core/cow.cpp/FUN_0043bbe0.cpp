// Name: core_cow.cpp_FUN_0043bbe0
// Address: 0043bbe0
// Address Range: [[0043bbe0, 0043bc45]]
// Convention: unknown
// Signature: int core_cow_cpp_FUN_0043bbe0(undefined4 param_1)

#include "nocturne.h"

int core_cow_cpp_FUN_0043bbe0(uint param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  *(byte ***)(iVar3 + 0x14c) = &PTR_core_cow_cpp_CZombieCow_setup_FUN_0043bc50_0059b8a4;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(iVar3 + 0x150,"cow.dfm");
  fVar1 = 50.0f;
  *(uint *)(iVar3 + 0x2dd4) = 0x3fe00000;
  fVar2 = 100.0f;
  *(uint *)(iVar3 + 0x2dd8) = 0x40600000;
  *(uint *)(iVar3 + 0xbd2c) = 0;
  *(float *)(iVar3 + 0x2ddc) = fVar1;
  *(float *)(iVar3 + 0x2de0) = fVar2;
  return iVar3;
}
