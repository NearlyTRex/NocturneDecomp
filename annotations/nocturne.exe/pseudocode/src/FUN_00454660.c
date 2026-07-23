// Name: FUN_00454660
// Address: 00454660
// Address Range: [[00454660, 004546c5]]
// Convention: unknown
// Signature: int FUN_00454660(undefined4 param_1)

#include "nocturne.h"

int FUN_00454660(uint param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  *(byte ***)(iVar3 + 0x14c) = &PTR_core_dog_cpp_CZombieDog_setup_FUN_004546d0_0059c0f4;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(iVar3 + 0x150,"dog.dfm");
  fVar1 = 50.0f;
  *(uint *)(iVar3 + 0x2dd4) = 0x3f400000;
  fVar2 = 100.0f;
  *(uint *)(iVar3 + 0x2dd8) = 0x3fc00000;
  *(uint *)(iVar3 + 0xbd2c) = 0;
  *(float *)(iVar3 + 0x2ddc) = fVar1;
  *(float *)(iVar3 + 0x2de0) = fVar2;
  return iVar3;
}
