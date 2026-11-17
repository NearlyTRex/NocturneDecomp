// Name: core_hecaitmx.cpp_CHecaitomix_ctor_FUN_00597df0
// Address: 00597df0
// Address Range: [[00597df0, 00597e4b]]
// Convention: __cdecl
// Signature: CHecaitomix * __cdecl core_hecaitmx_cpp_CHecaitomix_ctor_FUN_00597df0(CHecaitomix *this_ptr)

#include "nocturne.h"

CHecaitomix * __cdecl core_hecaitmx_cpp_CHecaitomix_ctor_FUN_00597df0(CHecaitomix *this_ptr)

{
  float fVar1;
  float fVar2;
  CHecaitomix *pCVar3;
  
  pCVar3 = (CHecaitomix *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CHecaitomixVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar3->base).base.model,"shadowscorp.dfm");
  fVar2 = 100.0f;
  fVar1 = 50.0f;
  (pCVar3->base).base.collision_cylinder_height = 1.75;
  (pCVar3->base).base.collision_cylinder_radius = 3.5;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  return pCVar3;
}
