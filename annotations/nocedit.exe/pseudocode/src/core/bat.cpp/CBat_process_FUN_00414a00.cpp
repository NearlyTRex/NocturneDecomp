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
  uint uVar3;
  float fVar4;
  
  fVar4 = (this_ptr->base).location.position.y;
  this_ptr->param = this_ptr->course_speed * delta_time + this_ptr->param;
  core_bat_cpp_FUN_00414ce0();
  fVar4 = (((this_ptr->base).location.position.y - fVar4) * (float)4) / delta_time +
          (float)35;
  if (fVar4 < (float)10) {
    fVar4 = 10.0;
  }
  if ((float)60 < fVar4) {
    fVar4 = 60.0;
  }
  *(float *)this_ptr->unk1 =
       (fVar4 - *(float *)this_ptr->unk1) * (float)0.69999999999999996 + *(float *)this_ptr->unk1;
  *(float *)(this_ptr->course_filename + 0x2c) =
       delta_time * *(float *)this_ptr->unk1 * this_ptr->speed +
       *(float *)(this_ptr->course_filename + 0x2c);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)this_ptr->model_name);
  if (*(float *)(this_ptr->course_filename + 0x2c) < (float)pCVar1->frame_count) {
    if (*(float *)(this_ptr->course_filename + 0x2c) < 0.0) {
      *(float *)(this_ptr->course_filename + 0x2c) = (float)(pCVar1->frame_count + -1);
    }
  }
  else {
    this_ptr->course_filename[0x2c] = '\0';
    this_ptr->course_filename[0x2d] = '\0';
    this_ptr->course_filename[0x2e] = '\0';
    this_ptr->course_filename[0x2f] = '\0';
  }
  if ((this_ptr->unused[0] != '\0') &&
     (fVar4 = *(float *)(this_ptr->unk2 + 4) - delta_time, *(float *)(this_ptr->unk2 + 4) = fVar4,
     fVar4 <= 0.0)) {
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)this_ptr->unk2);
    if (iVar2 == 0) {
      iVar2 = sound_sndmain_cpp_isWithinListenerRadius_FUN_005aa290
                        ((double)(this_ptr->base).location.position.x,
                         (double)(this_ptr->base).location.position.y,
                         (double)(this_ptr->base).location.position.z,50.0);
      if (iVar2 != 0) {
        uVar3 = (*((this_ptr->base).vtable._ub)->playAmbientSound)(&this_ptr->base,this_ptr->unused)
        ;
        *(uint *)this_ptr->unk2 = uVar3;
      }
    }
    fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                      (this_ptr->periodic_sound_timer_min,this_ptr->periodic_sound_timer_max);
    *(float *)(this_ptr->unk2 + 4) = fVar4;
    return;
  }
  return;
}
