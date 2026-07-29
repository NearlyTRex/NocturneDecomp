// Name: core_larva.cpp_CLarva_ctor_FUN_004c4880
// Address: 004c4880
// Address Range: [[004c4880, 004c4903]]
// Convention: __cdecl
// Signature: CLarva * __cdecl core_larva_cpp_CLarva_ctor_FUN_004c4880(CLarva *this_ptr)

#include "nocturne.h"

CLarva * __cdecl core_larva_cpp_CLarva_ctor_FUN_004c4880(CLarva *this_ptr)

{
  float fVar1;
  float fVar2;
  CLarva *pCVar3;
  
  pCVar3 = (CLarva *)core_enemy_cpp_CEnemy_ctor_FUN_00479560(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CLarvaVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (&(pCVar3->base).base.model,"worm.dfm");
  (pCVar3->base).base.collision_cylinder_height = 0.25;
  (pCVar3->base).base.collision_cylinder_radius = 0.5;
  (pCVar3->base).base.blood_type = 1;
  fVar1 = 20.0f;
  (pCVar3->base).base.hit_points = 15.0;
  fVar2 = 100.0f;
  pCVar3->sfx_handles[0] = 0;
  pCVar3->sfx_handles[1] = 0;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  return pCVar3;
}
