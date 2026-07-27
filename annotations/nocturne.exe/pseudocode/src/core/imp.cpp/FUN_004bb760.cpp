// Name: core_imp.cpp_FUN_004bb760
// Address: 004bb760
// Address Range: [[004bb760, 004bb7c5]]
// Convention: unknown
// Signature: int core_imp_cpp_FUN_004bb760(undefined4 param_1)

#include "nocturne.h"

int core_imp_cpp_FUN_004bb760(uint param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  *(byte ***)(iVar3 + 0x14c) = &PTR_core_imp_cpp_CImp_setup_FUN_004bb7d0_0059f584;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(iVar3 + 0x150,"imp.dfm");
  fVar1 = 50.0f;
  *(uint *)(iVar3 + 0x2dd4) = 0x3f19999a;
  fVar2 = 100.0f;
  *(uint *)(iVar3 + 0x2dd8) = 0x3f000000;
  *(uint *)(iVar3 + 0x261c) = 0;
  *(float *)(iVar3 + 0x2ddc) = fVar1;
  *(float *)(iVar3 + 0x2de0) = fVar2;
  return iVar3;
}
