// Name: core_tvbat.cpp_CTVBat_processDamage_FUN_0054c120
// Address: 0054c120
// Address Range: [[0054c120, 0054c18d]]
// Convention: unknown
// Signature: void core_tvbat_cpp_CTVBat_processDamage_FUN_0054c120(CEnemy *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_tvbat_cpp_CTVBat_processDamage_FUN_0054c120(CEnemy *param_1,SDamageInfo *param_2)

{
  float fVar1;
  CGore *this_ptr;
  
  fVar1 = (param_1->base).hit_points - param_2->damage_amount;
  (param_1->base).hit_points = fVar1;
  this_ptr = g_CGore_PTR_005b96c4;
  if (0.0 < fVar1) {
    core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
    return;
  }
  (param_1->base).hit_points = 0.0;
  core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
            (this_ptr,&(param_1->base).base.location.position,(CVector3f *)0x0,10,0);
  param_1[1].base.model.transformed_vertices[1].z = 1.4013e-45;
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
  return;
}
