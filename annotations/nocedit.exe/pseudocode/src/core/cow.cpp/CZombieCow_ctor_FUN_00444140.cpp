// Name: core_cow.cpp_CZombieCow_ctor_FUN_00444140
// Address: 00444140
// Address Range: [[00444140, 004441a5]]
// Convention: __cdecl
// Signature: CZombieCow * __cdecl core_cow_cpp_CZombieCow_ctor_FUN_00444140(CZombieCow *this_ptr)

#include "nocturne.h"

CZombieCow * __cdecl core_cow_cpp_CZombieCow_ctor_FUN_00444140(CZombieCow *this_ptr)

{
  float fVar1;
  float fVar2;
  CZombieCow *pCVar3;
  
  pCVar3 = (CZombieCow *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CZombieCowVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
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
