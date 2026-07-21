// Name: core_tvbat.cpp_CTVBat_setup_FUN_0054b2a0
// Address: 0054b2a0
// Address Range: [[0054b2a0, 0054b304]]
// Convention: unknown
// Signature: void core_tvbat_cpp_CTVBat_setup_FUN_0054b2a0(int param_1)

#include "nocturne.h"

void core_tvbat_cpp_CTVBat_setup_FUN_0054b2a0(int param_1)

{
  uint uVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(param_1 + 0xbd28);
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  *(uint *)(param_1 + 0x2434) = 0x41200000;
  *(uint *)(param_1 + 0xbf58) = 0;
  *(uint *)(param_1 + 0xbf50) = 0;
  uVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                    (*(uint *)(param_1 + 0xbf48),*(uint *)(param_1 + 0xbf4c));
  *(uint *)(param_1 + 0xbf54) = uVar1;
  return;
}
