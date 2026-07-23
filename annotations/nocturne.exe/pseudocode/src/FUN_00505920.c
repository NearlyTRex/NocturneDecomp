// Name: FUN_00505920
// Address: 00505920
// Address Range: [[00505920, 00505985]]
// Convention: unknown
// Signature: int FUN_00505920(undefined4 param_1)

#include "nocturne.h"

int FUN_00505920(uint param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  *(byte ***)(iVar3 + 0x14c) = &PTR_core_sentinel_cpp_CSentinel_setup_FUN_00505990_005a1754;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (iVar3 + 0x150,"sentinel.dfm");
  fVar1 = 50.0f;
  *(uint *)(iVar3 + 0x2dd4) = 0x3f19999a;
  fVar2 = 100.0f;
  *(uint *)(iVar3 + 0x2dd8) = 0x40000000;
  *(uint *)(iVar3 + 0xbd28) = 0;
  *(float *)(iVar3 + 0x2ddc) = fVar1;
  *(float *)(iVar3 + 0x2de0) = fVar2;
  return iVar3;
}
