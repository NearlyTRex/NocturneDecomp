// Name: core_cow.cpp_CZombieCow_ctor_FUN_0043bbe0
// Address: 0043bbe0
// Address Range: [[0043bbe0, 0043bc45]]
// Convention: __cdecl
// Signature: CZombieCow * __cdecl core_cow_cpp_CZombieCow_ctor_FUN_0043bbe0(CZombieCow *this_ptr)

#include "nocturne.h"

CZombieCow * __cdecl core_cow_cpp_CZombieCow_ctor_FUN_0043bbe0(CZombieCow *this_ptr)

{
  float fVar1;
  float fVar2;
  CZombieCow *pCVar3;
  
  pCVar3 = (CZombieCow *)core_enemy_cpp_CEnemy_ctor_FUN_00479560(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CZombieCowVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (&(pCVar3->base).base.model,"cow.dfm");
  fVar1 = 50.0f;
  (pCVar3->base).base.collision_cylinder_height = 1.75;
  fVar2 = 100.0f;
  (pCVar3->base).base.collision_cylinder_radius = 3.5;
  pCVar3->sfx_handle = 0;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  return pCVar3;
}
