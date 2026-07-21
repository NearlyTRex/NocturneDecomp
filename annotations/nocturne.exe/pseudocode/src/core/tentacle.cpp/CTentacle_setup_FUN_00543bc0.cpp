// Name: core_tentacle.cpp_CTentacle_setup_FUN_00543bc0
// Address: 00543bc0
// Address Range: [[00543bc0, 00543c41]]
// Convention: unknown
// Signature: void core_tentacle_cpp_CTentacle_setup_FUN_00543bc0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_tentacle_cpp_CTentacle_setup_FUN_00543bc0(int param_1)

{
  uint uVar1;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(param_1 + 0x150);
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  uVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(param_1 + 0x150);
  _DAT_02dca1d0 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"bipp02",1);
  _DAT_02dca1d4 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"bipp05",1);
  _DAT_02dca1d8 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"bipp06",1);
  _DAT_02dca1dc = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar1,"bipp09",1);
  return;
}
