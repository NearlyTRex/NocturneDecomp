// Name: core_tommygun.cpp_CTommyGun_process_FUN_005de360
// Address: 005de360
// Address Range: [[005de360, 005de3a3] [005de436, 005de595]]
// Convention: __cdecl
// Signature: void core_tommygun.cpp_CTommyGun_process_FUN_005de360(CTommyGun * this_ptr, float delta_time)

#include "nocturne.h"

void __cdecl core_tommygun_cpp_CTommyGun_process_FUN_005de360(CTommyGun *this_ptr,float delta_time)

{
  float base_frequency;
  int iVar1;
  uint uVar2;
  int extraout_EBX;
  double dVar3;
  double dVar4;
  uint in_stack_fffffe10;
  float local_1e0 [68];
  int iStack_d0;
  char local_8c [96];
  uint uStack_2c;
  ulonglong local_28;
  int local_20;
  int iStack_1c;
  float local_18;
  
  core_weapon_cpp_CWeapon_process_FUN_005ee110(&this_ptr->base,delta_time);
  if (*(int *)this_ptr->unk < 1) {
    dVar3 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005a9720(2,in_stack_fffffe10);
    local_20 = SUB84(dVar3,0);
    iStack_1c = (int)((ulonglong)dVar3 >> 0x20);
    local_1e0[0] = (float)dVar3;
    if (0.0 <= local_1e0[0]) {
      sound_sndmain_cpp_lockSound_FUN_005abd30();
      local_1e0[0] = local_1e0[0] * 6.0f;
      local_28 = (double)local_1e0[0];
      dVar4 = crt_math_c_floor_FUN_005feb90(local_28);
      local_28._4_4_ = SUB84(dVar4,0);
      local_20 = (int)((ulonglong)dVar4 >> 0x20);
      dVar3 = (double)CONCAT44((uint)local_28,uStack_2c);
      sound_sndmain_cpp_CSfxSample_init_FUN_005a8480((CSfxSample *)local_1e0);
      iVar1 = sound_sndmain_cpp_getSfxSampleInfo_FUN_005a96e0
                        (*(uint *)(extraout_EBX + 0x57c),(CSfxSample *)local_1e0);
      if (iVar1 != 0) {
        iStack_1c = iStack_d0;
        dVar3 = crt_math_c_round_FUN_005fe6b0
                          ((double)((float)iStack_d0 * (float)((float10)dVar3 - (float10)dVar4) *
                                   0.1666667f));
        iVar1 = (int)ROUND(dVar3);
        sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
        local_20 = iVar1;
        if (0.0 < (double)iVar1) {
          sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0((double)iVar1,0);
        }
        uVar2 = (**(code **)(*(int *)(extraout_EBX + 0x154) + 0x24))();
        *(uint *)(extraout_EBX + 0x580) = uVar2;
        sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      }
      sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(extraout_EBX + 0x57c));
      sound_sndmain_cpp_unlockSound_FUN_005abdc0();
      return;
    }
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk + 4));
    return;
  }
  *(int *)this_ptr->unk = *(int *)this_ptr->unk + -1;
  base_frequency = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9,1.1111112);
  local_18 = base_frequency;
  iVar1 = sound_sndmain_cpp_setSfxBaseFrequency_FUN_005a9b40
                    (*(uint *)(this_ptr->unk + 4),base_frequency);
  if (iVar1 != 0) {
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk + 4));
  crt_stdio_c_sprintf_FUN_005fdbd0(local_8c,"m-gun1.wav @ 2.3 * %f",(double)base_frequency);
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk + 8));
  uVar2 = (*((this_ptr->base).base.vtable._ub)->playAmbientSound)((CDemonActor *)this_ptr,local_8c);
  *(uint *)(this_ptr->unk + 4) = uVar2;
  return;
}
