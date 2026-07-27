// Name: core_tommygun.cpp_FUN_005464a0
// Address: 005464a0
// Address Range: [[005464a0, 00546734]]
// Convention: unknown
// Signature: void core_tommygun_cpp_FUN_005464a0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_tommygun_cpp_FUN_005464a0(int param_1,uint param_2)

{
  double dVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  byte local_1b4 [272];
  int local_a4;
  byte local_8c [100];
  ulonglong local_28;
  ulonglong local_20;
  float local_18;
  
  core_weapon_cpp_CWeapon_process_FUN_00554030(param_1,param_2);
  if (*(int *)(param_1 + 0x570) < 1) {
    local_20 = (double)sound_sndmain_cpp_getSfxPlaybackPosition_FUN_00526d10
                                 (*(uint *)(param_1 + 0x574),2);
    fVar2 = (float)local_20;
    if (fVar2 < 0.0) {
      sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0x574));
    }
    else {
      sound_sndmain_cpp_lockSound_FUN_00528800();
      local_20 = (double)(fVar2 * 6.0f);
      local_28 = (double)floor(local_20);
      fVar5 = (float10)local_28;
      fVar6 = (float10)local_20;
      sound_sndmain_cpp_CSfxSample_init_FUN_00525b70(local_1b4);
      iVar3 = sound_sndmain_cpp_getSfxSampleInfo_FUN_00526cd0
                        (*(uint *)(param_1 + 0x574),local_1b4);
      if (iVar3 != 0) {
        local_18 = (float)local_a4;
        uVar4 = 0x54667c;
        fVar6 = (float10)round
                                   ((float10)local_a4 * (float10)(float)(fVar6 - fVar5) *
                                    (float10)0.1666667f);
        sound_sndmain_cpp_pushSfxOptions_FUN_00526340(uVar4);
        local_20 = __BITCAST_DOUBLE(CONCAT44((int)ROUND(fVar6),(uint)local_20));
        dVar1 = (double)(int)ROUND(fVar6);
        if (0.0 < dVar1) {
          sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005262d0(dVar1,0);
        }
        uVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"m-gun-t.wav");
        *(uint *)(param_1 + 0x578) = uVar4;
        sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
      }
      sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0x574));
      sound_sndmain_cpp_unlockSound_FUN_00528890();
    }
    iVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x8c))(param_1);
    if (iVar3 == *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
      xxx_unk_c_FUN_004940d0(INT_005b9284);
      return;
    }
  }
  else {
    *(int *)(param_1 + 0x570) = *(int *)(param_1 + 0x570) + -1;
    fVar2 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3f666666,0x3f8e38e4);
    local_18 = fVar2;
    iVar3 = sound_sndmain_cpp_setSfxBaseFrequency_FUN_00527130
                      (*(uint *)(param_1 + 0x574),fVar2);
    if (iVar3 == 0) {
      sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0x574));
      _sprintf(local_8c,"m-gun1.wav @ 2.3 * %f",(double)fVar2);
      sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0x578));
      uVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x28))(param_1,local_8c);
      *(uint *)(param_1 + 0x574) = uVar4;
    }
    iVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x8c))(param_1);
    if (iVar3 == *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
      xxx_unk_c_FUN_004940d0(INT_005b9284);
      return;
    }
  }
  return;
}
