// Name: core_tommygun.cpp_CTommyGun_process_FUN_005de360
// Address: 005de360
// Address Range: [[005de360, 005de3a3] [005de436, 005de595]]
// Convention: __cdecl
// Signature: void core_tommygun.cpp_CTommyGun_process_FUN_005de360(CTommyGun * this_ptr)

#include "nocturne.h"

void __cdecl core_tommygun_cpp_CTommyGun_process_FUN_005de360(CTommyGun *this_ptr)

{
  float base_frequency;
  int iVar1;
  uint uVar2;
  uint extraout_EDX;
  BADSPACEBASE *in_ESP;
  float10 in_ST0;
  double dVar3;
  uint in_stack_fffffe14;
  float fStack_1d4;
  float fStack_1d0;
  char acStack_1cc [4];
  float fStack_bc;
  char acStack_7c [8];
  char acStack_74 [84];
  uint local_20;
  ulonglong uStack_1c;
  uint uStack_14;
  
  core_weapon_cpp_CWeapon_process_FUN_005ee110(&this_ptr->base_weapon);
  if (*(int *)this_ptr->field1_0x578 < 1) {
    dVar3 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005a9720(2,in_stack_fffffe14);
    uStack_1c._4_4_ = SUB84 /* extract 2-byte value */(dVar3,0);
    uStack_14 = (uint)((ulonglong)dVar3 >> 0x20);
    if (0.0 <= (float)dVar3) {
      sound_sndmain_cpp_lockSound_FUN_005abd30();
      fStack_1d4 = fStack_1d4 * 6f;
      uStack_1c = (double)fStack_1d4;
      uVar2 = (uint)uStack_1c;
      crt_math_c_floor_FUN_005feb90((double)in_ST0);
      uStack_1c._4_4_ = uVar2;
      dVar3 = (double)CONCAT44 /* combine 2-byte values */((uint)uStack_1c,local_20);
      sound_sndmain_cpp_CSfxSample_init_FUN_005a8480((CSfxSample *)&fStack_1d4);
      iVar1 = sound_sndmain_cpp_getSfxSampleInfo_FUN_005a96e0
                        (*(uint *)(this_ptr->field1_0x578 + 4),(CSfxSample *)&fStack_1d0);
      if (iVar1 != 0) {
        crt_math_c_round_FUN_005fe6b0((double)((float)(int)fStack_bc * fStack_1d0 * 0.1666667f))
        ;
        sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
        dVar3 = (double)(int)(float)((float10)dVar3 - (float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX,uVar2))
        ;
        if (0.0 < dVar3) {
          sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0(dVar3,0);
        }
        uVar2 = (*((this_ptr->base_weapon).base_actor.vtable)->playSound)
                          ((CDemonActor *)this_ptr,"m-gun-t.wav");
        *(uint *)(this_ptr->field1_0x578 + 8) = uVar2;
        acStack_1cc[0] = 'e';
        acStack_1cc[1] = -0x1b;
        acStack_1cc[2] = ']';
        acStack_1cc[3] = '\0';
        sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      }
      acStack_1cc[0] = 'q';
      acStack_1cc[1] = -0x1b;
      acStack_1cc[2] = ']';
      acStack_1cc[3] = '\0';
      sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->field1_0x578 + 4));
      sound_sndmain_cpp_unlockSound_FUN_005abdc0();
      return;
    }
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->field1_0x578 + 4));
    return;
  }
  *(int *)this_ptr->field1_0x578 = *(int *)this_ptr->field1_0x578 + -1;
  base_frequency = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9,1.1111112);
  iVar1 = sound_sndmain_cpp_setSfxBaseFrequency_FUN_005a9b40
                    (*(uint *)(this_ptr->field1_0x578 + 4),base_frequency);
  if (iVar1 != 0) {
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->field1_0x578 + 4));
  crt_stdio_c_sprintf_FUN_005fdbd0
            (acStack_7c,"m-gun1.wav @ 2.3 * %f",SUB84 /* extract 2-byte value */((double)fStack_1d4,0),
             (int)((ulonglong)(double)fStack_1d4 >> 0x20));
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->field1_0x578 + 8));
  uVar2 = (*((this_ptr->base_weapon).base_actor.vtable)->playAmbientSound)
                    ((CDemonActor *)this_ptr,acStack_74);
  *(uint *)(this_ptr->field1_0x578 + 4) = uVar2;
  return;
}
