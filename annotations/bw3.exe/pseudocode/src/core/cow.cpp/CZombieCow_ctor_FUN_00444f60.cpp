// Name: core_cow.cpp_CZombieCow_ctor_FUN_00444f60
// Address: 00444f60
// Address Range: [[00444f60, 00444fcf]]
// Convention: __cdecl
// Signature: CZombieCow * __cdecl core_cow_cpp_CZombieCow_ctor_FUN_00444f60(CZombieCow *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CZombieCow * __cdecl core_cow_cpp_CZombieCow_ctor_FUN_00444f60(CZombieCow *this_ptr)

{
  float fVar1;
  float fVar2;
  CZombieCow *pCVar3;
  
  pCVar3 = (CZombieCow *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CZombieCowVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar3->base).base.model,(char *)0x5b98b0);
  (pCVar3->base).base.collision_cylinder_height = 1.75;
  fVar1 = _DAT_005ddbac;
  (pCVar3->base).base.collision_cylinder_radius = 3.5;
  fVar2 = _DAT_005ddbb0;
  pCVar3->sfx_handle = 0;
  (pCVar3->base).base.turn_rate = 0.7853982;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  return pCVar3;
}
