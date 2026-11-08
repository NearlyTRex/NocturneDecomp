// Name: FUN_005952f0
// Address: 005952f0
// Address Range: [[005952f0, 00595b76]]
// Convention: unknown
// Signature: void FUN_005952f0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005952f0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_10dc [903];
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  uint auStack_2a4 [12];
  uint auStack_274 [12];
  byte auStack_244 [48];
  uint auStack_214 [12];
  uint auStack_1e4 [12];
  uint auStack_1b4 [12];
  byte auStack_184 [48];
  uint auStack_154 [12];
  uint auStack_124 [12];
  uint uStack_f4;
  float afStack_f0 [5];
  uint uStack_dc;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  uint uStack_c4;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  uint uStack_a4;
  float fStack_a0;
  float afStack_9c [5];
  float afStack_88 [3];
  float afStack_7c [3];
  float fStack_70;
  uint uStack_64;
  float fStack_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_3c;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  int iStack_20;
  float *pfStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar7 = 0;
  iVar3 = FUN_0042e1a0(param_1,param_2);
  if (iVar3 != 0) {
    iStack_24 = param_1 + 0x30;
    fStack_2a8 = param_2 * *(float *)(param_1 + 0xc1d0);
    iStack_20 = param_1 + 0xc2a8;
    pfStack_1c = (float *)(param_1 + 0x20);
    iStack_18 = param_1 + 0x158;
    while (0.0 < fStack_2a8) {
      uVar4 = FUN_00524270(iStack_18,&fStack_2a8);
      if (99 < uVar4) {
        if (uVar4 < 0x65) {
          iVar3 = *(int *)(param_1 + 0xc1e8);
          if ((iVar3 != 0) &&
             (iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0xf4))(iVar3), iVar3 == 0)) {
            FUN_00569180(iStack_18);
            FUN_00595f10(param_1);
            puVar5 = auStack_2a4;
            puVar6 = auStack_124;
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
              puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
            }
            FUN_005b6270(auStack_124);
            puVar5 = &uStack_f4;
            uStack_f4 = uStack_c4;
            afStack_f0[(uint)bVar7 * -2] = afStack_f0[(uint)bVar7 * -2 + 0xc];
            afStack_f0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 afStack_f0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
            FUN_00408b40(param_1,puVar5);
            fStack_4c = fStack_70;
            afStack_9c[(uint)bVar7 * -2 + 0x15] = afStack_9c[(uint)bVar7 * -2 + 0xc];
            afStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
                 afStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
            iVar3 = *(int *)(param_1 + 0xc1e8);
            fStack_58 = fStack_4c - *(float *)(iVar3 + 0x20);
            fStack_54 = fStack_48 - *(float *)(iVar3 + 0x24);
            fStack_50 = fStack_44 - *(float *)(iVar3 + 0x28);
            fStack_d0 = fStack_58;
            afStack_f0[(uint)bVar7 * -2 + 9] = afStack_9c[(uint)bVar7 * -2 + 0x12];
            afStack_f0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
                 afStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
            if (((ABS(fStack_cc) <= (float)_DAT_005f775e) &&
                (fStack_d0 * fStack_d0 + fStack_c8 * fStack_c8 <= (float)_DAT_005f7766)) &&
               (iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0xec))(iVar3,param_1,1), iVar3 != 0))
            {
              *(uint *)(param_1 + 0xc274) = 0;
              FUN_005b5760(auStack_184,*(int *)(param_1 + 0xc1e8) + 0x20,
                           *(int *)(param_1 + 0xc1e8) + 0x30);
              FUN_005b5620(auStack_244,pfStack_1c,iStack_24);
              FUN_005b6380(auStack_124);
              puVar5 = auStack_1b4;
              puVar6 = auStack_154;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar6 = *puVar5;
                puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
                puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
              }
              FUN_005b5200(auStack_184,auStack_244,auStack_154);
              puVar5 = auStack_214;
              puVar6 = auStack_1e4;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar6 = *puVar5;
                puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
                puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
              }
              FUN_005b5200(auStack_1e4);
              puVar5 = auStack_274;
              puVar6 = (uint *)(param_1 + 0xc278);
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar6 = *puVar5;
                puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
                puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
              }
              puVar5 = (uint *)(param_1 + 0xc278);
              puVar6 = (uint *)(param_1 + 0xc2a8);
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar6 = *puVar5;
                puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
                puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
              }
              FUN_005b5600(iStack_20);
              iVar3 = 0;
              do {
                fStack_ac = (float)FUN_0040cc00(0xc0e00000,0x40e00000);
                fStack_14 = fStack_ac;
                uStack_a4 = FUN_0040cc00(0xc0e00000,0x40e00000);
                fStack_14 = (float)uStack_a4;
                fStack_a8 = (float)FUN_0040cc00(0xbf800000,0x41700000);
                iVar3 = iVar3 + 1;
                fStack_14 = fStack_a8;
                FUN_004e5f40(0x01CD0E3C,afStack_9c + 0x14,afStack_f0 + 0x11,
                             *(uint *)(*(int *)(param_1 + 0xc1e8) + 0x27a0));
              } while (iVar3 < 0x46);
            }
          }
        }
        else if (((uVar4 == 0x65) && (iVar3 = *(int *)(param_1 + 0xc1e8), iVar3 != 0)) &&
                (iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0xf4))(iVar3), iVar3 == param_1)) {
          *(uint *)(*(int *)(param_1 + 0xc1e8) + 0x70) = 2;
        }
      }
    }
    iVar3 = FUN_00524770(iStack_18);
    uVar4 = *(uint *)(iVar3 + 0x24);
    if (uVar4 < 2) {
      if (uVar4 == 0) {
        *(uint *)(param_1 + 0xc26c) = 0;
        if (0.0 < *(float *)(param_1 + 0xc268)) {
          *(float *)(param_1 + 0xc268) = *(float *)(param_1 + 0xc268) - param_2;
        }
        if (*(float *)(param_1 + 0xc268) <= 0.0) {
          if (*(int *)(param_1 + 0xc270) == 0) {
            iVar3 = FUN_00595c40(param_1,"CEnemy CHero CNPC");
            if (iVar3 != 0) {
              FUN_005247c0(param_1 + 0x158,2,1);
              *(uint *)(param_1 + 0xc268) = 0;
            }
          }
          else {
            iVar3 = FUN_00595c40(param_1,"CHero CNPC");
            if (iVar3 != 0) {
              FUN_005247c0(param_1 + 0x158,2,1);
              *(uint *)(param_1 + 0xc268) = 0;
              FUN_004e6bf0(*(uint *)(param_1 + 0xc270));
              *(uint *)(param_1 + 0xc270) = 0;
            }
          }
        }
      }
    }
    else if (uVar4 < 3) {
      fVar1 = *(float *)(param_1 + 0xc26c) + param_2;
      *(float *)(param_1 + 0xc26c) = fVar1;
      if (fVar1 < (float)_DAT_005f7726) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
        iVar3 = *(int *)(param_1 + 0xc1e8);
        if (iVar3 != 0) {
          fStack_b8 = *(float *)(iVar3 + 0x20) - *pfStack_1c;
          fStack_b4 = *(float *)(iVar3 + 0x24) - pfStack_1c[1];
          fStack_b0 = *(float *)(iVar3 + 0x28) - pfStack_1c[2];
          afStack_7c[0] = fStack_b8;
          afStack_9c[(uint)bVar7 * -2 + 9] = afStack_f0[(uint)bVar7 * -2 + 0xf];
          afStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
               afStack_f0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
          FUN_005a7520(afStack_9c + 8);
          uStack_64 = uStack_dc;
          afStack_9c[(uint)bVar7 * -2 + 0xf] = afStack_f0[(uint)bVar7 * -2 + 6];
          afStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
               afStack_f0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
          fStack_3c = (float)FUN_0040cd60(fStack_60 - *(float *)(param_1 + 0x34));
          fStack_2c = param_2 * _DAT_005f772e;
          *(float *)(param_1 + 0x2508) = fStack_3c;
          fStack_34 = -fStack_2c;
          if (*(float *)(param_1 + 0x2508) < fStack_34) {
            *(float *)(param_1 + 0x2508) = fStack_34;
          }
          if (fStack_2c < *(float *)(param_1 + 0x2508)) {
            *(float *)(param_1 + 0x2508) = fStack_2c;
          }
          fStack_14 = fStack_3c;
          if ((float)_DAT_005f7736 < *(float *)(param_1 + 0xc26c)) {
            iVar3 = *(int *)(param_1 + 0xc1e8);
            fVar1 = *(float *)(param_1 + 0x20) - *(float *)(iVar3 + 0x20);
            fVar2 = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
            fStack_2b0 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
            fStack_2ac = fStack_2b0;
            if (((fStack_3c < _DAT_005f773e) &&
                (ABS(*(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24)) < (float)_DAT_005f7746))
               && ((float)_DAT_005f774e < fStack_2b0 && fStack_2b0 < (float)_DAT_005f7756)) {
              FUN_005247c0(param_1 + 0x158,6,1);
              *(uint *)(param_1 + 0xc268) = 0x41c80000;
            }
          }
        }
      }
      else {
        FUN_005247c0(iStack_18,0,1);
        *(uint *)(param_1 + 0xc268) = 0x41c80000;
      }
    }
    else if ((((uVar4 == 6) && (iVar3 = *(int *)(param_1 + 0xc1e8), iVar3 != 0)) &&
             (iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3), iVar3 < 1)) &&
            (iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xf4))
                               (*(int *)(param_1 + 0xc1e8)), iVar3 == 0)) {
      iVar3 = *(int *)(param_1 + 0xc1e8);
      fStack_a0 = *(float *)(iVar3 + 0x20) - *pfStack_1c;
      afStack_9c[0] = *(float *)(iVar3 + 0x24) - pfStack_1c[1];
      afStack_9c[1] = *(float *)(iVar3 + 0x28) - pfStack_1c[2];
      afStack_88[0] = fStack_a0;
      afStack_9c[(uint)bVar7 * -2 + 6] = afStack_9c[(uint)bVar7 * -2];
      afStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
           afStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      FUN_005a7520(afStack_9c + 5);
      afStack_9c[2] = afStack_f0[2];
      afStack_9c[(uint)bVar7 * -2 + 3] = afStack_f0[(uint)bVar7 * -2 + 3];
      afStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_f0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      fStack_14 = (float)FUN_0040cd60(afStack_9c[3] - *(float *)(param_1 + 0x34));
      fStack_28 = param_2 * _DAT_005f771e;
      *(float *)(param_1 + 0x2508) = fStack_14;
      fStack_30 = -fStack_28;
      if (fStack_14 < fStack_30) {
        *(float *)(param_1 + 0x2508) = fStack_30;
      }
      if (fStack_28 < *(float *)(param_1 + 0x2508)) {
        *(float *)(param_1 + 0x2508) = fStack_28;
      }
    }
    fVar1 = param_2 / _DAT_00606ad8 + *(float *)(param_1 + 0xc274);
    *(float *)(param_1 + 0xc274) = fVar1;
    if (1.0 < fVar1) {
      *(uint *)(param_1 + 0xc274) = 0x3f800000;
    }
    FUN_0042e160(param_1);
    FUN_005675a0(param_1 + 0x158);
    FUN_00433e80(param_1,param_2);
  }
  return;
}
