// Name: core_bride.cpp_FUN_0041fbb0
// Address: 0041fbb0
// Address Range: [[0041fbb0, 0041fc15]]
// Convention: unknown
// Signature: CEnemy * core_bride_cpp_FUN_0041fbb0(CEnemy *param_1)

#include "nocturne.h"

CEnemy * core_bride_cpp_FUN_0041fbb0(CEnemy *param_1)

{
  float fVar1;
  float fVar2;
  CEnemy *pCVar3;
  
  pCVar3 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  (pCVar3->base).base.vtable._ub =
       (CDemonActor_vtable *)&PTR_core_bride_cpp_CBride_setup_FUN_0041fc20_0059ad24;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (&(pCVar3->base).model,"bride.dfm");
  fVar1 = 50.0f;
  (pCVar3->base).collision_cylinder_height = 0.75;
  fVar2 = 100.0f;
  (pCVar3->base).collision_cylinder_radius = 1.5;
  pCVar3[1].base.base.location.position.y = 0.0;
  (pCVar3->base).ai_detection_range_min = fVar1;
  (pCVar3->base).ai_detection_range_max = fVar2;
  return pCVar3;
}
