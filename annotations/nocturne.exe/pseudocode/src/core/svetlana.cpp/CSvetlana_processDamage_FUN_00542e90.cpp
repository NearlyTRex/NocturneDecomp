// Name: core_svetlana.cpp_CSvetlana_processDamage_FUN_00542e90
// Address: 00542e90
// Address Range: [[00542e90, 0054301a]]
// Convention: unknown
// Signature: void core_svetlana_cpp_CSvetlana_processDamage_FUN_00542e90(CCharacter *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_svetlana_cpp_CSvetlana_processDamage_FUN_00542e90(CCharacter *param_1,SDamageInfo *param_2)

{
  CDeformableModelInstance *this_ptr;
  SMotion *pSVar1;
  float fVar2;
  int iVar3;
  
  if ((*(uint *)param_1[1].base.actor_name & 0x7fffffff) != 0) {
    param_2->damage_amount = 0.0;
  }
  if (*(int *)(0x01C775EC + 0x1d0) != 0) {
    param_2->damage_amount = 0.0;
  }
  if (*(int *)(0x01C775EC + 0x22c) == 0) {
    param_2->damage_amount = 0.0;
  }
  *(float *)param_1[1].base.actor_name = 3.0f;
  fVar2 = param_1->hit_points - param_2->damage_amount;
  this_ptr = &param_1->model;
  param_1->hit_points = fVar2;
  if (fVar2 <= 0.0) {
    param_1->hit_points = 0.0;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr->motion_controller);
    if (pSVar1->state_index != 9) {
      pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                         (&this_ptr->motion_controller);
      if (pSVar1->state_index != 8) {
        param_1->grabbed_by = (CDemonActor *)0x0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&this_ptr->motion_controller,8,1);
        core_gore_cpp_CGore_spawnFliesOnActor_FUN_004b0670
                  ((CGore *)INT_005b96c4,&param_1->base,0x32,50.0,(CVector3f *)0x0);
        sound_sndmain_cpp_killSfx_FUN_00527230((uint)param_1[0xc].flames[0x1a].intensity);
        fVar2 = (float)(*((param_1->base).vtable._ub)->playSound)
                                 (&param_1->base,"svet-die.wav");
        param_1[0xc].flames[0x1a].intensity = fVar2;
        core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
        return;
      }
    }
  }
  else if (0.0 < param_2->damage_amount) {
    if (*(int *)(param_1[2].flames[0x1d].on_event + 4) == 0) {
      iVar3 = 4;
    }
    else {
      iVar3 = 0xb;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&this_ptr->motion_controller,iVar3,1);
    iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50((uint)param_1[0xc].flames[0x1a].intensity);
    if (iVar3 == 0) {
      fVar2 = (float)(*((param_1->base).vtable._ub)->playSound)
                               (&param_1->base,"svet-hurt?.wav");
      param_1[0xc].flames[0x1a].intensity = fVar2;
      core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
      return;
    }
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
  return;
}
