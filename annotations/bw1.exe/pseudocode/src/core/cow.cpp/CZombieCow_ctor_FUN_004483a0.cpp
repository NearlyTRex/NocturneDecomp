// Name: core_cow.cpp_CZombieCow_ctor_FUN_004483a0
// Address: 004483a0
// Address Range: [[004483a0, 0044840f]]
// Convention: unknown
// Signature: CZombieCow * core_cow_cpp_CZombieCow_ctor_FUN_004483a0(CZombieCow *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CZombieCow * core_cow_cpp_CZombieCow_ctor_FUN_004483a0(CZombieCow *this_ptr)

{
  float fVar1;
  float fVar2;
  CZombieCow *pCVar3;
  
  pCVar3 = (CZombieCow *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CZombieCowVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            (&(pCVar3->base).base.model,(char *)0x5d71f9);
  (pCVar3->base).base.collision_cylinder_height = 1.75;
  fVar1 = _DAT_005fe0ac;
  (pCVar3->base).base.collision_cylinder_radius = 3.5;
  fVar2 = _DAT_005fe0b0;
  pCVar3->sfx_handle = 0;
  (pCVar3->base).base.turn_rate = 0.7853982;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  return pCVar3;
}
