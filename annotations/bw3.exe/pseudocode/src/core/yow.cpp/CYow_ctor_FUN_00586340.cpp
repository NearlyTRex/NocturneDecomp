// Name: core_yow.cpp_CYow_ctor_FUN_00586340
// Address: 00586340
// Address Range: [[00586340, 005863da]]
// Convention: unknown
// Signature: CYow * core_yow_cpp_CYow_ctor_FUN_00586340(CYow *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CYow * core_yow_cpp_CYow_ctor_FUN_00586340(CYow *this_ptr)

{
  float fVar1;
  float fVar2;
  CEventList *this_ptr_00;
  CYow *pCVar3;
  int iVar4;
  
  pCVar3 = (CYow *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CYowVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar3->base).base.model,"blackdog.dfm");
  fVar2 = _DAT_005e65e4;
  fVar1 = _DAT_005e65e0;
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
