// Name: core_armour.cpp_FUN_0040fbc0
// Address: 0040fbc0
// Address Range: [[0040fbc0, 0040fbf8]]
// Convention: unknown
// Signature: void core_armour_cpp_FUN_0040fbc0(CEnemy *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_armour_cpp_FUN_0040fbc0(CEnemy *param_1,SDamageInfo *param_2)

{
  core_charactr_cpp_CCharacter_dismember_FUN_00427b60(&param_1->base,(CVector3f *)0x0,-1.0,1);
  (*((param_1->base).base.vtable._ub)->playSound)((CDemonActor *)param_1,"armour.wav");
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
  return;
}
