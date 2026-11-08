// Name: FUN_004179b0
// Address: 004179b0
// Address Range: [[004179b0, 004186ae]]
// Convention: unknown
// Signature: void FUN_004179b0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004179b0(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  byte bVar8;
  float afStackY_19a8 [1490];
  uint uVar9;
  byte auStack_244 [4];
  float fStack_240;
  int iStack_210;
  int iStack_20c;
  byte auStack_208 [4];
  uint uStack_204;
  int iStack_1d4;
  int iStack_1d0;
  uint uStack_1cc;
  float afStack_1c8 [7];
  float fStack_1ac;
  uint uStack_1a0;
  float fStack_194;
  uint uStack_190;
  uint uStack_18c;
  float afStack_188 [3];
  uint uStack_17c;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  uint uStack_14c;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  uint uStack_134;
  uint uStack_128;
  uint uStack_11c;
  uint uStack_110;
  uint uStack_10c;
  float fStack_108;
  float fStack_104;
  float afStack_100 [4];
  uint uStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  uint uStack_80;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  int iStack_38;
  float fStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  float *pfStack_24;
  int iStack_20;
  int iStack_1c;
  float *pfStack_18;
  float fStack_14;
  
  bVar8 = 0;
  FUN_00441ff0();
  iVar5 = FUN_00491aa0(0x01C6E360,param_1 + 0xd07c);
  if (iVar5 != 0) {
    *(uint *)(param_1 + 0x2538) = 0;
    *(uint *)(param_1 + 0xcdd0) = 1;
    *(uint *)(param_1 + 0xd694) = 0;
    if (*(int *)(param_1 + 0xd0e4) == 0) {
      FUN_00419550(param_1);
    }
    FUN_004fc420(param_1 + 0x158,5,0);
  }
  iVar5 = (**(code **)(*(int *)(param_1 + 0x154) + 0x148))(param_1,param_2);
  if (iVar5 == 0) {
    FUN_00556be0(*(uint *)(param_1 + 0xd078));
    return;
  }
  if ((*(int *)(param_1 + 0xd0e4) == 1) && (0.0 < *(float *)(param_1 + 0x2538))) {
    fVar2 = *(float *)(param_1 + 0xd694) + param_2;
    *(float *)(param_1 + 0xd694) = fVar2;
    if (fVar2 <= *(float *)(param_1 + 0xd0e0)) {
      return;
    }
    FUN_00419790(param_1);
  }
  if (*(int *)(param_1 + 0xd0e4) == 2) {
    fVar2 = param_2 / _DAT_005dc144 + *(float *)(param_1 + 0xd694);
    *(float *)(param_1 + 0xd694) = fVar2;
    if (fVar2 < 1.0) {
      iStack_1c = 0;
      if (*(int *)(param_1 + 0xd0e8) < 1) {
        return;
      }
      iStack_30 = param_1 + 0xd0f0;
      pfStack_24 = (float *)(param_1 + 0xd694);
      iStack_28 = param_1 + 0xd108;
      iStack_20 = param_1 + 0xd118;
      pfStack_18 = (float *)(param_1 + 0xd128);
      do {
        pfVar4 = pfStack_18;
        pfVar6 = (float *)(iStack_1c * 0x48 + iStack_30);
        fStack_54 = pfVar6[0x11];
        fStack_170 = *pfVar6 - *pfStack_18;
        fStack_16c = pfVar6[1] - pfStack_18[1];
        fStack_168 = pfVar6[2] - pfStack_18[2];
        fStack_158 = *pfVar6 - *pfStack_18;
        afStack_1c8[(uint)bVar8 * -2 + 0x1d] = afStack_1c8[(uint)bVar8 * -2 + 0x17];
        afStack_1c8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1e] =
             afStack_1c8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x18];
        fStack_98 = fStack_158 * *pfStack_24;
        fStack_94 = fStack_154 * *pfStack_24;
        fStack_90 = fStack_150 * *pfStack_24;
        fStack_8c = fStack_158 * *pfStack_24;
        afStack_100[(uint)bVar8 * -2 + 0x1e] = afStack_100[(uint)bVar8 * -2 + 0x1b];
        afStack_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1f] =
             afStack_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1c];
        fStack_a4 = *pfVar4 + fStack_8c;
        fStack_a0 = pfVar4[1] + fStack_88;
        fStack_9c = pfVar4[2] + fStack_84;
        fStack_194 = *pfVar4 + fStack_8c;
        afStack_1c8[(uint)bVar8 * -2 + 0xe] = afStack_100[(uint)bVar8 * -2 + 0x18];
        afStack_1c8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xf] =
             afStack_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x19];
        FUN_00585b20(iStack_28,iStack_20,*(uint *)(param_1 + 0xd694));
        uStack_1cc = afStack_1c8[3];
        afStack_1c8[(uint)bVar8 * -2] = afStack_1c8[(uint)bVar8 * -2 + 4];
        afStack_1c8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             afStack_1c8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 5];
        (afStack_1c8 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
             (afStack_1c8 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 5)[(uint)bVar8 * -2 + 1];
        FUN_00585de0(&uStack_1cc);
        afStack_100[2] = fStack_1ac;
        afStack_100[(uint)bVar8 * -2 + 3] = afStack_1c8[(uint)bVar8 * -2 + 8];
        afStack_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
             afStack_1c8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 9];
        afStack_100[2] = *(float *)(param_1 + 0xd694) * (float)_DAT_005b6f72 + afStack_100[2];
        *(float *)((int)fStack_54 + 0x20) = fStack_194;
        *(uint *)((int)fStack_54 + 0x24) = uStack_190;
        *(uint *)((int)fStack_54 + 0x28) = uStack_18c;
        if ((float *)((int)fStack_54 + 0x30) != afStack_100 + 2) {
          *(float *)((int)fStack_54 + 0x30) = afStack_100[2];
          *(float *)((int)fStack_54 + 0x34) = afStack_100[3];
          *(uint *)((int)fStack_54 + 0x38) = uStack_f0;
        }
        if ((float *)((int)fStack_54 + 0xcd0) != afStack_1c8 + 0xd) {
          *(float *)((int)fStack_54 + 0xcd0) = fStack_194;
          *(uint *)((int)fStack_54 + 0xcd4) = uStack_190;
          *(uint *)((int)fStack_54 + 0xcd8) = uStack_18c;
        }
        if ((float *)((int)fStack_54 + 0xcdc) != afStack_100 + 2) {
          *(float *)((int)fStack_54 + 0xcdc) = afStack_100[2];
          *(float *)((int)fStack_54 + 0xce0) = afStack_100[3];
          *(uint *)((int)fStack_54 + 0xce4) = uStack_f0;
        }
        iStack_1c = iStack_1c + 1;
        iStack_28 = iStack_28 + 0x48;
        iStack_20 = iStack_20 + 0x48;
        pfStack_18 = pfStack_18 + 0x12;
      } while (iStack_1c < *(int *)(param_1 + 0xd0e8));
      return;
    }
    iVar7 = 0;
    FUN_0054e670(param_1 + 0x158);
    iVar5 = param_1;
    if (0 < *(int *)(param_1 + 0xd0e8)) {
      do {
        FUN_004f6f10(0x01D81080,*(uint *)(iVar5 + 0xd134),1);
        *(uint *)(iVar5 + 0xd134) = 0;
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 0x48;
      } while (iVar7 < *(int *)(param_1 + 0xd0e8));
    }
    *(uint *)(param_1 + 0xd0e4) = 0;
    fVar2 = *(float *)(param_1 + 0xd0e0) * (float)_DAT_005b6f42;
    *(uint *)(param_1 + 0x2538) = *(uint *)(param_1 + 0xd058);
    *(float *)(param_1 + 0xd0e0) = fVar2;
    if (fVar2 <= (float)_DAT_005b6f4a) {
      *(uint *)(param_1 + 0xd0e0) = 0x40200000;
    }
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_60 = param_2 * *(float *)(param_1 + 0xcdcc);
  iStack_2c = param_1 + 0x158;
  while (0.0 < fStack_60) {
    iVar5 = FUN_004fbb70(param_1 + 0x158,afStack_100 + 0x28);
    if (iVar5 == 100) {
      iVar5 = *(int *)(param_1 + 0xd064);
      if (iVar5 != 0) {
        *(uint *)(param_1 + 0xd064) = 0;
        FUN_004319d0(param_1,1,iVar5,0x3e4ccccd,0);
      }
    }
    else {
      FUN_00433fb0(param_1,iVar5);
    }
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00434850(param_1,param_2 * *(float *)(param_1 + 0xcdcc));
  iVar5 = FUN_004fc070(iStack_2c);
  iVar5 = *(int *)(iVar5 + 0x24);
  FUN_00441ff0(PTR_DAT_005f1690,"State: %d\n",iVar5);
  iStack_38 = iVar5;
  iVar7 = FUN_00431660(param_1,param_2);
  if (iVar7 == 0) {
    switch(iVar5) {
    case 0:
      iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_140 = *(float *)(param_1 + 0x20) - *(float *)(iVar5 + 0x20);
      fStack_13c = *(float *)(param_1 + 0x24) - *(float *)(iVar5 + 0x24);
      fStack_138 = *(float *)(param_1 + 0x28) - *(float *)(iVar5 + 0x28);
      fStack_164 = fStack_140;
      afStack_1c8[(uint)bVar8 * -2 + 0x1a] = afStack_1c8[(uint)bVar8 * -2 + 0x23];
      afStack_1c8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1b] =
           afStack_1c8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x24];
      if (0.0 < *(float *)(param_1 + 0xcde0)) {
        fStack_5c = fStack_15c * fStack_15c + fStack_164 * fStack_164 + fStack_160 * fStack_160;
        fStack_3c = (float)(((int)fStack_5c >> 1) + _DAT_01d1a0a4);
        if (fStack_3c <= 0x40400000 + (float)_DAT_005b6f62) break;
      }
      fStack_58 = fStack_15c * fStack_15c + fStack_164 * fStack_164 + fStack_160 * fStack_160;
      fStack_44 = (float)(((int)fStack_58 >> 1) + _DAT_01d1a0a4);
      iVar5 = param_1 + 0x158;
      if (0x40400000 + (float)_DAT_005b6f62 < fStack_44) {
        iVar7 = FUN_00489ff0(param_1,param_2);
        if (iVar7 == 0) {
          (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
          if (*(int *)(param_1 + 0xcde4) != 0) {
            *(uint *)(param_1 + 0xd690) = 0;
            FUN_004fc0d0(iVar5,1,1);
          }
        }
        else {
          *(uint *)(param_1 + 0xd690) = 0;
          FUN_004fc0d0(iVar5,1,1);
        }
      }
      else {
        *(uint *)(param_1 + 0xd690) = 1;
        FUN_004fc0d0(iVar5,6,1);
      }
      break;
    case 1:
      iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_c8 = *(float *)(param_1 + 0x20) - *(float *)(iVar5 + 0x20);
      fStack_c4 = *(float *)(param_1 + 0x24) - *(float *)(iVar5 + 0x24);
      fStack_c0 = *(float *)(param_1 + 0x28) - *(float *)(iVar5 + 0x28);
      fStack_104 = fStack_c8;
      afStack_100[(uint)bVar8 * -2] = afStack_100[(uint)bVar8 * -2 + 0xf];
      afStack_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           afStack_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10];
      fStack_40 = afStack_100[1] * afStack_100[1] +
                  fStack_104 * fStack_104 + afStack_100[0] * afStack_100[0];
      fStack_50 = (float)(((int)fStack_40 >> 1) + _DAT_01d1a0a4);
      if (((fStack_50 <= 0x40400000 + (float)_DAT_005b6f62) &&
          (0.0 < *(float *)(param_1 + 0xcde0))) && (*(int *)(param_1 + 0xd690) == 0)) {
        FUN_004fc0d0(iStack_2c,0,1);
      }
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      if (*(int *)(param_1 + 0xcde4) == 0) {
        iVar5 = FUN_00489ff0(param_1,param_2);
        if (iVar5 == 0) {
          FUN_004fc0d0(param_1 + 0x158,0,1);
        }
      }
      else {
        iVar5 = FUN_00418930(param_1,param_2);
        if (iVar5 == 0) {
          fStack_108 = 0x40400000 + (float)_DAT_005b6f6a;
          uStack_110 = 0;
          uStack_10c = 0;
          fStack_34 = fStack_108;
          (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xc4))();
          iVar5 = FUN_0042b9e0();
          if (iVar5 < 0) {
            FUN_00441ff0(PTR_DAT_005f1690,"%s gave up chase - I'm confused\n",param_1);
            FUN_004fc0d0(param_1 + 0x158,0,1);
          }
          else {
            fVar2 = *(float *)(param_1 + 0x20) - *(float *)(*(int *)(param_1 + 0xcde4) + 0x20);
            fVar3 = *(float *)(param_1 + 0x28) - *(float *)(*(int *)(param_1 + 0xcde4) + 0x28);
            if ((SQRT(fVar3 * fVar3 + fVar2 * fVar2) <= fStack_34 + (float)_DAT_005b6f42) &&
               (*(float *)(param_1 + 0xcde0) <= 0.0)) {
              FUN_004fc0d0(param_1 + 0x158,6,1);
              *(uint *)(param_1 + 0xd690) = 1;
              FUN_00556be0(*(uint *)(param_1 + 0xd078));
              (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"boneguy-swing?.wav");
            }
          }
        }
      }
      break;
    case 2:
      FUN_0042abb0(auStack_244);
      fStack_240 = *(float *)(param_1 + 0xce5c) * _DAT_005b6f5a;
      iStack_210 = param_1;
      iStack_20c = param_1;
      FUN_00583260();
      uStack_17c = uStack_14c;
      afStack_1c8[(uint)bVar8 * -2 + 0x14] = afStack_1c8[(uint)bVar8 * -2 + 0x20];
      afStack_1c8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x15] =
           afStack_1c8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x21];
      FUN_00408b80();
      uStack_11c = uStack_134;
      afStack_1c8[(uint)bVar8 * -2 + 0x2c] = afStack_1c8[(uint)bVar8 * -2 + 0x26];
      afStack_1c8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x2d] =
           afStack_1c8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x27];
      FUN_004893f0();
      break;
    case 5:
      if ((*(int *)(param_1 + 0xcdd0) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        *(uint *)(param_1 + 0xcdd0) = 1;
      }
      break;
    case 6:
      iVar5 = *(int *)(param_1 + 0x2628);
      if (iVar5 == 0) {
        fStack_14 = (float)FUN_004fc930(iStack_2c);
        if (((float)_DAT_005b6f52 < fStack_14) && (*(float *)(param_1 + 0xcde0) <= 0.0)) {
          FUN_0042abb0(auStack_208);
          uStack_204 = *(uint *)(param_1 + 0xce5c);
          iStack_1d4 = param_1;
          iStack_1d0 = param_1;
          FUN_00583260();
          uStack_bc = uStack_128;
          afStack_100[(uint)bVar8 * -2 + 0x12] = afStack_1c8[(uint)bVar8 * -2 + 0x29];
          afStack_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13] =
               afStack_1c8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x2a];
          FUN_00408b80();
          uStack_1a0 = uStack_80;
          afStack_1c8[(uint)bVar8 * -2 + 0xb] = afStack_100[(uint)bVar8 * -2 + 0x21];
          afStack_1c8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xc] =
               afStack_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x22];
          FUN_004893f0();
          *(uint *)(param_1 + 0xcde0) = 0x40200000;
        }
      }
      else {
        (**(code **)(*(int *)(iVar5 + 0x154) + 0x78))(iVar5,2);
        *(uint *)(param_1 + 0xcde0) = 0x40200000;
      }
    }
    goto switchD_00418691_caseD_3;
  }
  uVar1 = *(uint *)(param_1 + 0x273c);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_00417e96:
      uVar9 = 1;
    }
    else {
LAB_004180ff:
      uVar9 = 0;
    }
    FUN_004fc0d0(param_1 + 0x158,uVar9,1);
  }
  else {
    if (uVar1 < 3) goto LAB_00417e96;
    if (uVar1 != 3) goto LAB_004180ff;
    FUN_004fc0d0(iStack_2c,0,1);
    FUN_00441ff0(PTR_DAT_005f1690,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
switchD_00418691_caseD_3:
  if (0.0 < *(float *)(param_1 + 0xcde0)) {
    *(float *)(param_1 + 0xcde0) = *(float *)(param_1 + 0xcde0) - param_2;
  }
  iVar5 = FUN_0042ccf0(param_1);
  if (iVar5 != 0) {
    iVar5 = *(int *)(param_1 + 0xcde4);
    if ((iVar5 != 0) &&
       (iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0xf4))(iVar5), iVar5 == param_1)) {
      FUN_0053ec10(0x01ED78C8,*(uint *)(param_1 + 0xcde4));
    }
    FUN_0042c1e0(param_1,param_2);
    fStack_e0 = *(float *)(param_1 + 0x2518) * param_2;
    fStack_dc = *(float *)(param_1 + 0x251c) * param_2;
    fStack_d8 = *(float *)(param_1 + 0x2520) * param_2;
    fStack_ec = fStack_e0;
    afStack_100[(uint)bVar8 * -2 + 6] = afStack_100[(uint)bVar8 * -2 + 9];
    afStack_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
         afStack_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
    fStack_b0 = fStack_ec + *(float *)(param_1 + 0x250c);
    fStack_ac = fStack_e8 + *(float *)(param_1 + 0x2510);
    fStack_a8 = fStack_e4 + *(float *)(param_1 + 0x2514);
    fStack_74 = fStack_b0;
    afStack_100[(uint)bVar8 * -2 + 0x24] = afStack_100[(uint)bVar8 * -2 + 0x15];
    afStack_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x25] =
         afStack_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16];
    fStack_d4 = fStack_74 + *(float *)(param_1 + 0x249c);
    fStack_d0 = fStack_70 + *(float *)(param_1 + 0x24a0);
    fStack_cc = fStack_6c + *(float *)(param_1 + 0x24a4);
    afStack_188[0] = fStack_d4;
    afStack_1c8[(uint)bVar8 * -2 + 0x11] = afStack_100[(uint)bVar8 * -2 + 0xc];
    afStack_1c8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x12] =
         afStack_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(float *)(param_1 + 0x24a0) = *(float *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a4);
    FUN_0042c230(param_1,afStack_1c8 + 0x10);
  }
  FUN_0042cd30(param_1);
  FUN_0054c130(param_1 + 0x158);
  FUN_00433350(param_1,param_2);
  if ((iStack_38 == 1) &&
     (iVar5 = FUN_00557170((double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
                           (double)*(float *)(param_1 + 0x28),0x42c80000), iVar5 != 0)) {
    iVar5 = FUN_00556700(*(uint *)(param_1 + 0xd078));
    if (iVar5 != 0) {
      return;
    }
    FUN_00555fd0();
    fStack_14 = (float)FUN_0040ce40(0,0x3f800000,2);
    FUN_00555f60((double)fStack_14);
    uVar9 = (**(code **)(*(int *)(param_1 + 0x154) + 0x30))(param_1,"boneGuy-walkloop.wav")
    ;
    *(uint *)(param_1 + 0xd078) = uVar9;
    FUN_00556050();
    return;
  }
  FUN_00556be0(*(uint *)(param_1 + 0xd078));
  return;
}
