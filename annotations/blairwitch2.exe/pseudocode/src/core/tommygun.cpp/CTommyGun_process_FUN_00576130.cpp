// Name: core_tommygun.cpp_CTommyGun_process_FUN_00576130
// Address: 00576130
// Address Range: [[00576130, 00576365]]
// Convention: __cdecl
// Signature: void __cdecl core_tommygun_cpp_CTommyGun_process_FUN_00576130(CTommyGun *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_tommygun_cpp_CTommyGun_process_FUN_00576130(CTommyGun *this_ptr,float delta_time)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  CSfxSample CStack_1d4;
  double dStack_20;
  double dStack_18;
  
  core_weapon_cpp_CWeapon_process_FUN_00589c80(&this_ptr->base,delta_time);
  if (this_ptr->fire_frames_remaining < 1) {
    dStack_18 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_00550c30(this_ptr->sfx_handles[0],2);
    fVar1 = (float)dStack_18;
    if (0.0 <= fVar1) {
      sound_sndmain_cpp_lockSound_FUN_005532f0();
      dStack_20 = (double)(fVar1 * _DAT_005eccd0);
      dStack_18 = floor(dStack_20);
      fVar4 = (float10)dStack_18;
      fVar5 = (float10)dStack_20;
      sound_sndmain_cpp_CSfxSample_init_FUN_0054fcd0(&CStack_1d4);
      iVar2 = sound_sndmain_cpp_getSfxSampleInfo_FUN_00550bf0(this_ptr->sfx_handles[0],&CStack_1d4);
      if (iVar2 != 0) {
        fVar5 = (float10)CStack_1d4.sample_info.sample_count * (float10)(float)(fVar5 - fVar4) *
                (float10)_DAT_005eccd4;
        round();
        sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
        if (0.0 < (double)(int)ROUND(fVar5)) {
          sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005503e0((double)(int)ROUND(fVar5),0);
        }
        uVar3 = (*((this_ptr->base).base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"m-gun-t.wav");
        this_ptr->sfx_handles[1] = uVar3;
        sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
      }
      sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[0]);
      sound_sndmain_cpp_unlockSound_FUN_00551440();
      return;
    }
    sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[0]);
    return;
  }
  this_ptr->fire_frames_remaining = this_ptr->fire_frames_remaining + -1;
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.9,1.1111112);
  iVar2 = sound_sndmain_cpp_setSfxBaseFrequency_FUN_00550f50(this_ptr->sfx_handles[0],fVar1);
  if (iVar2 != 0) {
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[0]);
  _sprintf((char *)&CStack_1d4.taken,"$@m-gun1.wav @ 2.3 * %f" + 2);
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[1]);
  uVar3 = (*((this_ptr->base).base.vtable._ub)->playAmbientSound)
                    ((CDemonActor *)this_ptr,(char *)&CStack_1d4.taken);
  this_ptr->sfx_handles[0] = uVar3;
  return;
}
