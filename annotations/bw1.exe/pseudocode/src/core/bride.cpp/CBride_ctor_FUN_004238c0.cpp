// Name: core_bride.cpp_CBride_ctor_FUN_004238c0
// Address: 004238c0
// Address Range: [[004238c0, 00423939]]
// Convention: __cdecl
// Signature: CBride * __cdecl core_bride_cpp_CBride_ctor_FUN_004238c0(CBride *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBride * __cdecl core_bride_cpp_CBride_ctor_FUN_004238c0(CBride *this_ptr)

{
  float fVar1;
  float fVar2;
  CBride *pCVar3;
  
  pCVar3 = (CBride *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CBrideVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            (&(pCVar3->base).base.model,"bride.dfm");
  (pCVar3->base).base.collision_cylinder_height = 0.75;
  (pCVar3->base).base.collision_cylinder_radius = 1.5;
  fVar1 = _DAT_005fd090;
  pCVar3->action_timer = 0.0;
  fVar2 = _DAT_005fd094;
  (pCVar3->base).base.turn_rate = 1.5707964;
  pCVar3->dismember_death_timer = 0.0;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  return pCVar3;
}
