// Name: core_bat.cpp_CBat_process_FUN_00411c40
// Address: 00411c40
// Address Range: [[00411c40, 00411e25]]
// Convention: unknown
// Signature: void core_bat_cpp_CBat_process_FUN_00411c40(CBat *param_1,float param_2)

#include "nocturne.h"

void core_bat_cpp_CBat_process_FUN_00411c40(CBat *param_1,float param_2)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  
  fVar4 = (param_1->base).location.position.y;
  param_1->param = param_1->course_speed * param_2 + param_1->param;
  core_bat_cpp_CBat_updateCoursePosition_FUN_00411f20(param_1);
  fVar4 = (((param_1->base).location.position.y - fVar4) * (float)4) / param_2 +
          (float)35;
  if (fVar4 < (float)10) {
    fVar4 = 10.0;
  }
  if ((float)60 < fVar4) {
    fVar4 = 60.0;
  }
  param_1->flap_speed = (fVar4 - param_1->flap_speed) * (float)0.69999999999999996 + param_1->flap_speed
  ;
  param_1->anim_frame = param_2 * param_1->flap_speed * param_1->speed + param_1->anim_frame;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&param_1->model);
  if (param_1->anim_frame < (float)pCVar1->frame_count) {
    if (param_1->anim_frame < 0.0) {
      param_1->anim_frame = (float)(pCVar1->frame_count + -1);
    }
  }
  else {
    param_1->anim_frame = 0.0;
  }
  if ((param_1->periodic_sound[0] != '\0') &&
     (param_2 = param_1->sound_timer - param_2, param_1->sound_timer = param_2, param_2 <= 0.0)) {
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->sfx_handle);
    if (iVar2 == 0) {
      iVar2 = sound_sndmain_cpp_isWithinListenerRadius_FUN_00527880
                        ((double)(param_1->base).location.position.x,
                         (double)(param_1->base).location.position.y,
                         (double)(param_1->base).location.position.z,50.0);
      if (iVar2 != 0) {
        uVar3 = (*((param_1->base).vtable._ub)->playAmbientSound)
                          (&param_1->base,param_1->periodic_sound);
        param_1->sfx_handle = uVar3;
      }
    }
    fVar4 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                             (param_1->periodic_sound_timer_min,param_1->periodic_sound_timer_max);
    param_1->sound_timer = fVar4;
    return;
  }
  return;
}
