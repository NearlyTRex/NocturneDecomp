// Name: FUN_0040fbc0
// Address: 0040fbc0
// Address Range: [[0040fbc0, 0040fbf8]]
// Convention: unknown
// Signature: void FUN_0040fbc0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040fbc0(int param_1,uint param_2)

{
  core_charactr_cpp_CCharacter_dismember_FUN_00427b60(param_1,0,0xbf800000,1);
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"armour.wav");
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
  return;
}
