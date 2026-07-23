// Name: core_larva.cpp_CLarva_ctor_FUN_004c4880
// Address: 004c4880
// Address Range: [[004c4880, 004c4903]]
// Convention: unknown
// Signature: int core_larva_cpp_CLarva_ctor_FUN_004c4880(undefined4 param_1)

#include "nocturne.h"

int core_larva_cpp_CLarva_ctor_FUN_004c4880(uint param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  *(byte ***)(iVar3 + 0x14c) = &PTR_core_larva_cpp_CLarva_setup_FUN_004c4910_0059fa84;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(iVar3 + 0x150,"worm.dfm");
  *(uint *)(iVar3 + 0x2dd4) = 0x3e800000;
  *(uint *)(iVar3 + 0x2dd8) = 0x3f000000;
  *(uint *)(iVar3 + 0x2608) = 1;
  fVar1 = 20.0f;
  *(uint *)(iVar3 + 0x2434) = 0x41700000;
  fVar2 = 100.0f;
  *(uint *)(iVar3 + 0xbd28) = 0;
  *(uint *)(iVar3 + 0xbd2c) = 0;
  *(float *)(iVar3 + 0x2ddc) = fVar1;
  *(float *)(iVar3 + 0x2de0) = fVar2;
  return iVar3;
}
