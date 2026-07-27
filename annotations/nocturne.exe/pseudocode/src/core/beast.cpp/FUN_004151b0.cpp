// Name: core_beast.cpp_FUN_004151b0
// Address: 004151b0
// Address Range: [[004151b0, 004151c9]]
// Convention: unknown
// Signature: void core_beast_cpp_FUN_004151b0(undefined4 param_1,int param_2)

#include "nocturne.h"

void core_beast_cpp_FUN_004151b0(uint param_1,int param_2)

{
  *(uint *)(param_2 + 4) = 0;
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
  return;
}
