// Name: FUN_00409f20
// Address: 00409f20
// Address Range: [[00409f20, 0040aa5e]]
// Convention: unknown
// Signature: undefined4 FUN_00409f20(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00409f20(int param_1,uint param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float10 fVar8;
  float afStackY_1138 [882];
  float *pfVar9;
  byte auStack_348 [4];
  float fStack_344;
  byte auStack_30c [60];
  uint auStack_2d0 [3];
  float fStack_2c4;
  uint uStack_2c0;
  uint uStack_2bc;
  float fStack_2b4;
  uint uStack_2b0;
  uint uStack_2ac;
  byte auStack_294 [60];
  byte auStack_258 [4];
  float fStack_254;
  byte auStack_21c [4];
  float fStack_218;
  uint auStack_1e0 [6];
  uint auStack_1c8 [6];
  uint auStack_1b0 [6];
  uint auStack_198 [6];
  uint auStack_180 [6];
  uint auStack_168 [5];
  uint uStack_154;
  float fStack_150;
  float afStack_14c [5];
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  float fStack_12c;
  uint uStack_128;
  uint uStack_124;
  float fStack_120;
  float afStack_11c [4];
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  float afStack_e4 [3];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  uint uStack_cc;
  float fStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  float fStack_b4;
  float fStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  float fStack_90;
  float afStack_8c [5];
  float fStack_78;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float afStack_60 [3];
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  float fStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar7 = 0;
  iStack_44 = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
  puVar5 = auStack_180;
  puVar6 = auStack_168;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  uStack_130 = uStack_154;
  FUN_00408b40();
  iVar4 = iStack_44;
  fStack_120 = afStack_14c[2];
  afStack_11c[(uint)bVar7 * -2] = afStack_14c[(uint)bVar7 * -2 + 3];
  afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_14c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  if (iVar4 == 1) {
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0xc0400000;
    FUN_00408ac0();
    fVar1 = fStack_120;
    afStack_11c[2] = fStack_78;
    afStack_11c[(uint)bVar7 * -2 + 3] = afStack_8c[(uint)bVar7 * -2 + 6];
    afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
    fStack_150 = fVar1 + afStack_11c[2];
    afStack_14c[0] = afStack_11c[0] + afStack_11c[3];
    afStack_14c[1] = afStack_11c[1] + fStack_10c;
    fStack_c0 = fVar1 + afStack_11c[2];
    afStack_11c[(uint)bVar7 * -2 + 0x18] = afStack_14c[(uint)bVar7 * -2];
    afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19] =
         afStack_14c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    if (&fStack_12c != afStack_11c + 0x17) {
      fStack_12c = fStack_c0;
      uStack_128 = uStack_bc;
      uStack_124 = uStack_b8;
    }
  }
  uStack_30 = 0x40000000;
  uStack_54 = 0;
  uStack_4c = 0x3f800000;
  uStack_50 = 0;
  FUN_00408ac0();
  fStack_90 = (float)uStack_f0;
  afStack_8c[(uint)bVar7 * -2] = afStack_11c[(uint)bVar7 * -2 + 0xc];
  afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
  iStack_48 = (**(code **)(*(int *)(param_1 + 0x154) + 0x94))(param_1);
  if (iStack_44 == 0) {
    iStack_34 = iStack_44;
    for (iStack_38 = iStack_44; iStack_38 < *(int *)(0x01E82168 + 0x14d164);
        iStack_38 = iStack_38 + 1) {
      iVar4 = *(int *)(0x01E82168 + iStack_34 + 0x14d168);
      if ((iVar4 != param_1) && (iVar4 != iStack_48)) {
        iVar4 = FUN_0040c600();
        if (iVar4 == 0) {
          iStack_20 = FUN_0040c600();
          if (iStack_20 == 0) {
            iStack_24 = FUN_0040c600();
            if (iStack_24 != 0) {
              FUN_00408bb0(iStack_24,&fStack_120,uStack_30);
              pfVar9 = afStack_11c + 0xe;
              afStack_e4[0] = (float)uStack_cc;
              afStack_11c[(uint)bVar7 * -2 + 0xf] = afStack_11c[(uint)bVar7 * -2 + 0x15];
              afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
                   afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16];
              (**(code **)(*(int *)(iStack_24 + 0x154) + 0x1c))(iStack_24);
              puVar5 = auStack_1e0;
              puVar6 = auStack_1b0;
              for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar6 = *puVar5;
                puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
                puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
              }
              iVar4 = FUN_00421b90(CONCAT44(pfVar9,auStack_1b0));
              if (iVar4 != 0) {
                FUN_0042c010(auStack_30c);
                iVar4 = iStack_24;
                (**(code **)(*(int *)(param_1 + 0x154) + 0x7c))
                          (param_1,param_2,auStack_30c,iStack_24);
                (**(code **)(*(int *)(param_1 + 0x154) + 0x80))(param_1,param_2,auStack_30c,iVar4);
                iVar4 = FUN_004e3a40(iStack_24);
                if (iVar4 != 0) {
                  FUN_004e34b0();
                }
              }
            }
          }
          else {
            iVar4 = FUN_0059bdf0();
            if (iVar4 != 0) {
              FUN_00408bb0(iStack_20,&fStack_120,uStack_30);
              pfVar9 = afStack_8c + 0xb;
              afStack_60[0] = afStack_8c[2];
              afStack_8c[(uint)bVar7 * -2 + 0xc] = afStack_8c[(uint)bVar7 * -2 + 3];
              afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
                   afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
              (**(code **)(*(int *)(iStack_20 + 0x154) + 0x1c))(iStack_20);
              puVar5 = auStack_1c8;
              puVar6 = auStack_198;
              for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar6 = *puVar5;
                puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
                puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
              }
              iVar4 = FUN_00421b90(CONCAT44(pfVar9,auStack_198));
              if (iVar4 != 0) {
                FUN_0042c010(auStack_348);
                (**(code **)(*(int *)(param_1 + 0x154) + 0x7c))
                          (param_1,param_2,auStack_348,iStack_20);
                FUN_00445430(PTR_DAT_00611100,"%s causing %5.2f damage to %s\n",param_1,
                             (double)fStack_344,iStack_20);
                iVar4 = iStack_20;
                FUN_0059be30();
                (**(code **)(*(int *)(param_1 + 0x154) + 0x80))(param_1,param_2,auStack_348,iVar4);
              }
            }
          }
        }
        else if (((iStack_48 == 0) ||
                 (iVar2 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xe0))(iVar4), iVar2 == 0)) ||
                (iVar2 = FUN_0040c550(), iVar2 == 0)) {
          uStack_30 = 0x40000000;
          FUN_0042c010(auStack_258);
          (**(code **)(*(int *)(param_1 + 0x154) + 0x7c))(param_1,param_2,auStack_258,iVar4);
          (**(code **)(*(int *)(iVar4 + 0x154) + 0x100))(iVar4,&fStack_120,0x40000000,auStack_258);
          if (0.0 < fStack_254) {
            fVar8 = (float10)1 + (float10)fStack_254 * (float10)_DAT_005d2631;
            FUN_005c03a0(*(uint *)(iVar4 + 0x27a0));
            fStack_18 = (float)(int)ROUND(fVar8);
            FUN_004e6060(0x01CD0E3C,&fStack_120,afStack_11c + 0x23);
            (**(code **)(*(int *)(param_1 + 0x154) + 0x80))(param_1,param_2,auStack_258,iVar4);
          }
        }
      }
      iStack_34 = iStack_34 + 4;
    }
  }
  if (iStack_44 == 1) {
    FUN_005592d0();
    FUN_00559250();
    FUN_00559210(0x01E82168);
    if (iStack_48 != 0) {
      FUN_00559250();
    }
    iStack_2c = 0;
    while ((fStack_18 = (float)FUN_00557300(0x01E82168,&fStack_12c,&fStack_120), 0.0 <= fStack_18
           && (fStack_18 <= 1.0))) {
      iStack_1c = FUN_0040c600();
      if ((iStack_1c != 0) &&
         (iVar4 = (**(code **)(*(int *)(iStack_1c + 0x154) + 0x10c))(iStack_1c), 0 < iVar4)) {
        iStack_1c = 0;
      }
      iVar4 = FUN_0040c600();
      iVar2 = FUN_0040c600();
      iStack_40 = iVar2;
      iStack_3c = FUN_0040c600();
      iVar3 = FUN_0040c600();
      if (iStack_1c == 0) {
        if (iVar4 == 0) {
          if (iVar2 == 0) {
            if (iStack_3c == 0) {
              if (iVar3 == 0) {
                return 0;
              }
              FUN_004b9180(iVar3);
            }
            else {
              FUN_00449600(iStack_3c);
            }
          }
          else {
            iVar4 = FUN_0059bdf0();
            if (iVar4 != 0) {
              FUN_0042c010(auStack_21c);
              (**(code **)(*(int *)(param_1 + 0x154) + 0x7c))(param_1,param_2,auStack_21c,iVar2);
              FUN_00445430(PTR_DAT_00611100,"%s causing %5.2f damage to %s\n",param_1,
                           (double)fStack_218,iVar2);
              FUN_0059be30();
              (**(code **)(*(int *)(param_1 + 0x154) + 0x80))(param_1,param_2,auStack_21c,0);
            }
            FUN_00559250();
          }
        }
        else {
          FUN_0042c010(auStack_294);
          (**(code **)(*(int *)(param_1 + 0x154) + 0x7c))(param_1,param_2,auStack_294,iVar4);
          (**(code **)(*(int *)(param_1 + 0x154) + 0x80))(param_1,param_2,auStack_294,iVar4);
          iVar4 = FUN_004e3a40(iVar4);
          if (iVar4 == 0) {
            return 0;
          }
          FUN_004e34b0();
        }
      }
      else if (((iStack_48 == 0) ||
               (iVar4 = (**(code **)(*(int *)(iStack_1c + 0x154) + 0xe0))(iStack_1c), iVar4 == 0))
              || (iVar4 = FUN_0040c550(), iVar4 == 0)) {
        FUN_0042c010(auStack_2d0);
        auStack_2d0[0] = *(uint *)(0x01E82168 + 0x14d148);
        (**(code **)(*(int *)(param_1 + 0x154) + 0x7c))(param_1,param_2,auStack_2d0,iStack_1c);
        fStack_d8 = *(float *)(0x01E82168 + 0x14d11c) - *(float *)(0x01E82168 + 0x14d110);
        fStack_d4 = *(float *)(0x01E82168 + 0x14d120) - *(float *)(0x01E82168 + 0x14d114);
        fStack_d0 = *(float *)(0x01E82168 + 0x14d124) - *(float *)(0x01E82168 + 0x14d118);
        fStack_108 = fStack_d8;
        afStack_11c[(uint)bVar7 * -2 + 6] = afStack_11c[(uint)bVar7 * -2 + 0x12];
        afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
             afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
        fStack_28 = (float)_DAT_005d2639 /
                    SQRT(fStack_100 * fStack_100 + fStack_108 * fStack_108 + fStack_104 * fStack_104
                        );
        fStack_6c = fStack_108 * fStack_28;
        fStack_68 = fStack_104 * fStack_28;
        fStack_64 = fStack_100 * fStack_28;
        fStack_fc = fStack_108 * fStack_28;
        afStack_11c[(uint)bVar7 * -2 + 9] = afStack_8c[(uint)bVar7 * -2 + 9];
        afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
             afStack_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
        if (&fStack_2c4 != afStack_11c + 8) {
          fStack_2c4 = fStack_fc;
          uStack_2c0 = uStack_f8;
          uStack_2bc = uStack_f4;
        }
        FUN_00408bb0();
        fStack_a8 = fStack_b4;
        afStack_11c[(uint)bVar7 * -2 + 0x1e] = afStack_11c[(uint)bVar7 * -2 + 0x1b];
        iVar4 = iStack_1c;
        afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1f] =
             afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1c];
        if (&fStack_2b4 != afStack_11c + 0x1d) {
          fStack_2b4 = fStack_a8;
          uStack_2b0 = uStack_a4;
          uStack_2ac = uStack_a0;
        }
        (**(code **)(*(int *)(iStack_1c + 0x154) + 0x108))();
        (**(code **)(*(int *)(param_1 + 0x154) + 0x80))(param_1,param_2,auStack_2d0,iVar4);
        FUN_00559250();
      }
      iStack_2c = iStack_2c + 1;
      if (3 < iStack_2c) {
        return 0;
      }
    }
  }
  return 0;
}
