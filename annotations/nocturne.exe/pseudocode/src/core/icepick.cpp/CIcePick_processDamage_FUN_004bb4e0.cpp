// Name: core_icepick.cpp_CIcePick_processDamage_FUN_004bb4e0
// Address: 004bb4e0
// Address Range: [[004bb4e0, 004bb68d]]
// Convention: unknown
// Signature: void core_icepick_cpp_CIcePick_processDamage_FUN_004bb4e0(CCharacter *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_icepick_cpp_CIcePick_processDamage_FUN_004bb4e0(CCharacter *param_1,SDamageInfo *param_2)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  
  sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1[2].flames[0x1d].on_event + 0xc));
  if ((*(uint *)param_1[1].base.actor_name & 0x7fffffff) != 0) {
    param_2->damage_amount = 0.0;
  }
  if (g_CGame_PTR_005b9354->god_mode_enabled != 0) {
    param_2->damage_amount = 0.0;
  }
  if (g_CGame_PTR_005b9354->allow_damage_flag == 0) {
    param_2->damage_amount = 0.0;
  }
  *(float *)param_1[1].base.actor_name = 3.0f;
  fVar1 = param_1->hit_points - param_2->damage_amount;
  this_ptr = &param_1->model;
  param_1->hit_points = fVar1;
  if (fVar1 <= 0.0) {
    param_1->hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr->motion_controller);
    if (pSVar2->state_index != 9) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                         (&this_ptr->motion_controller);
      if (pSVar2->state_index != 8) {
        param_1->grabbed_by = (CDemonActor *)0x0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&this_ptr->motion_controller,8,1);
        (*(((param_1->base).vtable._uc)->_uc).dropCarriedObject)(param_1,1,(CVector3f *)0x0);
        core_gore_cpp_CGore_spawnFliesOnActor_FUN_004b0670
                  (g_CGore_PTR_005b96c4,&param_1->base,0x32,50.0,(CVector3f *)0x0);
        sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1[2].flames[0x1d].on_event + 0x10));
        (*((param_1->base).vtable._ub)->playSound)(&param_1->base,"icepick_die01.wav");
        core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
        return;
      }
    }
  }
  else if (0.0 < param_2->damage_amount) {
    if (*(int *)(param_1[2].flames[0x1d].on_event + 4) == 0) {
      iVar4 = 4;
    }
    else {
      iVar4 = 0xb;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&this_ptr->motion_controller,iVar4,1);
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                      (*(uint *)(param_1[2].flames[0x1d].on_event + 0x10));
    if (iVar4 == 0) {
      uVar3 = (*((param_1->base).vtable._ub)->playSound)
                        (&param_1->base,"icepick_injured??.wav");
      *(uint *)(param_1[2].flames[0x1d].on_event + 0x10) = uVar3;
      core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
      return;
    }
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
  return;
}
