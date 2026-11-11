// Name: core_moocow.cpp_CMooCow_ctor_FUN_00521300
// Address: 00521300
// Address Range: [[00521300, 0052136f]]
// Convention: unknown
// Signature: CMooCow * core_moocow_cpp_CMooCow_ctor_FUN_00521300(CMooCow *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CMooCow * core_moocow_cpp_CMooCow_ctor_FUN_00521300(CMooCow *this_ptr)

{
  float fVar1;
  float fVar2;
  CMooCow *pCVar3;
  
  pCVar3 = (CMooCow *)core_charactr_cpp_CCharacter_ctor_FUN_0042c080(&this_ptr->base);
  (pCVar3->base).base.vtable._ub = &g_CMooCowVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            (&(pCVar3->base).model,"moocow.dfm");
  (pCVar3->base).collision_cylinder_height = 1.75;
  fVar1 = _DAT_006040a8;
  (pCVar3->base).collision_cylinder_radius = 3.5;
  fVar2 = _DAT_006040ac;
  pCVar3->sfx_handle = 0;
  (pCVar3->base).turn_rate = 0.7853982;
  (pCVar3->base).ai_detection_range_min = fVar1;
  (pCVar3->base).ai_detection_range_max = fVar2;
  return pCVar3;
}
