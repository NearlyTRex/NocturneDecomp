// Name: core_shotgun.cpp_CShadowsc_ctor_FUN_005462c0
// Address: 005462c0
// Address Range: [[005462c0, 0054635a]]
// Convention: unknown
// Signature: CShadowsc * core_shotgun_cpp_CShadowsc_ctor_FUN_005462c0(CShadowsc *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CShadowsc * core_shotgun_cpp_CShadowsc_ctor_FUN_005462c0(CShadowsc *this_ptr)

{
  float fVar1;
  float fVar2;
  CEventList *this_ptr_00;
  CShadowsc *pCVar3;
  int iVar4;
  
  pCVar3 = (CShadowsc *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CShadowscVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar3->base).base.model,"shadowscorp.dfm");
  fVar2 = _DAT_005e4354;
  fVar1 = _DAT_005e4350;
  (pCVar3->base).base.collision_cylinder_height = 0.75;
  (pCVar3->base).base.collision_cylinder_radius = 1.5;
  this_ptr_00 = 0x01C6E360;
  pCVar3->sfx_handle = 0;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (this_ptr_00,"COMBATMODEHARD");
  if (iVar4 != 0) {
    pCVar3->difficulty_speed_scale = 1.0;
    return pCVar3;
  }
  pCVar3->difficulty_speed_scale = 0.75;
  return pCVar3;
}
