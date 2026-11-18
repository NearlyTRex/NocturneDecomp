// Name: core_tommygun.cpp_CTommyGun_process_FUN_0056bd40
// Address: 0056bd40
// Address Range: [[0056bd40, 0056bf75]]
// Convention: __cdecl
// Signature: void __cdecl core_tommygun_cpp_CTommyGun_process_FUN_0056bd40(CTommyGun *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_tommygun_cpp_CTommyGun_process_FUN_0056bd40(CTommyGun *this_ptr,float delta_time)

{
  float10 fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  double dVar6;
  CSfxSample CStack_1d4;
  double dStack_20;
  ulonglong uStack_18;
  
  core_weapon_cpp_CWeapon_process_FUN_0057b160(&this_ptr->base,delta_time);
  if (this_ptr->fire_frames_remaining < 1) {
    uStack_18 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005567c0(this_ptr->sfx_handles[0],2);
    fVar2 = (float)uStack_18;
    if (0.0 <= fVar2) {
      sound_sndmain_cpp_lockSound_FUN_00558e90();
      dStack_20 = (double)(fVar2 * 6.0f);
      uStack_18 = floor(dStack_20);
      fVar5 = (float10)uStack_18;
      fVar1 = (float10)dStack_20;
      sound_sndmain_cpp_CSfxSample_init_FUN_00555840(&CStack_1d4);
      iVar3 = sound_sndmain_cpp_getSfxSampleInfo_FUN_00556780(this_ptr->sfx_handles[0],&CStack_1d4);
      if (iVar3 != 0) {
        dVar6 = round
                          ((double)((float)CStack_1d4.sample_info.sample_count *
                                    (float)(fVar1 - fVar5) * 0.1666667f));
        iVar3 = (int)ROUND(dVar6);
        sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
        uStack_18 = __BITCAST_DOUBLE(CONCAT44(iVar3,(uint)uStack_18));
        if (0.0 < (double)iVar3) {
          sound_sndmain_cpp_setNextSfxTriggerTime_FUN_00555f60((double)iVar3,0);
        }
        uVar4 = (*((this_ptr->base).base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"m-gun-t.wav");
        this_ptr->sfx_handles[1] = uVar4;
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
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.9,1.1111112);
  iVar3 = sound_sndmain_cpp_setSfxBaseFrequency_FUN_00556ae0(this_ptr->sfx_handles[0],fVar2);
  if (iVar3 != 0) {
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handles[0]);
  _sprintf((char *)&CStack_1d4.buffer_id,"m-gun1.wav @ 2.3 * %f");
  sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handles[1]);
  uVar4 = (*((this_ptr->base).base.vtable._ub)->playAmbientSound)
                    ((CDemonActor *)this_ptr,(char *)&CStack_1d4.buffer_id);
  this_ptr->sfx_handles[0] = uVar4;
  return;
}
