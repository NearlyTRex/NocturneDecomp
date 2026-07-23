// Name: core_hotdemon.cpp_CHotDemon_ctor_FUN_004b8ca0
// Address: 004b8ca0
// Address Range: [[004b8ca0, 004b8cfb]]
// Convention: __cdecl
// Signature: int __cdecl core_hotdemon_cpp_CHotDemon_ctor_FUN_004b8ca0(undefined4 param_1)

#include "nocturne.h"

int __cdecl core_hotdemon_cpp_CHotDemon_ctor_FUN_004b8ca0(uint param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  *(byte ***)(iVar3 + 0x14c) = &PTR_core_hotdemon_cpp_CHotDemon_setup_FUN_004b8d00_0059f0d4;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (iVar3 + 0x150,"hotdemon.dfm");
  fVar2 = 100.0f;
  fVar1 = 50.0f;
  *(uint *)(iVar3 + 0x2dd4) = 0x3f19999a;
  *(uint *)(iVar3 + 0x2dd8) = 0x3f666666;
  *(float *)(iVar3 + 0x2ddc) = fVar1;
  *(float *)(iVar3 + 0x2de0) = fVar2;
  return iVar3;
}
