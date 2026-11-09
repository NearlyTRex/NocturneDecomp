// Name: core_tommygun.cpp_FUN_00576130
// Address: 00576130
// Address Range: [[00576130, 00576365]]
// Convention: unknown
// Signature: void core_tommygun_cpp_FUN_00576130(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_tommygun_cpp_FUN_00576130(int param_1,uint param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  CSfxSample CStack_1dc;
  double dStack_28;
  double dStack_20;
  float fStack_18;
  
  core_weapon_cpp_FUN_00589c80(param_1,param_2);
  if (*(int *)(param_1 + 0x6d4) < 1) {
    dStack_20 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_00550c30(*(uint *)(param_1 + 0x6d8),2);
    fVar1 = (float)dStack_20;
    if (0.0 <= fVar1) {
      sound_sndmain_cpp_lockSound_FUN_005532f0();
      dStack_28 = (double)(fVar1 * _DAT_005eccd0);
      dStack_20 = floor(dStack_28);
      fVar4 = (float10)dStack_20;
      fVar5 = (float10)dStack_28;
      sound_sndmain_cpp_CSfxSample_init_FUN_0054fcd0(&CStack_1dc);
      iVar2 = sound_sndmain_cpp_FUN_00550bf0(*(uint *)(param_1 + 0x6d8),&CStack_1dc);
      if (iVar2 != 0) {
        fStack_18 = (float)CStack_1dc._272_4_;
        fVar5 = (float10)(int)CStack_1dc._272_4_ * (float10)(float)(fVar5 - fVar4) *
                (float10)_DAT_005eccd4;
        round();
        iVar2 = (int)ROUND(fVar5);
        sound_sndmain_cpp_FUN_00550450();
        fStack_18 = (float)iVar2;
        if (0.0 < (double)iVar2) {
          sound_sndmain_cpp_FUN_005503e0((double)iVar2,0);
        }
        uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"m-gun-t.wav");
        *(uint *)(param_1 + 0x6dc) = uVar3;
        sound_sndmain_cpp_FUN_005504d0();
      }
      sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(param_1 + 0x6d8));
      sound_sndmain_cpp_FUN_00551440();
      return;
    }
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(param_1 + 0x6d8));
    return;
  }
  *(int *)(param_1 + 0x6d4) = *(int *)(param_1 + 0x6d4) + -1;
  fVar1 = (float)core_actor_cpp_FUN_0040cf60(0x3f666666,0x3f8e38e4);
  fStack_18 = fVar1;
  iVar2 = sound_sndmain_cpp_FUN_00550f50(*(uint *)(param_1 + 0x6d8),fVar1);
  if (iVar2 != 0) {
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(param_1 + 0x6d8));
  FUN_005b7790(&CStack_1dc.field_0x150,"$@m-gun1.wav @ 2.3 * %f" + 2,(double)fVar1);
  sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(param_1 + 0x6dc));
  uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x38))(param_1,&CStack_1dc.field_0x150);
  *(uint *)(param_1 + 0x6d8) = uVar3;
  return;
}
