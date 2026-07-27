// Name: core_succubus.cpp_FUN_00541810
// Address: 00541810
// Address Range: [[00541810, 00541829]]
// Convention: unknown
// Signature: void core_succubus_cpp_FUN_00541810(undefined4 param_1,int param_2)

#include "nocturne.h"

void core_succubus_cpp_FUN_00541810(uint param_1,int param_2)

{
  *(uint *)(param_2 + 4) = 0;
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
  return;
}
