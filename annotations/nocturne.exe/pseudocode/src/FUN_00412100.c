// Name: FUN_00412100
// Address: 00412100
// Address Range: [[00412100, 0041215b]]
// Convention: unknown
// Signature: int FUN_00412100(undefined4 param_1)

#include "nocturne.h"

int FUN_00412100(uint param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  *(byte ***)(iVar3 + 0x14c) = &PTR_core_batcreat_cpp_CBatCreature_setup_FUN_00412160_00599fc4;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (iVar3 + 0x150,"batcreat.dfm");
  fVar2 = 100.0f;
  fVar1 = 50.0f;
  *(uint *)(iVar3 + 0x2dd4) = 0x3f19999a;
  *(uint *)(iVar3 + 0x2dd8) = 0x3fc00000;
  *(float *)(iVar3 + 0x2ddc) = fVar1;
  *(float *)(iVar3 + 0x2de0) = fVar2;
  return iVar3;
}
