// Name: core_bugs.cpp_FUN_004219d0
// Address: 004219d0
// Address Range: [[004219d0, 004219e9]]
// Convention: unknown
// Signature: void core_bugs_cpp_FUN_004219d0(CEnemy *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_bugs_cpp_FUN_004219d0(CEnemy *param_1,SDamageInfo *param_2)

{
  param_2->damage_amount = 0.0;
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
  return;
}
