// Name: core_tommygun.cpp_CTommyGun_process_FUN_005de360
// Address: 005de360
// Address Range: [[005de360, 005de595]]
// Convention: __cdecl
// Signature: void __cdecl core_tommygun_cpp_CTommyGun_process_FUN_005de360(CTommyGun *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_tommygun_cpp_CTommyGun_process_FUN_005de360(CTommyGun *this_ptr,float delta_time)

{
  float fVar3;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar4;
  uint uVar5;
  float10 fVar5;
  double dVar6;
  CSfxSample local_1dc;
  double local_28;
  double local_20;
  float local_18;
  float10 fVar1;
  
  core_weapon_cpp_CWeapon_process_FUN_005ee110(&this_ptr->base,delta_time);
  if (this_ptr->fire_frames_remaining < 1) {
    dVar6 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005a9720(this_ptr->sfx_handles[0],2);
    if (0.0 <= (float)dVar6) {
      sound_sndmain_cpp_lockSound_FUN_005abd30();
      fVar3 = (float)dVar6 * 6.0f;
      dVar6 = floor((double)fVar3);
      fVar5 = (float10)dVar6;
      fVar1 = (float10)fVar3;
      sound_sndmain_cpp_CSfxSample_init_FUN_005a8480(&local_1dc);
      iVar4 = sound_sndmain_cpp_getSfxSampleInfo_FUN_005a96e0(this_ptr->sfx_handles[0],&local_1dc);
      if (iVar4 != 0) {
        fVar3 = (float)local_1dc.sample_info.sample_count * (float)(fVar1 - fVar5) * 0.1666667f;
        sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
        dVar6 = (double)(int)ROUND(ROUND(fVar3));
        if (0.0 < dVar6) {
          sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0(dVar6,0);
        }
        uVar5 = (*((this_ptr->base).base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"m-gun-t.wav");
        this_ptr->sfx_handles[1] = uVar5;
        sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      }
      sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handles[0]);
      sound_sndmain_cpp_unlockSound_FUN_005abdc0();
      return;
    }
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handles[0]);
    return;
  }
  this_ptr->fire_frames_remaining = this_ptr->fire_frames_remaining + -1;
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.9,1.1111112);
  iVar3 = sound_sndmain_cpp_setSfxBaseFrequency_FUN_005a9b40(this_ptr->sfx_handles[0],fVar2);
  if (iVar3 != 0) {
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handles[0]);
  _sprintf
            ((char *)&local_1dc.taken,"m-gun1.wav @ 2.3 * %f",0xe9,SUB82(__BITCAST_UINT64((double)fVar2),0),
             (int)((ulonglong)(double)fVar2 >> 0x20));
  sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handles[1]);
  uVar4 = (*((this_ptr->base).base.vtable._ub)->playAmbientSound)
                    ((CDemonActor *)this_ptr,(char *)&local_1dc.taken);
  this_ptr->sfx_handles[0] = uVar4;
  return;
}
