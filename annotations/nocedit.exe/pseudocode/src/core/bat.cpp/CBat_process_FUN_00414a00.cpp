// Name: core_bat.cpp_CBat_process_FUN_00414a00
// Address: 00414a00
// Address Range: [[00414a00, 00414bce]]
// Convention: __cdecl
// Signature: void __cdecl core_bat_cpp_CBat_process_FUN_00414a00(CBat *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_bat_cpp_CBat_process_FUN_00414a00(CBat *this_ptr,float delta_time)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  int iVar1;
  uint uVar3;
  float fVar2;
  float fVar4;
  
  fVar2 = (this_ptr->base).location.position.y;
  this_ptr->param = this_ptr->course_speed * delta_time + this_ptr->param;
  core_bat_cpp_CBat_updateCoursePosition_FUN_00414ce0(this_ptr);
  fVar4 = (((this_ptr->base).location.position.y - fVar2) * (float)4) / delta_time +
          (float)35;
  if (fVar4 < (float)10) {
    fVar4 = 10.0;
  }
  if ((float)60 < fVar4) {
    fVar4 = 60.0;
  }
  this_ptr->flap_speed =
       (fVar4 - this_ptr->flap_speed) * (float)0.69999999999999996 + this_ptr->flap_speed;
  this_ptr->anim_frame = delta_time * this_ptr->flap_speed * this_ptr->speed + this_ptr->anim_frame;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  if (this_ptr->anim_frame < (float)pCVar1->frame_count) {
    if (this_ptr->anim_frame < 0.0) {
      this_ptr->anim_frame = (float)(pCVar1->frame_count + -1);
    }
  }
  else {
    this_ptr->anim_frame = 0.0;
  }
  if ((this_ptr->periodic_sound[0] != '\0') &&
     (fVar2 = this_ptr->sound_timer - delta_time, this_ptr->sound_timer = fVar2, fVar2 <= 0.0)) {
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handle);
    if (iVar2 == 0) {
      iVar1 = sound_sndmain_cpp_isWithinListenerRadius_FUN_005aa290
                        ((double)(this_ptr->base).location.position.x,
                         (double)(this_ptr->base).location.position.y,
                         (double)(this_ptr->base).location.position.z,50.0);
      if (iVar1 != 0) {
        uVar3 = (*((this_ptr->base).vtable._ub)->playAmbientSound)
                          (&this_ptr->base,this_ptr->periodic_sound);
        this_ptr->sfx_handle = uVar3;
      }
    }
    fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                      (this_ptr->periodic_sound_timer_min,this_ptr->periodic_sound_timer_max);
    this_ptr->sound_timer = fVar2;
    return;
  }
  return;
}
