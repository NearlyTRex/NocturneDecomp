// Name: core_colonel.cpp_CColonel_processDamage_FUN_0043aa00
// Address: 0043aa00
// Address Range: [[0043aa00, 0043ab18]]
// Convention: unknown
// Signature: void core_colonel_cpp_CColonel_processDamage_FUN_0043aa00(CCharacter *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_colonel_cpp_CColonel_processDamage_FUN_0043aa00(CCharacter *param_1,SDamageInfo *param_2)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  
  if ((*(uint *)param_1[1].base.actor_name & 0x7fffffff) != 0) {
    param_2->damage_amount = 0.0;
  }
  if (g_CGame_PTR_005b9354->god_mode_enabled != 0) {
    param_2->damage_amount = 0.0;
  }
  if (g_CGame_PTR_005b9354->allow_damage_flag == 0) {
    param_2->damage_amount = 0.0;
  }
  *(float *)param_1[1].base.actor_name = 0.5f;
  fVar1 = param_1->hit_points - param_2->damage_amount;
  this_ptr = &param_1->model;
  param_1->hit_points = fVar1;
  if (fVar1 <= 0.0) {
    param_1->hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr->motion_controller);
    if (pSVar2->state_index != 6) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                         (&this_ptr->motion_controller);
      if (pSVar2->state_index != 5) {
        param_1->grabbed_by = (CDemonActor *)0x0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&this_ptr->motion_controller,5,1);
        core_gore_cpp_CGore_spawnFliesOnActor_FUN_004b0670
                  (g_CGore_PTR_005b96c4,&param_1->base,0x32,50.0,(CVector3f *)0x0);
        core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
        return;
      }
    }
  }
  else if (0.0 < param_2->damage_amount) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&this_ptr->motion_controller,4,1)
    ;
    core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
    return;
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
  return;
}
