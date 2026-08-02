// Name: core_imp.cpp_CImp_ctor_FUN_004bb760
// Address: 004bb760
// Address Range: [[004bb760, 004bb7c5]]
// Convention: __cdecl
// Signature: CImp * __cdecl core_imp_cpp_CImp_ctor_FUN_004bb760(CImp *this_ptr)

#include "nocturne.h"

CImp * __cdecl core_imp_cpp_CImp_ctor_FUN_004bb760(CImp *this_ptr)

{
  float fVar1;
  float fVar2;
  CImp *pCVar3;
  
  pCVar3 = (CImp *)core_enemy_cpp_CEnemy_ctor_FUN_00479560(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CImpVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (&(pCVar3->base).base.model,"imp.dfm");
  fVar1 = 50.0f;
  (pCVar3->base).base.collision_cylinder_height = 0.6;
  fVar2 = 100.0f;
  (pCVar3->base).base.collision_cylinder_radius = 0.5;
  (pCVar3->base).base.show_in_editor = 0;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  return pCVar3;
}
