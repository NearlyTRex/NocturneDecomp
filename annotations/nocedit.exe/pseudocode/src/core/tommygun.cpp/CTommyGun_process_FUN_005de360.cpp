// Name: core_tommygun.cpp_CTommyGun_process_FUN_005de360
// Address: 005de360
// Address Range: [[005de360, 005de3a3] [005de436, 005de595]]
// Convention: __cdecl
// Signature: void __cdecl core_tommygun_cpp_CTommyGun_process_FUN_005de360(CTommyGun *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_tommygun_cpp_CTommyGun_process_FUN_005de360(CTommyGun *this_ptr,float delta_time)

{
  float10 fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  double dVar6;
  uint in_stack_fffffe10;
  CSfxSample local_1dc;
  double local_28;
  ulonglong local_20;
  float local_18;
  
  core_weapon_cpp_CWeapon_process_FUN_005ee110(&this_ptr->base,delta_time);
  if (this_ptr->unk < 1) {
    local_20 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005a9720(2,in_stack_fffffe10);
    fVar2 = (float)local_20;
    if (0.0 <= fVar2) {
      sound_sndmain_cpp_lockSound_FUN_005abd30();
      local_28 = (double)(fVar2 * 6.0f);
      local_20 = floor(local_28);
      fVar5 = (float10)local_20;
      fVar1 = (float10)local_28;
      sound_sndmain_cpp_CSfxSample_init_FUN_005a8480(&local_1dc);
      iVar3 = sound_sndmain_cpp_getSfxSampleInfo_FUN_005a96e0(this_ptr->sfx_handle,&local_1dc);
      if (iVar3 != 0) {
        local_18 = (float)local_1dc.sample_info.sample_count;
        dVar6 = round
                          ((double)((float)local_1dc.sample_info.sample_count *
                                    (float)(fVar1 - fVar5) * 0.1666667f));
        sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
        local_20 = (double)CONCAT44((int)ROUND(dVar6),(uint)local_20);
        dVar6 = (double)(int)ROUND(dVar6);
        if (0.0 < dVar6) {
          sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0(dVar6,0);
        }
        iVar3 = (*((this_ptr->base).base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"m-gun-t.wav");
        this_ptr->unk2 = iVar3;
        sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      }
      sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handle);
      sound_sndmain_cpp_unlockSound_FUN_005abdc0();
      return;
    }
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handle);
    return;
  }
  this_ptr->unk = this_ptr->unk + -1;
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9,1.1111112);
  local_18 = fVar2;
  iVar3 = sound_sndmain_cpp_setSfxBaseFrequency_FUN_005a9b40(this_ptr->sfx_handle,fVar2);
  if (iVar3 != 0) {
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handle);
  _sprintf
            ((char *)&local_1dc.taken,"m-gun1.wav @ 2.3 * %f",SUB84((double)fVar2,0),
             (int)((ulonglong)(double)fVar2 >> 0x20));
  sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->unk2);
  uVar4 = (*((this_ptr->base).base.vtable._ub)->playAmbientSound)
                    ((CDemonActor *)this_ptr,(char *)&local_1dc.taken);
  this_ptr->sfx_handle = uVar4;
  return;
}
