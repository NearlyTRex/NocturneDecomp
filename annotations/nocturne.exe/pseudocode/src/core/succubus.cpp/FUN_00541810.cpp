// Name: core_succubus.cpp_FUN_00541810
// Address: 00541810
// Address Range: [[00541810, 00541829]]
// Convention: unknown
// Signature: void core_succubus_cpp_FUN_00541810(CEnemy *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_succubus_cpp_FUN_00541810(CEnemy *param_1,SDamageInfo *param_2)

{
  param_2->damage_amount = 0.0;
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
  return;
}
