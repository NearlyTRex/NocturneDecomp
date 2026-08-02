// Name: core_sentinel.cpp_CSentinel_ctor_FUN_00505920
// Address: 00505920
// Address Range: [[00505920, 00505985]]
// Convention: __cdecl
// Signature: CSentinel * __cdecl core_sentinel_cpp_CSentinel_ctor_FUN_00505920(CSentinel *this_ptr)

#include "nocturne.h"

CSentinel * __cdecl core_sentinel_cpp_CSentinel_ctor_FUN_00505920(CSentinel *this_ptr)

{
  float fVar1;
  float fVar2;
  CSentinel *pCVar3;
  
  pCVar3 = (CSentinel *)core_enemy_cpp_CEnemy_ctor_FUN_00479560(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CSentinelVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (&(pCVar3->base).base.model,"sentinel.dfm");
  fVar1 = 50.0f;
  (pCVar3->base).base.collision_cylinder_height = 0.6;
  fVar2 = 100.0f;
  (pCVar3->base).base.collision_cylinder_radius = 2.0;
  pCVar3->hover_timer = 0.0;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  return pCVar3;
}
