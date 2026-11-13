// Name: core_shadowsc.cpp_CShadowsc_ctor_FUN_005604a0
// Address: 005604a0
// Address Range: [[005604a0, 0056050f]]
// Convention: __cdecl
// Signature: CShadowsc * __cdecl core_shadowsc_cpp_CShadowsc_ctor_FUN_005604a0(CShadowsc *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CShadowsc * __cdecl core_shadowsc_cpp_CShadowsc_ctor_FUN_005604a0(CShadowsc *this_ptr)

{
  float fVar1;
  float fVar2;
  CShadowsc *pCVar3;
  
  pCVar3 = (CShadowsc *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CShadowscVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            (&(pCVar3->base).base.model,"shadowscorp.dfm");
  (pCVar3->base).base.collision_cylinder_height = 1.75;
  fVar1 = _DAT_00605340;
  (pCVar3->base).base.collision_cylinder_radius = 3.5;
  fVar2 = _DAT_00605344;
  pCVar3->sfx_handle = 0;
  pCVar3->sound_cooldown = 0.0;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  return pCVar3;
}
