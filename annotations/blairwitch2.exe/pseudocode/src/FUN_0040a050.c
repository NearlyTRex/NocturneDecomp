// Name: FUN_0040a050
// Address: 0040a050
// Address Range: [[0040a050, 0040ad42]]
// Convention: unknown
// Signature: undefined4 FUN_0040a050(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0040a050(int param_1,uint param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float10 fVar9;
  float afStackY_1198 [868];
  float *pfVar10;
  uint auStack_3d8 [3];
  float fStack_3cc;
  uint uStack_3c8;
  uint uStack_3c4;
  uint uStack_3bc;
  float fStack_3b8;
  uint uStack_3b4;
  byte auStack_39c [4];
  float fStack_398;
  byte auStack_360 [4];
  float fStack_35c;
  byte auStack_324 [4];
  float fStack_320;
  byte auStack_2e8 [60];
  byte auStack_2ac [60];
  uint auStack_270 [5];
  float fStack_25c;
  uint auStack_258 [5];
  uint uStack_244;
  uint auStack_240 [6];
  uint auStack_228 [6];
  uint auStack_210 [6];
  uint auStack_1f8 [6];
  uint auStack_1e0 [6];
  uint auStack_1c8 [6];
  uint uStack_1b0;
  float afStack_1ac [5];
  float afStack_198 [3];
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  uint uStack_178;
  uint uStack_174;
  uint uStack_170;
  float fStack_16c;
  float fStack_168;
  float afStack_164 [4];
  uint uStack_154;
  float fStack_150;
  uint uStack_144;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  float fStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  float afStack_110 [5];
  float fStack_fc;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  float afStack_e0 [4];
  float fStack_d0;
  uint uStack_cc;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  float fStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  float afStack_98 [4];
  uint uStack_88;
  float fStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  float afStack_74 [4];
  uint uStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  float fStack_30;
  uint uStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar8 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_2c = 0x3f800000;
  iStack_48 = 0;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
  puVar6 = auStack_1f8;
  puVar5 = auStack_258;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar6;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
  }
  uStack_e8 = uStack_244;
  FUN_00408d70();
  uStack_174 = 0;
  uStack_170 = 0;
  fStack_138 = fStack_fc;
  afStack_164[(uint)bVar8 * -2 + 0xc] = afStack_110[(uint)bVar8 * -2 + 6];
  afStack_164[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
       afStack_110[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
  puVar6 = auStack_240;
  puVar5 = auStack_270;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar6;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
  }
  fStack_16c = fStack_25c + _DAT_005ca6ca;
  FUN_00408d70();
  afStack_164[2] = (float)uStack_9c;
  afStack_164[(uint)bVar8 * -2 + 3] = afStack_98[(uint)bVar8 * -2];
  afStack_164[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
       afStack_98[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  if (afStack_e0 + 0xe != afStack_164 + 2) {
    fStack_a8 = afStack_164[2];
    uStack_a4 = afStack_164[3];
    uStack_a0 = uStack_154;
  }
  uStack_184 = uStack_2c;
  uStack_18c = 0;
  uStack_188 = 0;
  FUN_00408d70();
  afStack_98[2] = (float)uStack_cc;
  afStack_98[(uint)bVar8 * -2 + 3] = afStack_e0[(uint)bVar8 * -2 + 6];
  afStack_98[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
       afStack_e0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
  if (afStack_164 + 0x11 != afStack_98 + 2) {
    fStack_120 = afStack_98[2];
    uStack_11c = afStack_98[3];
    uStack_118 = uStack_88;
  }
  if (iStack_48 == 1) {
    uStack_180 = 0;
    uStack_178 = 0xc0400000;
    uStack_17c = 0;
    FUN_00408cf0();
    fVar1 = fStack_138;
    afStack_e0[2] = fStack_150;
    afStack_e0[(uint)bVar8 * -2 + 3] = afStack_164[(uint)bVar8 * -2 + 6];
    afStack_e0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         afStack_164[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
    fStack_54 = fVar1 + afStack_e0[2];
    fStack_50 = fStack_134 + afStack_e0[3];
    fStack_4c = fStack_130 + fStack_d0;
    fStack_b4 = fVar1 + afStack_e0[2];
    afStack_e0[(uint)bVar8 * -2 + 0xc] = afStack_74[(uint)bVar8 * -2 + 9];
    afStack_e0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
         afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
    if (afStack_98 + 5 != afStack_e0 + 0xb) {
      fStack_84 = fStack_b4;
      uStack_80 = uStack_b0;
      uStack_7c = uStack_ac;
    }
  }
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_124 = 0x3f800000;
  FUN_00408cf0();
  afStack_198[0] = (float)uStack_144;
  afStack_1ac[(uint)bVar8 * -2 + 6] = afStack_164[(uint)bVar8 * -2 + 9];
  afStack_1ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
       afStack_164[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
  iStack_28 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x9c))(param_1);
  if (iStack_48 == 0) {
    iStack_34 = iStack_48;
    for (iStack_38 = iStack_48; iStack_38 < *(int *)(0x01E661B8 + 0x14d164);
        iStack_38 = iStack_38 + 1) {
      iVar4 = *(int *)(0x01E661B8 + iStack_34 + 0x14d168);
      if ((iVar4 != param_1) && (iVar4 != iStack_28)) {
        iVar4 = FUN_0040c8f0();
        if (iVar4 == 0) {
          iStack_20 = FUN_0040c8f0();
          if (iStack_20 == 0) {
            iStack_24 = FUN_0040c8f0();
            if (iStack_24 != 0) {
              FUN_00408de0(iStack_24,afStack_164 + 0xb,uStack_2c);
              pfVar10 = afStack_1ac + 2;
              afStack_1ac[2] = afStack_110[2];
              afStack_1ac[(uint)bVar8 * -2 + 3] = afStack_110[(uint)bVar8 * -2 + 3];
              afStack_1ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
                   afStack_110[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
              (**(code **)(*(int *)(iStack_24 + 0x2b0) + 0x24))(iStack_24);
              puVar6 = auStack_1c8;
              puVar5 = auStack_1e0;
              for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar5 = *puVar6;
                puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
                puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
              }
              iVar4 = FUN_0041bc20(CONCAT44(pfVar10,auStack_1e0));
              if (iVar4 != 0) {
                FUN_004222d0(auStack_2ac);
                iVar4 = iStack_24;
                (**(code **)(*(int *)(param_1 + 0x2b0) + 0x84))
                          (param_1,param_2,auStack_2ac,iStack_24);
                (**(code **)(*(int *)(param_1 + 0x2b0) + 0x88))(param_1,param_2,auStack_2ac,iVar4);
                iVar4 = FUN_004c72d0(iVar4);
                if (iVar4 != 0) {
                  FUN_004c6d40();
                }
              }
            }
          }
          else {
            iVar4 = FUN_00578570();
            if (iVar4 != 0) {
              FUN_00408de0(iStack_20,afStack_164 + 0xb,uStack_2c);
              iVar4 = iStack_20;
              puVar6 = &uStack_1b0;
              uStack_1b0 = uStack_114;
              afStack_1ac[(uint)bVar8 * -2] = afStack_110[(uint)bVar8 * -2];
              afStack_1ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                   afStack_110[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
              (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x24))(iVar4);
              puVar5 = auStack_228;
              puVar7 = auStack_210;
              for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar7 = *puVar5;
                puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
                puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
              }
              iVar4 = FUN_0041bc20(CONCAT44(puVar6,auStack_210));
              if (iVar4 != 0) {
                FUN_004222d0(auStack_360);
                iVar4 = iStack_20;
                (**(code **)(*(int *)(param_1 + 0x2b0) + 0x84))
                          (param_1,param_2,auStack_360,iStack_20);
                FUN_00436710(PTR_DAT_00609ed0,"%s causing %5.2f damage to %s\n",param_1,
                             (double)fStack_35c,iVar4);
                FUN_005785b0();
                (**(code **)(*(int *)(param_1 + 0x2b0) + 0x88))(param_1,param_2,auStack_360,iVar4);
              }
            }
          }
        }
        else if (((iStack_28 == 0) ||
                 (iVar2 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0xe8))(iVar4), iVar2 == 0)) ||
                (iVar2 = FUN_0040c840(), iVar2 == 0)) {
          FUN_004222d0(auStack_324);
          (**(code **)(*(int *)(param_1 + 0x2b0) + 0x84))(param_1,param_2,auStack_324,iVar4);
          iVar2 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x108))
                            (iVar4,afStack_164 + 0x11,uStack_2c,auStack_324);
          if ((iVar2 != 0) && (0.0 < fStack_320)) {
            fVar9 = (float10)1 + (float10)fStack_320 * (float10)_DAT_005ca6ce;
            FUN_005b7ff0(*(uint *)(iVar4 + 0x280c));
            fStack_18 = (float)(int)ROUND(fVar9);
            FUN_004c9850(0x01CB8284,afStack_164 + 0x11,afStack_1ac + 5);
            (**(code **)(*(int *)(param_1 + 0x2b0) + 0x88))(param_1,param_2,auStack_324,iVar4);
          }
          iVar2 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x108))
                            (iVar4,afStack_e0 + 0xe,uStack_2c,auStack_324);
          if ((iVar2 != 0) && (0.0 < fStack_320)) {
            fVar9 = (float10)1 + (float10)fStack_320 * (float10)_DAT_005ca6ce;
            FUN_005b7ff0(*(uint *)(iVar4 + 0x280c));
            fStack_18 = (float)(int)ROUND(fVar9);
            FUN_004c9850(0x01CB8284,afStack_e0 + 0xe,afStack_1ac + 5);
            (**(code **)(*(int *)(param_1 + 0x2b0) + 0x88))(param_1,param_2,auStack_324,iVar4);
          }
        }
      }
      iStack_34 = iStack_34 + 4;
    }
  }
  if (iStack_48 == 1) {
    FUN_00537eb0();
    FUN_00537e30();
    FUN_00537df0(0x01E661B8);
    if (iStack_28 != 0) {
      FUN_00537e30();
    }
    iStack_3c = 0;
    while ((fStack_18 = (float)FUN_00535ee0(0x01E661B8,afStack_98 + 5,afStack_164 + 0xb),
           0.0 <= fStack_18 && (fStack_18 <= 1.0))) {
      iStack_1c = FUN_0040c8f0();
      if ((iStack_1c != 0) &&
         (iVar4 = (**(code **)(*(int *)(iStack_1c + 0x2b0) + 0x114))(iStack_1c), 0 < iVar4)) {
        iStack_1c = 0;
      }
      iVar4 = FUN_0040c8f0();
      iVar2 = FUN_0040c8f0();
      iStack_44 = iVar2;
      iStack_40 = FUN_0040c8f0();
      iVar3 = FUN_0040c8f0();
      if (iStack_1c == 0) {
        if (iVar4 == 0) {
          if (iVar2 == 0) {
            if (iStack_40 == 0) {
              if (iVar3 == 0) {
                return 0;
              }
              FUN_004a08d0(iVar3);
            }
            else {
              FUN_0043a350(iStack_40);
            }
          }
          else {
            iVar4 = FUN_00578570();
            if (iVar4 != 0) {
              FUN_004222d0(auStack_39c);
              (**(code **)(*(int *)(param_1 + 0x2b0) + 0x84))(param_1,param_2,auStack_39c,iVar2);
              FUN_00436710(PTR_DAT_00609ed0,"%s causing %5.2f damage to %s\n",param_1,
                           (double)fStack_398,iVar2);
              FUN_005785b0();
              (**(code **)(*(int *)(param_1 + 0x2b0) + 0x88))(param_1,param_2,auStack_39c,0);
            }
            FUN_00537e30();
          }
        }
        else {
          FUN_004222d0(auStack_2e8);
          (**(code **)(*(int *)(param_1 + 0x2b0) + 0x84))(param_1,param_2,auStack_2e8,iVar4);
          (**(code **)(*(int *)(param_1 + 0x2b0) + 0x88))(param_1,param_2,auStack_2e8,iVar4);
          iVar4 = FUN_004c72d0(iVar4);
          if (iVar4 == 0) {
            return 0;
          }
          FUN_004c6d40();
        }
      }
      else if (((iStack_28 == 0) ||
               (iVar4 = (**(code **)(*(int *)(iStack_1c + 0x2b0) + 0xe8))(iStack_1c), iVar4 == 0))
              || (iVar4 = FUN_0040c840(), iVar4 == 0)) {
        FUN_004222d0(auStack_3d8);
        auStack_3d8[0] = *(uint *)(0x01E661B8 + 0x14d148);
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x84))(param_1,param_2,auStack_3d8,iStack_1c);
        fStack_168 = *(float *)(0x01E661B8 + 0x14d11c) - *(float *)(0x01E661B8 + 0x14d110);
        afStack_164[0] = *(float *)(0x01E661B8 + 0x14d120) - *(float *)(0x01E661B8 + 0x14d114);
        afStack_164[1] = *(float *)(0x01E661B8 + 0x14d124) - *(float *)(0x01E661B8 + 0x14d118);
        fStack_60 = fStack_168;
        afStack_74[(uint)bVar8 * -2 + 6] = afStack_164[(uint)bVar8 * -2];
        afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
             afStack_164[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        fStack_30 = (float)_DAT_005ca6d6 /
                    SQRT(fStack_58 * fStack_58 + fStack_60 * fStack_60 + fStack_5c * fStack_5c);
        fStack_c0 = fStack_60 * fStack_30;
        fStack_bc = fStack_5c * fStack_30;
        fStack_b8 = fStack_58 * fStack_30;
        afStack_74[2] = fStack_60 * fStack_30;
        afStack_74[(uint)bVar8 * -2 + 3] = afStack_e0[(uint)bVar8 * -2 + 9];
        afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
             afStack_e0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
        if (&fStack_3cc != afStack_74 + 2) {
          fStack_3cc = afStack_74[2];
          uStack_3c8 = afStack_74[3];
          uStack_3c4 = uStack_64;
        }
        FUN_00408de0();
        uStack_78 = uStack_e4;
        afStack_74[(uint)bVar8 * -2] = afStack_e0[(uint)bVar8 * -2];
        iVar4 = iStack_1c;
        afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             afStack_e0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        if (&uStack_3bc != &uStack_78) {
          uStack_3bc = uStack_78;
          fStack_3b8 = afStack_74[0];
          uStack_3b4 = afStack_74[1];
        }
        (**(code **)(*(int *)(iStack_1c + 0x2b0) + 0x110))();
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x88))(param_1,param_2,auStack_3d8,iVar4);
        FUN_00537e30();
      }
      iStack_3c = iStack_3c + 1;
      if (3 < iStack_3c) {
        return 0;
      }
    }
  }
  return 0;
}
