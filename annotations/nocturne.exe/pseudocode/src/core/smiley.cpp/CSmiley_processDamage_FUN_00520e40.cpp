// Name: core_smiley.cpp_CSmiley_processDamage_FUN_00520e40
// Address: 00520e40
// Address Range: [[00520e40, 00520f45]]
// Convention: __cdecl
// Signature: void __cdecl core_smiley_cpp_CSmiley_processDamage_FUN_00520e40(CSmiley *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_smiley_cpp_CSmiley_processDamage_FUN_00520e40(CSmiley *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  EDamageType EVar1;
  float fVar2;
  SMotion *pSVar3;
  
  if (this_ptr->model_variant != 1) {
    damage_info->damage_type = DAMAGE_TYPE_IMMUNE;
    damage_info->damage_amount = 0.0;
    return;
  }
  EVar1 = damage_info->damage_type;
  if (EVar1 == DAMAGE_TYPE_SHATTER) {
    damage_info->damage_type = DAMAGE_TYPE_IMMUNE;
  }
  else if (((int)EVar1 < 0xc) || (EVar1 == DAMAGE_TYPE_PIERCING)) goto LAB_00520e74;
  damage_info->damage_amount = 0.0;
LAB_00520e74:
  if (0.0 < damage_info->damage_amount) {
    core_smiley_cpp_CSmiley_processDismemberment_FUN_00520b60(this_ptr,damage_info);
  }
  fVar2 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar2;
  if (fVar2 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr_00->motion_controller);
    if ((pSVar3->state_index != 8) && (pSVar3->state_index != 7)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&this_ptr_00->motion_controller,7,1);
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"smiley_die??.wav");
    }
    core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&this_ptr->base,damage_info);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
            (&this_ptr_00->motion_controller,3,1);
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&this_ptr->base,damage_info);
  return;
}
