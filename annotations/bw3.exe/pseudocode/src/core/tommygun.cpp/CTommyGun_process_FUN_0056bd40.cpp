// Name: core_tommygun.cpp_CTommyGun_process_FUN_0056bd40
// Address: 0056bd40
// Address Range: [[0056bd40, 0056bf75]]
// Convention: __cdecl
// Signature: void __cdecl core_tommygun_cpp_CTommyGun_process_FUN_0056bd40(CTommyGun *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_tommygun_cpp_CTommyGun_process_FUN_0056bd40(CTommyGun *this_ptr,float delta_time)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  CSfxSample CStack_1d4;
  double dStack_20;
  double dStack_18;
  
  core_weapon_cpp_CWeapon_process_FUN_0057b160(&this_ptr->base,delta_time);
  if (this_ptr->fire_frames_remaining < 1) {
    dStack_18 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005567c0(this_ptr->sfx_handles[0],2);
    fVar1 = (float)dStack_18;
    if (0.0 <= fVar1) {
      sound_sndmain_cpp_lockSound_FUN_00558e90();
      dStack_20 = (double)(fVar1 * _DAT_005d64b3);
      dStack_18 = floor(dStack_20);
      fVar4 = (float10)dStack_18;
      fVar5 = (float10)dStack_20;
      sound_sndmain_cpp_CSfxSample_init_FUN_00555840(&CStack_1d4);
      iVar2 = sound_sndmain_cpp_getSfxSampleInfo_FUN_00556780(this_ptr->sfx_handles[0],&CStack_1d4);
      if (iVar2 != 0) {
        fVar5 = (float10)CStack_1d4.sample_info.sample_count * (float10)(float)(fVar5 - fVar4) *
                (float10)_DAT_005d64b7;
        round();
        sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
        if (0.0 < (double)(int)ROUND(fVar5)) {
          sound_sndmain_cpp_setNextSfxTriggerTime_FUN_00555f60((double)(int)ROUND(fVar5),0);
        }
        uVar3 = (*((this_ptr->base).base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"m-gun-t.wav");
        this_ptr->sfx_handles[1] = uVar3;
        sound_sndmain_cpp_popSfxOptions_FUN_00556050();
      }
      sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handles[0]);
      sound_sndmain_cpp_unlockSound_FUN_00556fd0();
      return;
    }
    sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handles[0]);
    return;
  }
  this_ptr->fire_frames_remaining = this_ptr->fire_frames_remaining + -1;
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.9,1.1111112);
  iVar2 = sound_sndmain_cpp_setSfxBaseFrequency_FUN_00556ae0(this_ptr->sfx_handles[0],fVar1);
  if (iVar2 != 0) {
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handles[0]);
  _sprintf((char *)&CStack_1d4.buffer_id,"$@m-gun1.wav @ 2.3 * %f" + 2);
  sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handles[1]);
  uVar3 = (*((this_ptr->base).base.vtable._ub)->playAmbientSound)
                    ((CDemonActor *)this_ptr,(char *)&CStack_1d4.buffer_id);
  this_ptr->sfx_handles[0] = uVar3;
  return;
}
