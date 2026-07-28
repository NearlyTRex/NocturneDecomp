// Name: core_batcreat.cpp_FUN_00412100
// Address: 00412100
// Address Range: [[00412100, 0041215b]]
// Convention: unknown
// Signature: CEnemy * core_batcreat_cpp_FUN_00412100(CEnemy *param_1)

#include "nocturne.h"

CEnemy * core_batcreat_cpp_FUN_00412100(CEnemy *param_1)

{
  float fVar1;
  float fVar2;
  CEnemy *pCVar3;
  
  pCVar3 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  (pCVar3->base).base.vtable._ub =
       (CDemonActor_vtable *)&PTR_core_batcreat_cpp_CBatCreature_setup_FUN_00412160_00599fc4;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (&(pCVar3->base).model,"batcreat.dfm");
  fVar2 = 100.0f;
  fVar1 = 50.0f;
  (pCVar3->base).collision_cylinder_height = 0.6;
  (pCVar3->base).collision_cylinder_radius = 1.5;
  (pCVar3->base).ai_detection_range_min = fVar1;
  (pCVar3->base).ai_detection_range_max = fVar2;
  return pCVar3;
}
