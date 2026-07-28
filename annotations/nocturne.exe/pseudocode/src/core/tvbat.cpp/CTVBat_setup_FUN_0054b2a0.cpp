// Name: core_tvbat.cpp_CTVBat_setup_FUN_0054b2a0
// Address: 0054b2a0
// Address Range: [[0054b2a0, 0054b304]]
// Convention: unknown
// Signature: void core_tvbat_cpp_CTVBat_setup_FUN_0054b2a0(CEnemy *param_1)

#include "nocturne.h"

void core_tvbat_cpp_CTVBat_setup_FUN_0054b2a0(CEnemy *param_1)

{
  float fVar1;
  float fVar2;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
            ((CKeyFramedModelInstance *)(param_1[1].base.base.actor_name + 4));
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  (param_1->base).hit_points = 10.0;
  param_1[1].base.model.transformed_vertices[0xb].z = 0.0;
  fVar2 = param_1[1].base.model.transformed_vertices[10].z;
  fVar1 = param_1[1].base.model.transformed_vertices[10].y;
  param_1[1].base.model.transformed_vertices[0xb].x = 0.0;
  fVar2 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(fVar1,fVar2);
  param_1[1].base.model.transformed_vertices[0xb].y = fVar2;
  return;
}
