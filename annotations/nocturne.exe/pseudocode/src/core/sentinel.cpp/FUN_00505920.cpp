// Name: core_sentinel.cpp_FUN_00505920
// Address: 00505920
// Address Range: [[00505920, 00505985]]
// Convention: unknown
// Signature: CEnemy * core_sentinel_cpp_FUN_00505920(CEnemy *param_1)

#include "nocturne.h"

CEnemy * core_sentinel_cpp_FUN_00505920(CEnemy *param_1)

{
  CCharacter *pCVar1;
  float fVar2;
  float fVar3;
  CEnemy *pCVar4;
  
  pCVar4 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  (pCVar4->base).base.vtable._ub = &g_CSentinelVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (&(pCVar4->base).model,"sentinel.dfm");
  fVar2 = 50.0f;
  (pCVar4->base).collision_cylinder_height = 0.6;
  fVar3 = 100.0f;
  (pCVar4->base).collision_cylinder_radius = 2.0;
  pCVar1 = &pCVar4[1].base;
  (pCVar1->base).actor_name[4] = '\0';
  (pCVar1->base).actor_name[5] = '\0';
  (pCVar1->base).actor_name[6] = '\0';
  (pCVar1->base).actor_name[7] = '\0';
  (pCVar4->base).ai_detection_range_min = fVar2;
  (pCVar4->base).ai_detection_range_max = fVar3;
  return pCVar4;
}
