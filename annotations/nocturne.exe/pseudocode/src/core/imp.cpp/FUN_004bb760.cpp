// Name: core_imp.cpp_FUN_004bb760
// Address: 004bb760
// Address Range: [[004bb760, 004bb7c5]]
// Convention: unknown
// Signature: CEnemy * core_imp_cpp_FUN_004bb760(CEnemy *param_1)

#include "nocturne.h"

CEnemy * core_imp_cpp_FUN_004bb760(CEnemy *param_1)

{
  float fVar1;
  float fVar2;
  CEnemy *pCVar3;
  
  pCVar3 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  (pCVar3->base).base.vtable._ub =
       (CDemonActor_vtable *)&PTR_core_imp_cpp_CImp_setup_FUN_004bb7d0_0059f584;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (&(pCVar3->base).model,"imp.dfm");
  fVar1 = 50.0f;
  (pCVar3->base).collision_cylinder_height = 0.6;
  fVar2 = 100.0f;
  (pCVar3->base).collision_cylinder_radius = 0.5;
  (pCVar3->base).show_in_editor = 0;
  (pCVar3->base).ai_detection_range_min = fVar1;
  (pCVar3->base).ai_detection_range_max = fVar2;
  return pCVar3;
}
