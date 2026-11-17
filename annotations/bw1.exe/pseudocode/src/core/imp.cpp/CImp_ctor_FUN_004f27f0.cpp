// Name: core_imp.cpp_CImp_ctor_FUN_004f27f0
// Address: 004f27f0
// Address Range: [[004f27f0, 004f2855]]
// Convention: __cdecl
// Signature: CImp * __cdecl core_imp_cpp_CImp_ctor_FUN_004f27f0(CImp *this_ptr)

#include "nocturne.h"

CImp * __cdecl core_imp_cpp_CImp_ctor_FUN_004f27f0(CImp *this_ptr)

{
  float fVar1;
  float fVar2;
  CImp *pCVar3;
  
  pCVar3 = (CImp *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CImpVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            (&(pCVar3->base).base.model,"imp.dfm");
  fVar1 = 50.0f;
  (pCVar3->base).base.collision_cylinder_height = 0.6;
  fVar2 = 100.0f;
  (pCVar3->base).base.collision_cylinder_radius = 0.5;
  (pCVar3->base).base.gun_flame_ignitable = 0;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  return pCVar3;
}
