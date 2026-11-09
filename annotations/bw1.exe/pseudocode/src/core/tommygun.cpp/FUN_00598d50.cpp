// Name: core_tommygun.cpp_FUN_00598d50
// Address: 00598d50
// Address Range: [[00598d50, 00598f85]]
// Convention: unknown
// Signature: void core_tommygun_cpp_FUN_00598d50(CWeapon *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_tommygun_cpp_FUN_00598d50(CWeapon *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  CSfxSample CStack_1d4;
  double dStack_20;
  double dStack_18;
  
  core_weapon_cpp_CWeapon_process_FUN_005ad770(param_1,param_2);
  if (*(int *)(param_1 + 1) < 1) {
    dStack_18 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_00573660
                          (*(uint *)&param_1[1].field_0x4,2);
    fVar1 = (float)dStack_18;
    if (0.0 <= fVar1) {
      sound_sndmain_cpp_lockSound_FUN_00575d20();
      dStack_20 = (double)(fVar1 * _DAT_005f7f44);
      dStack_18 = floor(dStack_20);
      fVar4 = (float10)dStack_18;
      fVar5 = (float10)dStack_20;
      sound_sndmain_cpp_CSfxSample_init_FUN_00572340(&CStack_1d4);
      iVar2 = sound_sndmain_cpp_FUN_00573620(*(uint *)&param_1[1].field_0x4,&CStack_1d4);
      if (iVar2 != 0) {
        fVar5 = (float10)(int)CStack_1d4._272_4_ * (float10)(float)(fVar5 - fVar4) *
                (float10)_DAT_005f7f48;
        round();
        sound_sndmain_cpp_FUN_00572ac0();
        if (0.0 < (double)(int)ROUND(fVar5)) {
          sound_sndmain_cpp_FUN_00572a50((double)(int)ROUND(fVar5),0);
        }
        uVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"m-gun-t.wav");
        *(uint *)&param_1[1].field_0x8 = uVar3;
        sound_sndmain_cpp_FUN_00572b40();
      }
      sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1[1].field_0x4);
      sound_sndmain_cpp_FUN_00573e70();
      return;
    }
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1[1].field_0x4);
    return;
  }
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + -1;
  fVar1 = (float)core_actor_cpp_FUN_0040cc00(0x3f666666,0x3f8e38e4);
  iVar2 = sound_sndmain_cpp_FUN_00573980(*(uint *)&param_1[1].field_0x4,fVar1);
  if (iVar2 != 0) {
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1[1].field_0x4);
  FUN_005bfb40(&CStack_1d4.field_0x150,"$@m-gun1.wav @ 2.3 * %f" + 2,(double)fVar1);
  sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1[1].field_0x8);
  uVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x30))(param_1,&CStack_1d4.field_0x150);
  *(uint *)&param_1[1].field_0x4 = uVar3;
  return;
}
