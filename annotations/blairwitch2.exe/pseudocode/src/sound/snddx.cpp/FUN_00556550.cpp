// Name: sound_snddx.cpp_FUN_00556550
// Address: 00556550
// Address Range: [[00556550, 00556ecd]]
// Convention: unknown
// Signature: int sound_snddx_cpp_FUN_00556550(undefined4 param_1,int param_2,uint param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sound_snddx_cpp_FUN_00556550(uint param_1,int param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float fStack_1308;
  char acStack_1300 [400];
  char acStack_1170 [400];
  char acStack_fe0 [400];
  char acStack_e50 [400];
  char acStack_cc0 [400];
  char acStack_b30 [400];
  char acStack_9a0 [400];
  char acStack_810 [400];
  char acStack_680 [400];
  char acStack_4f0 [400];
  char acStack_360 [388];
  char acStack_1dc [412];
  ulonglong uStack_40;
  int iStack_38;
  int iStack_34;
  float fStack_30;
  int iStack_2c;
  float fStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int *piStack_18;
  float fStack_14;
  
  iVar5 = *(int *)(param_2 + 0x60);
  if (((iVar5 < 1) || (0x1e < iVar5)) || (*(int *)(iVar5 * 0x24 + 0x264ac10) == 0)) {
    _DAT_01d046a0 = "..\\sound\\snddx.cpp";
    _DAT_01d046a4 = 0x4f3;
    core_main_c_FUN_004e4500();
  }
  iStack_1c = 1;
  piStack_18 = (int *)(iVar5 * 0x24 + 0x264ac10);
  piVar1 = (int *)*piStack_18;
  piVar2 = *(int **)(iVar5 * 0x24 + 0x264ac14);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (piVar2 != (int *)0x0) {
    if ((param_3 & 0x88) != 0) {
      fStack_28 = *(float *)(param_2 + 0xf0);
      fStack_30 = *(float *)(param_2 + 0xf8);
      fStack_14 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00551190();
      if (((*(byte *)(param_2 + 0x4c) & 1) == 0) && (0.0 < fStack_14)) {
        fStack_28 = fStack_28 * fStack_14;
        fStack_30 = fStack_30 * fStack_14;
      }
    }
    if (((param_3 & 2) != 0) &&
       (uVar4 = (**(code **)(*piVar2 + 0x4c))
                          (piVar2,(float)*(double *)(param_2 + 4),(float)*(double *)(param_2 + 0xc),
                           (float)*(double *)(param_2 + 0x14)), uVar4 != 0)) {
      sound_snddx_cpp_FUN_00554ad0(uVar4);
      _sprintf(acStack_b30,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_FUN_005549c0();
      iStack_1c = 0;
    }
    if (((param_3 & 4) != 0) &&
       (uVar4 = (**(code **)(*piVar2 + 0x50))
                          (piVar2,*(uint *)(param_2 + 0x24),*(uint *)(param_2 + 0x28),
                           *(uint *)(param_2 + 0x2c)), uVar4 != 0)) {
      sound_snddx_cpp_FUN_00554ad0(uVar4);
      _sprintf(acStack_4f0,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_FUN_005549c0();
      iStack_1c = 0;
    }
    if (((param_3 & 8) != 0) &&
       ((iStack_38 = sound_snddx_cpp_FUN_00554f80(), param_3 == 0xffffffff ||
        (uVar4 = iStack_38 - piStack_18[5] >> 0x1f,
        1 < (int)((iStack_38 - piStack_18[5] ^ uVar4) - uVar4))))) {
      uVar4 = (**(code **)(*piVar1 + 0x3c))(piVar1);
      if (uVar4 != 0) {
        sound_snddx_cpp_FUN_00554ad0(uVar4);
        _sprintf(acStack_fe0,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_FUN_005549c0();
        iStack_1c = 0;
      }
      piStack_18[5] = iStack_38;
    }
    if (((param_3 & 0x10) != 0) &&
       ((iStack_34 = sound_snddx_cpp_FUN_00555020(), param_3 == 0xffffffff ||
        (uVar4 = iStack_34 - piStack_18[7] >> 0x1f,
        1 < (int)((iStack_34 - piStack_18[7] ^ uVar4) - uVar4))))) {
      uVar4 = (**(code **)(*piVar1 + 0x44))(piVar1);
      if (uVar4 != 0) {
        sound_snddx_cpp_FUN_00554ad0(uVar4);
        _sprintf(acStack_cc0,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_FUN_005549c0();
        iStack_1c = 0;
      }
      piStack_18[7] = iStack_34;
    }
    if ((param_3 & 0x40) != 0) {
      iStack_24 = 0;
      if ((*(byte *)(param_2 + 0x4c) & 1) != 0) {
        iStack_24 = 2;
      }
      if ((param_3 == 0xffffffff) || (iStack_24 != piStack_18[8])) {
        uVar4 = (**(code **)(*piVar2 + 0x48))(piVar2,iStack_24);
        if (uVar4 != 0) {
          sound_snddx_cpp_FUN_00554ad0(uVar4);
          _sprintf(acStack_1170,"DirectSux: Unable to %s.  (%s)");
          sound_sndmain_cpp_FUN_005549c0();
          iStack_1c = 0;
        }
        piStack_18[8] = iStack_24;
      }
    }
    if ((param_3 & 0x80) != 0) {
      uVar4 = (**(code **)(*piVar2 + 0x44))(piVar2,fStack_28);
      if (uVar4 != 0) {
        sound_snddx_cpp_FUN_00554ad0(uVar4);
        _sprintf(acStack_1dc,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_FUN_005549c0(acStack_1dc);
        fStack_28 = 0.0;
      }
      uVar4 = (**(code **)(*piVar2 + 0x40))(piVar2,uStack_40._4_4_,1);
      if (uVar4 != 0) {
        sound_snddx_cpp_FUN_00554ad0(uVar4);
        _sprintf(acStack_810,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_FUN_005549c0();
        iStack_1c = 0;
      }
    }
    if ((param_3 & 0x100) != 0) {
      fVar7 = (float10)*(double *)(param_2 + 0x10c);
      round();
      uStack_40 = (double)(longlong)ROUND(fVar7);
      uVar4 = (**(code **)(*piVar1 + 0x34))(piVar1);
      if (uVar4 != 0) {
        sound_snddx_cpp_FUN_00554ad0(uVar4);
        _sprintf(acStack_1300,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_FUN_005549c0();
        iStack_1c = 0;
      }
    }
    goto LAB_00556780;
  }
  if ((param_3 & 0xca) != 0) {
    iVar3 = sound_sndmain_cpp_FUN_00552810();
    iVar6 = 1;
    fStack_1308 = *(float *)(param_2 + 0x90);
    iVar5 = param_2;
    if (1 < iVar3) {
      do {
        if (fStack_1308 < *(float *)(iVar5 + 0x94)) {
          fStack_1308 = *(float *)(iVar5 + 0x94);
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar6 < iVar3);
    }
    iStack_2c = sound_snddx_cpp_FUN_00554f80();
    iStack_20 = 0;
    if ((iVar3 == 2) && (0.0 < fStack_1308)) {
      if (*(float *)(param_2 + 0x94) <= *(float *)(param_2 + 0x90)) {
        if (*(float *)(param_2 + 0x90) < *(float *)(param_2 + 0x94)) {
          if (0.0 < *(float *)(param_2 + 0x94)) {
            uStack_40 = floor
                                  ((double)((*(float *)(param_2 + 0x90) / *(float *)(param_2 + 0x94)
                                            ) * 0.6931472 * (float)_DAT_005ea091));
            fVar7 = (float10)uStack_40;
            round();
            iStack_20 = (int)ROUND(fVar7);
            if ((iStack_20 < 0) || (-10000 < iStack_20)) goto LAB_00556668;
          }
          else {
            iStack_20 = -10000;
          }
        }
      }
      else if (*(float *)(param_2 + 0x90) <= 0.0) {
LAB_00556668:
        iStack_20 = 10000;
      }
      else {
        uStack_40 = floor
                              ((double)((*(float *)(param_2 + 0x94) / *(float *)(param_2 + 0x90)) *
                                        0.6931472 * (float)_DAT_005ea099));
        fVar7 = (float10)uStack_40;
        round();
        iStack_20 = (int)ROUND(fVar7);
        if ((iStack_20 < 10000) || (0 < iStack_20)) {
          iStack_20 = 0;
        }
      }
    }
    if ((param_3 != 0xffffffff) ||
       (uVar4 = iStack_2c - piStack_18[5] >> 0x1f,
       1 < (int)((iStack_2c - piStack_18[5] ^ uVar4) - uVar4))) {
      uVar4 = (**(code **)(*piVar1 + 0x3c))(piVar1);
      if (uVar4 != 0) {
        sound_snddx_cpp_FUN_00554ad0(uVar4);
        _sprintf(acStack_680,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_FUN_005549c0();
        iStack_1c = 0;
      }
      piStack_18[5] = iStack_2c;
    }
    if ((param_3 != 0xffffffff) ||
       (uVar4 = iStack_20 - piStack_18[6] >> 0x1f,
       1 < (int)((iStack_20 - piStack_18[6] ^ uVar4) - uVar4))) {
      uVar4 = (**(code **)(*piVar1 + 0x40))(piVar1);
      if (uVar4 != 0) {
        sound_snddx_cpp_FUN_00554ad0(uVar4);
        _sprintf(acStack_e50,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_FUN_005549c0();
        iStack_1c = 0;
      }
      piStack_18[6] = iStack_20;
    }
  }
  if ((param_3 & 0x96) != 0) {
    iVar5 = sound_snddx_cpp_FUN_00555020();
    if ((param_3 != 0xffffffff) ||
       (uVar4 = iVar5 - piStack_18[7] >> 0x1f, 1 < (int)((iVar5 - piStack_18[7] ^ uVar4) - uVar4)))
    {
      uVar4 = (**(code **)(*piVar1 + 0x44))(piVar1);
      if (uVar4 != 0) {
        sound_snddx_cpp_FUN_00554ad0(uVar4);
        _sprintf(acStack_9a0,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_FUN_005549c0();
        iStack_1c = 0;
      }
      piStack_18[7] = iVar5;
    }
  }
  if ((param_3 & 0x100) != 0) {
    fVar7 = (float10)*(double *)(param_2 + 0x10c);
    round();
    uStack_40 = (double)(longlong)ROUND(fVar7);
    uVar4 = (**(code **)(*piVar1 + 0x34))(piVar1);
    if (uVar4 != 0) {
      sound_snddx_cpp_FUN_00554ad0(uVar4);
      _sprintf(acStack_360,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_FUN_005549c0();
      iStack_1c = 0;
    }
  }
LAB_00556780:
  *(uint *)(param_2 + 0x118) = *(uint *)(param_2 + 0x118) & (~param_3 | 0x40000000);
  if (iStack_1c == 0) {
    sound_sndmain_cpp_FUN_005549c0();
  }
  return iStack_1c;
}
