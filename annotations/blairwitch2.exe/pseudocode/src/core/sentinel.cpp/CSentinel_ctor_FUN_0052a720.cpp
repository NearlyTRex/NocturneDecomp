// Name: core_sentinel.cpp_CSentinel_ctor_FUN_0052a720
// Address: 0052a720
// Address Range: [[0052a720, 0052a785]]
// Convention: __cdecl
// Signature: CSentinel * __cdecl core_sentinel_cpp_CSentinel_ctor_FUN_0052a720(CSentinel *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSentinel * __cdecl core_sentinel_cpp_CSentinel_ctor_FUN_0052a720(CSentinel *this_ptr)

{
  float fVar1;
  float fVar2;
  CSentinel *pCVar3;
  
  pCVar3 = (CSentinel *)core_enemy_cpp_CEnemy_ctor_FUN_00487db0(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CSentinelVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(pCVar3->base).base.model,"sentinel.dfm");
  fVar1 = _DAT_005fb04c;
  (pCVar3->base).base.collision_cylinder_height = 0.6;
  fVar2 = _DAT_005fb050;
  (pCVar3->base).base.collision_cylinder_radius = 2.0;
  pCVar3->hover_timer = 0.0;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  return pCVar3;
}
