// Name: core_sentinel.cpp_CSentinel_ctor_FUN_00531100
// Address: 00531100
// Address Range: [[00531100, 00531165]]
// Convention: __cdecl
// Signature: CSentinel * __cdecl core_sentinel_cpp_CSentinel_ctor_FUN_00531100(CSentinel *this_ptr)

#include "nocturne.h"

CSentinel * __cdecl core_sentinel_cpp_CSentinel_ctor_FUN_00531100(CSentinel *this_ptr)

{
  float fVar1;
  float fVar2;
  CSentinel *pCVar3;
  
  pCVar3 = (CSentinel *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CSentinelVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
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
