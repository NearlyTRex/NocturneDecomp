// Name: core_scat.cpp_CScat_processDamage_FUN_004fcbd0
// Address: 004fcbd0
// Address Range: [[004fcbd0, 004fcd1f]]
// Convention: unknown
// Signature: void core_scat_cpp_CScat_processDamage_FUN_004fcbd0(CScat *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_scat_cpp_CScat_processDamage_FUN_004fcbd0(CScat *param_1,SDamageInfo *param_2)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  
  if (ABS((param_1->base).invincibility_timer) != 0.0) {
    param_2->damage_amount = 0.0;
  }
  if (*(int *)(0x01C775EC + 0x1d0) != 0) {
    param_2->damage_amount = 0.0;
  }
  if (*(int *)(0x01C775EC + 0x22c) == 0) {
    param_2->damage_amount = 0.0;
  }
  (param_1->base).invincibility_timer = 0x3F000000;
  fVar1 = (param_1->base).base.hit_points - param_2->damage_amount;
  this_ptr = &(param_1->base).base.model;
  (param_1->base).base.hit_points = fVar1;
  if (0.0 < fVar1) {
    if (param_2->damage_amount <= 0.0) {
      core_charactr_cpp_CCharacter_processDamage_FUN_00428510((CCharacter *)param_1,param_2);
      return;
    }
    iVar3 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(param_1);
    if (iVar3 == 0) {
      iVar3 = 0xc;
    }
    else {
      iVar3 = 0xd;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&this_ptr->motion_controller,iVar3,1);
    (*((param_1->base).base.base.vtable._ub)->playSound)
              ((CDemonActor *)param_1,"scat-hurt-?.wav");
    core_charactr_cpp_CCharacter_processDamage_FUN_00428510((CCharacter *)param_1,param_2);
    return;
  }
  (param_1->base).base.hit_points = 0.0;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&this_ptr->motion_controller);
  if (pSVar2->state_index != 5) {
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr->motion_controller);
    if (pSVar2->state_index != 4) {
      (param_1->base).base.grabbed_by = (CDemonActor *)0x0;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&this_ptr->motion_controller,4,1);
      core_gore_cpp_CGore_spawnFliesOnActor_FUN_004b0670
                ((CGore *)INT_005b96c4,(CDemonActor *)param_1,0x32,50.0,(CVector3f *)0x0);
    }
  }
  (*((param_1->base).base.base.vtable._ub)->playSound)
            ((CDemonActor *)param_1,"scat-die-?.wav");
  core_charactr_cpp_CCharacter_processDamage_FUN_00428510((CCharacter *)param_1,param_2);
  return;
}
