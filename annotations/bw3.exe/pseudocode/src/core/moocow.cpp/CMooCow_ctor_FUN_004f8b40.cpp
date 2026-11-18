// Name: core_moocow.cpp_CMooCow_ctor_FUN_004f8b40
// Address: 004f8b40
// Address Range: [[004f8b40, 004f8baf]]
// Convention: __cdecl
// Signature: CMooCow * __cdecl core_moocow_cpp_CMooCow_ctor_FUN_004f8b40(CMooCow *this_ptr)

#include "nocturne.h"

CMooCow * __cdecl core_moocow_cpp_CMooCow_ctor_FUN_004f8b40(CMooCow *this_ptr)

{
  float fVar1;
  float fVar2;
  CMooCow *pCVar3;
  
  pCVar3 = (CMooCow *)core_charactr_cpp_CCharacter_ctor_FUN_0042ac20(&this_ptr->base);
  (pCVar3->base).base.vtable._ub = &g_CMooCowVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar3->base).model,"moocow.dfm");
  (pCVar3->base).collision_cylinder_height = 1.75;
  fVar1 = 50.0f;
  (pCVar3->base).collision_cylinder_radius = 3.5;
  fVar2 = 100.0f;
  pCVar3->sfx_handle = 0;
  (pCVar3->base).turn_rate = 0.7853982;
  (pCVar3->base).ai_detection_range_min = fVar1;
  (pCVar3->base).ai_detection_range_max = fVar2;
  return pCVar3;
}
