// Name: core_drone.cpp_CDrone_ctor_FUN_00462940
// Address: 00462940
// Address Range: [[00462940, 004629af]]
// Convention: __cdecl
// Signature: CDrone * __cdecl core_drone_cpp_CDrone_ctor_FUN_00462940(CDrone *this_ptr)

#include "nocturne.h"

CDrone * __cdecl core_drone_cpp_CDrone_ctor_FUN_00462940(CDrone *this_ptr)

{
  float fVar1;
  float fVar2;
  CDrone *pCVar3;
  
  pCVar3 = (CDrone *)core_enemy_cpp_CEnemy_ctor_FUN_00479560(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub =
       (CDemonActor_vtable *)&PTR_core_drone_cpp_CDrone_setup_FUN_004629b0_0059c714;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (&(pCVar3->base).base.model,"drone.dfm");
  (pCVar3->base).base.collision_cylinder_height = 0.75;
  fVar1 = 50.0f;
  (pCVar3->base).base.collision_cylinder_radius = 1.5;
  fVar2 = 100.0f;
  (pCVar3->base).base.blood_type = 1;
  (pCVar3->base).base.hit_points = 75.0;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  return pCVar3;
}
