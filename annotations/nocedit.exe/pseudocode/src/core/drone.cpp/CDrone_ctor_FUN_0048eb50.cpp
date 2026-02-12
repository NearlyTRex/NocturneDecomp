// Name: core_drone.cpp_CDrone_ctor_FUN_0048eb50
// Address: 0048eb50
// Address Range: [[0048eb50, 0048ebbf]]
// Convention: __cdecl
// Signature: CDrone * __cdecl core_drone_cpp_CDrone_ctor_FUN_0048eb50(CDrone *this_ptr)

#include "nocturne.h"

CDrone * __cdecl core_drone_cpp_CDrone_ctor_FUN_0048eb50(CDrone *this_ptr)

{
  float fVar1;
  float fVar2;
  CDrone *pCVar3;
  
  pCVar3 = (CDrone *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CDroneVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar3->base).base.model,"drone.dfm");
  (pCVar3->base).base.collision_cylinder_height = 0.75;
  fVar1 = 50.0f;
  (pCVar3->base).base.collision_cylinder_radius = 1.5;
  fVar2 = 100.0f;
  (pCVar3->base).base.collision_layer = 1;
  (pCVar3->base).base.hit_points = 75.0;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  return pCVar3;
}
