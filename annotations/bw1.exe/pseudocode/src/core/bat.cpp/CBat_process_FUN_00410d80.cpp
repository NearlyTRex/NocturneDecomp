// Name: core_bat.cpp_CBat_process_FUN_00410d80
// Address: 00410d80
// Address Range: [[00410d80, 00410f6e]]
// Convention: __cdecl
// Signature: void __cdecl core_bat_cpp_CBat_process_FUN_00410d80(CBat *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bat_cpp_CBat_process_FUN_00410d80(CBat *this_ptr,float delta_time)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  float afStackY_1028 [1010];
  float fVar5;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_24;
  int iStack_14;
  
  bVar4 = 0;
  fStack_38 = (this_ptr->base).location.position.x;
  fStack_34 = (this_ptr->base).location.position.y;
  fStack_30 = (this_ptr->base).location.position.z;
  this_ptr->param = this_ptr->course_speed * delta_time + this_ptr->param;
  core_bat_cpp_CBat_updateCoursePosition_FUN_00411060(this_ptr);
  fStack_3c = (this_ptr->base).location.position.y - fStack_30;
  fStack_38 = (this_ptr->base).location.position.z - fStack_2c;
  fStack_2c = (this_ptr->base).location.position.x - fStack_34;
  *(uint *)(&stack0xffffffd8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffc4 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffdc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffc8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  fVar5 = (fStack_24 * (float)_DAT_005d3651) / delta_time + (float)_DAT_005d3659;
  if (fVar5 < (float)_DAT_005d3661) {
    fVar5 = 10.0;
  }
  if ((float)_DAT_005d3669 < fVar5) {
    fVar5 = 60.0;
  }
  this_ptr->flap_speed =
       (fVar5 - this_ptr->flap_speed) * (float)_DAT_005d3671 + this_ptr->flap_speed;
  this_ptr->anim_frame = delta_time * this_ptr->flap_speed * this_ptr->speed + this_ptr->anim_frame;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(&this_ptr->model);
  iStack_14 = pCVar1->frame_count;
  if (this_ptr->anim_frame < (float)iStack_14) {
    if (this_ptr->anim_frame < 0.0) {
      iStack_14 = iStack_14 + -1;
      this_ptr->anim_frame = (float)iStack_14;
    }
  }
  else {
    this_ptr->anim_frame = 0.0;
  }
  if ((this_ptr->periodic_sound[0] != '\0') &&
     (fVar5 = this_ptr->sound_timer - delta_time, this_ptr->sound_timer = fVar5, fVar5 <= 0.0)) {
    iVar2 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handle);
    if (iVar2 == 0) {
      iVar2 = sound_sndmain_cpp_FUN_00574010
                        ((double)(this_ptr->base).location.position.x,
                         (double)(this_ptr->base).location.position.y,
                         (double)(this_ptr->base).location.position.z,0x42480000);
      if (iVar2 != 0) {
        uVar3 = (*((this_ptr->base).vtable._ub)->playAmbientSound)
                          (&this_ptr->base,this_ptr->periodic_sound);
        this_ptr->sfx_handle = uVar3;
      }
    }
    fVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00
                      (this_ptr->periodic_sound_timer_min,this_ptr->periodic_sound_timer_max);
    this_ptr->sound_timer = fVar5;
    return;
  }
  return;
}
