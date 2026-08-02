// Name: core_bride.cpp_CBride_ctor_FUN_0041fbb0
// Address: 0041fbb0
// Address Range: [[0041fbb0, 0041fc15]]
// Convention: __cdecl
// Signature: CBride * __cdecl core_bride_cpp_CBride_ctor_FUN_0041fbb0(CBride *this_ptr)

#include "nocturne.h"

CBride * __cdecl core_bride_cpp_CBride_ctor_FUN_0041fbb0(CBride *this_ptr)

{
  float fVar1;
  float fVar2;
  CBride *pCVar3;
  
  pCVar3 = (CBride *)core_enemy_cpp_CEnemy_ctor_FUN_00479560(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CBrideVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (&(pCVar3->base).base.model,"bride.dfm");
  fVar1 = 50.0f;
  (pCVar3->base).base.collision_cylinder_height = 0.75;
  fVar2 = 100.0f;
  (pCVar3->base).base.collision_cylinder_radius = 1.5;
  pCVar3->action_timer = 0.0;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  return pCVar3;
}
