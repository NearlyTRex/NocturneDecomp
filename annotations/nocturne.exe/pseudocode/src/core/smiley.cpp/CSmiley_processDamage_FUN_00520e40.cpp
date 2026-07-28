// Name: core_smiley.cpp_CSmiley_processDamage_FUN_00520e40
// Address: 00520e40
// Address Range: [[00520e40, 00520f45]]
// Convention: unknown
// Signature: void core_smiley_cpp_CSmiley_processDamage_FUN_00520e40(CSmiley *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_smiley_cpp_CSmiley_processDamage_FUN_00520e40(CSmiley *param_1,SDamageInfo *param_2)

{
  CDeformableModelInstance *this_ptr;
  EDamageType EVar1;
  float fVar2;
  SMotion *pSVar3;
  
  if (param_1->model_variant != 1) {
    param_2->damage_type = DAMAGE_TYPE_IMMUNE;
    param_2->damage_amount = 0.0;
    return;
  }
  EVar1 = param_2->damage_type;
  if (EVar1 == DAMAGE_TYPE_SHATTER) {
    param_2->damage_type = DAMAGE_TYPE_IMMUNE;
  }
  else if (((int)EVar1 < 0xc) || (EVar1 == DAMAGE_TYPE_PIERCING)) goto LAB_00520e74;
  param_2->damage_amount = 0.0;
LAB_00520e74:
  if (0.0 < param_2->damage_amount) {
    core_smiley_cpp_CSmiley_processDismemberment_FUN_00520b60(param_1,param_2);
  }
  fVar2 = (param_1->base).base.hit_points - param_2->damage_amount;
  this_ptr = &(param_1->base).base.model;
  (param_1->base).base.hit_points = fVar2;
  if (fVar2 <= 0.0) {
    (param_1->base).base.hit_points = 0.0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr->motion_controller);
    if ((pSVar3->state_index != 8) && (pSVar3->state_index != 7)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&this_ptr->motion_controller,7,1);
      (*(((param_1->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)param_1);
      (*((param_1->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)param_1,"smiley_die??.wav");
    }
    core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&param_1->base,param_2);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&this_ptr->motion_controller,3,1);
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&param_1->base,param_2);
  return;
}
