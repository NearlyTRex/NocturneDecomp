// Name: core_imp.cpp_CImp_ctor_FUN_004d6700
// Address: 004d6700
// Address Range: [[004d6700, 004d6765]]
// Convention: __cdecl
// Signature: CImp * __cdecl core_imp_cpp_CImp_ctor_FUN_004d6700(CImp *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CImp * __cdecl core_imp_cpp_CImp_ctor_FUN_004d6700(CImp *this_ptr)

{
  float fVar1;
  float fVar2;
  CImp *pCVar3;
  
  pCVar3 = (CImp *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CImpVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar3->base).base.model,(char *)0x5c5455);
  fVar1 = _DAT_005e1ef0;
  (pCVar3->base).base.collision_cylinder_height = 0.6;
  fVar2 = _DAT_005e1ef4;
  (pCVar3->base).base.collision_cylinder_radius = 0.5;
  (pCVar3->base).base.gun_flame_ignitable = 0;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  return pCVar3;
}
