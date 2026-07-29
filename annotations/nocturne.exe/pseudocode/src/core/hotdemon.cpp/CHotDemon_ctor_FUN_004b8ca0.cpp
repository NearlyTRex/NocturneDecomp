// Name: core_hotdemon.cpp_CHotDemon_ctor_FUN_004b8ca0
// Address: 004b8ca0
// Address Range: [[004b8ca0, 004b8cfb]]
// Convention: __cdecl
// Signature: CHotDemon * __cdecl core_hotdemon_cpp_CHotDemon_ctor_FUN_004b8ca0(CHotDemon *this_ptr)

#include "nocturne.h"

CHotDemon * __cdecl core_hotdemon_cpp_CHotDemon_ctor_FUN_004b8ca0(CHotDemon *this_ptr)

{
  float fVar1;
  float fVar2;
  CHotDemon *pCVar3;
  
  pCVar3 = (CHotDemon *)core_enemy_cpp_CEnemy_ctor_FUN_00479560(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CHotDemonVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (&(pCVar3->base).base.model,"hotdemon.dfm");
  fVar2 = 100.0f;
  fVar1 = 50.0f;
  (pCVar3->base).base.collision_cylinder_height = 0.6;
  (pCVar3->base).base.collision_cylinder_radius = 0.9;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  return pCVar3;
}
