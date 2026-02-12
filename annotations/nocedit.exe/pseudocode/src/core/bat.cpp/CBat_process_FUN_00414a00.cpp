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
  float fVar3;
  
  fVar3 = (this_ptr->base).location.position.y;
  this_ptr->param = this_ptr->course_speed * delta_time + this_ptr->param;
  core_bat_cpp_CBat_FUN_00414ce0(this_ptr);
  fVar3 = (((this_ptr->base).location.position.y - fVar3) * (float)4) / delta_time +
          (float)35;
  if (fVar3 < (float)10) {
    fVar3 = 10.0;
  }
  if ((float)60 < fVar3) {
    fVar3 = 60.0;
  }
  this_ptr->unk2 = (fVar3 - this_ptr->unk2) * (float)0.69999999999999996 + this_ptr->unk2;
  this_ptr->unk1 = (int)(delta_time * this_ptr->unk2 * this_ptr->speed + (float)this_ptr->unk1);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  if ((float)this_ptr->unk1 < (float)pCVar1->frame_count) {
    if ((float)this_ptr->unk1 < 0.0) {
      this_ptr->unk1 = (int)(float)(pCVar1->frame_count + -1);
    }
  }
  else {
    this_ptr->unk1 = 0;
  }
  if ((this_ptr->unused[0] != '\0') &&
     (fVar3 = (float)this_ptr->unk4 - delta_time, this_ptr->unk4 = (int)fVar3, fVar3 <= 0.0)) {
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->unk3);
    if (iVar2 == 0) {
      iVar2 = sound_sndmain_cpp_isWithinListenerRadius_FUN_005aa290
                        ((double)(this_ptr->base).location.position.x,
                         (double)(this_ptr->base).location.position.y,
                         (double)(this_ptr->base).location.position.z,50.0);
      if (iVar2 != 0) {
        iVar2 = (*((this_ptr->base).vtable._ub)->playAmbientSound)(&this_ptr->base,this_ptr->unused)
        ;
        this_ptr->unk3 = iVar2;
      }
    }
    fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                      (this_ptr->periodic_sound_timer_min,this_ptr->periodic_sound_timer_max);
    this_ptr->unk4 = (int)fVar3;
    return;
  }
  return;
}
