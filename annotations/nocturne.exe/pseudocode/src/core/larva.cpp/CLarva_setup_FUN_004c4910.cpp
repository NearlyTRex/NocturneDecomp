// Name: core_larva.cpp_CLarva_setup_FUN_004c4910
// Address: 004c4910
// Address Range: [[004c4910, 004c4966]]
// Convention: unknown
// Signature: void core_larva_cpp_CLarva_setup_FUN_004c4910(int param_1)

#include "nocturne.h"

void core_larva_cpp_CLarva_setup_FUN_004c4910(int param_1)

{
  uint uVar1;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(param_1 + 0x150);
  core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(param_1 + 0x150);
  *(uint *)(param_1 + 0xbd24) = 0;
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  uVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x41f00000);
  *(uint *)(param_1 + 0xbca0) = uVar1;
  return;
}
