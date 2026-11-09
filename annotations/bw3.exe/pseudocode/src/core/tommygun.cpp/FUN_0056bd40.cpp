// Name: core_tommygun.cpp_FUN_0056bd40
// Address: 0056bd40
// Address Range: [[0056bd40, 0056bf75]]
// Convention: unknown
// Signature: void core_tommygun_cpp_FUN_0056bd40(CWeapon *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_tommygun_cpp_FUN_0056bd40(CWeapon *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  float afStack_1d4 [68];
  int iStack_c4;
  byte auStack_7c [92];
  double dStack_20;
  double dStack_18;
  
  core_weapon_cpp_FUN_0057b160(param_1,param_2);
  if (*(int *)(param_1 + 1) < 1) {
    dStack_18 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005567c0
                          (*(uint *)&param_1[1].field_0x4,2);
    fVar1 = (float)dStack_18;
    if (0.0 <= fVar1) {
      sound_sndmain_cpp_FUN_00558e90();
      dStack_20 = (double)(fVar1 * _DAT_005d64b3);
      dStack_18 = floor(dStack_20);
      fVar4 = (float10)dStack_18;
      fVar5 = (float10)dStack_20;
      sound_sndmain_cpp_CSfxSample_init_FUN_00555840((CSfxSample *)afStack_1d4);
      iVar2 = sound_sndmain_cpp_FUN_00556780
                        (*(uint *)&param_1[1].field_0x4,(CSfxSample *)afStack_1d4);
      if (iVar2 != 0) {
        fVar5 = (float10)iStack_c4 * (float10)(float)(fVar5 - fVar4) * (float10)_DAT_005d64b7;
        round();
        sound_sndmain_cpp_FUN_00555fd0();
        if (0.0 < (double)(int)ROUND(fVar5)) {
          sound_sndmain_cpp_FUN_00555f60((double)(int)ROUND(fVar5),0);
        }
        uVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"m-gun-t.wav");
        *(uint *)&param_1[1].field_0x8 = uVar3;
        sound_sndmain_cpp_FUN_00556050();
      }
      sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1[1].field_0x4);
      sound_sndmain_cpp_FUN_00556fd0();
      return;
    }
    sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1[1].field_0x4);
    return;
  }
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + -1;
  fVar1 = (float)core_actor_cpp_FUN_0040ce40(0x3f666666,0x3f8e38e4);
  iVar2 = sound_sndmain_cpp_FUN_00556ae0(*(uint *)&param_1[1].field_0x4,fVar1);
  if (iVar2 != 0) {
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1[1].field_0x4);
  FUN_005a28c0(auStack_7c,"$@m-gun1.wav @ 2.3 * %f" + 2,(double)afStack_1d4[0]);
  sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1[1].field_0x8);
  uVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x30))(param_1,auStack_7c);
  *(uint *)&param_1[1].field_0x4 = uVar3;
  return;
}
