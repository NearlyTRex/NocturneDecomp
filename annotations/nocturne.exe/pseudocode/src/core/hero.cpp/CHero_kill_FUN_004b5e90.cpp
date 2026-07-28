// Name: core_hero.cpp_CHero_kill_FUN_004b5e90
// Address: 004b5e90
// Address Range: [[004b5e90, 004b5eb5]]
// Convention: unknown
// Signature: void core_hero_cpp_CHero_kill_FUN_004b5e90(CCharacter *param_1,int param_2,CVector3f *param_3,float param_4)

#include "nocturne.h"

void core_hero_cpp_CHero_kill_FUN_004b5e90(CCharacter *param_1,int param_2,CVector3f *param_3,float param_4)

{
  param_1[1].base.actor_name[0] = '\0';
  param_1[1].base.actor_name[1] = '\0';
  param_1[1].base.actor_name[2] = '\0';
  param_1[1].base.actor_name[3] = '\0';
  core_charactr_cpp_CCharacter_kill_FUN_00424f40(param_1,param_2,param_3,param_4);
  return;
}
