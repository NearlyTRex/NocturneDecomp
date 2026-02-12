// Name: core_hotdemon.cpp_CHotDemon_ctor_FUN_004f6ca0
// Address: 004f6ca0
// Address Range: [[004f6ca0, 004f6cfb]]
// Convention: __cdecl
// Signature: CHotDemon * __cdecl core_hotdemon_cpp_CHotDemon_ctor_FUN_004f6ca0(CHotDemon *this_ptr)

#include "nocturne.h"

CHotDemon * __cdecl core_hotdemon_cpp_CHotDemon_ctor_FUN_004f6ca0(CHotDemon *this_ptr)

{
  float fVar1;
  float fVar2;
  CHotDemon *pCVar3;
  
  pCVar3 = (CHotDemon *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CHotDemonVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar3->base).base.model,"hotdemon.dfm");
  fVar2 = 100.0f;
  fVar1 = 50.0f;
  (pCVar3->base).base.collision_cylinder_height = 0.6;
  (pCVar3->base).base.collision_cylinder_radius = 0.9;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  return pCVar3;
}
