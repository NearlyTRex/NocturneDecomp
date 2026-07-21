// Name: FUN_00415430
// Address: 00415430
// Address Range: [[00415430, 004154a7]]
// Convention: unknown
// Signature: void FUN_00415430(int param_1)

#include "nocturne.h"

void FUN_00415430(int param_1)

{
  int iVar1;
  uint uVar2;
  
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(param_1 + 0x150);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(param_1 + 0xbd24);
  iVar1 = param_1 + 0xbea8;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170(iVar1,0,param_1 + 0x150);
  uVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(param_1 + 0xbd24,0);
  core_morph_cpp_CMorph_setupModelFromKeyframed_FUN_004e01b0(iVar1,1,uVar2);
  core_morph_cpp_CMorph_getReady_FUN_004e03c0(iVar1);
  *(uint *)(param_1 + 0xbea0) = 0;
  *(uint *)(param_1 + 0xbea4) = 0;
  return;
}
