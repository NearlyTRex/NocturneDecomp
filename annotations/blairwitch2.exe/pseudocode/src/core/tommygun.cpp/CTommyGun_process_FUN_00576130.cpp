// Name: core_tommygun.cpp_CTommyGun_process_FUN_00576130
// Address: 00576130
// Address Range: [[00576130, 00576365]]
// Convention: __cdecl
// Signature: void __cdecl core_tommygun_cpp_CTommyGun_process_FUN_00576130(CTommyGun *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_tommygun_cpp_CTommyGun_process_FUN_00576130(CTommyGun *this_ptr,float delta_time)

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
  
  core_weapon_cpp_CWeapon_process_FUN_00589c80(&this_ptr->base,delta_time);
  if (this_ptr->fire_frames_remaining < 1) {
    uStack_18 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_00550c30(this_ptr->sfx_handles[0],2);
    fVar2 = (float)uStack_18;
    if (0.0 <= fVar2) {
      sound_sndmain_cpp_lockSound_FUN_005532f0();
      dStack_20 = (double)(fVar2 * _DAT_005eccd0);
      uStack_18 = floor(dStack_20);
      fVar5 = (float10)uStack_18;
      fVar1 = (float10)dStack_20;
      sound_sndmain_cpp_CSfxSample_init_FUN_0054fcd0(&CStack_1d4);
      iVar3 = sound_sndmain_cpp_getSfxSampleInfo_FUN_00550bf0(this_ptr->sfx_handles[0],&CStack_1d4);
      if (iVar3 != 0) {
        dVar6 = round
                          ((double)((float)CStack_1d4.sample_info.sample_count *
                                    (float)(fVar1 - fVar5) * _DAT_005eccd4));
        sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
        uStack_18 = __BITCAST_DOUBLE(CONCAT44((int)ROUND(dVar6),(uint)uStack_18));
        dVar6 = (double)(int)ROUND(dVar6);
        if (0.0 < dVar6) {
          sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005503e0(dVar6,0);
        }
        uVar4 = (*((this_ptr->base).base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"m-gun-t.wav");
        this_ptr->sfx_handles[1] = uVar4;
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
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.9,1.1111112);
  iVar3 = sound_sndmain_cpp_setSfxBaseFrequency_FUN_00550f50(this_ptr->sfx_handles[0],fVar2);
  if (iVar3 != 0) {
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[0]);
  _sprintf((char *)&CStack_1d4.taken,"$@m-gun1.wav @ 2.3 * %f" + 2);
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[1]);
  uVar4 = (*((this_ptr->base).base.vtable._ub)->playAmbientSound)
                    ((CDemonActor *)this_ptr,(char *)&CStack_1d4.taken);
  this_ptr->sfx_handles[0] = uVar4;
  return;
}
