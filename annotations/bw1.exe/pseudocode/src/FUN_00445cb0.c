// Name: FUN_00445cb0
// Address: 00445cb0
// Address Range: [[00445cb0, 00446e1b]]
// Convention: unknown
// Signature: void FUN_00445cb0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00445cb0(int param_1,float param_2)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  float afStackY_1a80 [1503];
  uint uVar9;
  byte auStack_2e0 [4];
  float fStack_2dc;
  int iStack_2ac;
  int iStack_2a8;
  uint uStack_2a4;
  float afStack_2a0 [7];
  uint uStack_284;
  float afStack_278 [4];
  float afStack_268 [5];
  uint uStack_254;
  float fStack_248;
  uint uStack_23c;
  uint uStack_230;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_20c;
  uint uStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  uint uStack_1e8;
  uint uStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float afStack_1d8 [4];
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  uint uStack_19c;
  uint uStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  uint uStack_110;
  float afStack_104 [3];
  uint uStack_f8;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  uint uStack_d4;
  uint uStack_c8;
  uint uStack_bc;
  uint uStack_b0;
  float afStack_a4 [4];
  float afStack_94 [4];
  float fStack_84;
  float fStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  float afStack_70 [4];
  float fStack_60;
  float fStack_54;
  float fStack_50;
  uint uStack_4c;
  int iStack_48;
  float fStack_44;
  uint uStack_40;
  uint uStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  float *pfStack_24;
  int iStack_20;
  float *pfStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar8 = 0;
  iVar3 = FUN_00524770(param_1 + 0x158);
  iStack_34 = *(int *)(iVar3 + 0x24);
  iVar3 = FUN_004a6c30();
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0x2538) = 0;
    *(uint *)(param_1 + 0xc1d4) = 1;
    *(uint *)(param_1 + 0xca5c) = 0;
    if (*(int *)(param_1 + 0xca58) == 0) {
      FUN_004472a0(param_1);
      FUN_004a1b70();
    }
    FUN_00524b10(param_1 + 0x158,0xb,0);
  }
  uStack_40 = 0x3e800000;
  uStack_4c = 0x3f800000;
  uStack_3c = 0x3f800000;
  if (*(int *)(param_1 + 0xc1d4) == 0) {
    if (*(int *)(param_1 + 0xca58) == 0) {
      if (iStack_34 != 0xc) {
        iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc308));
        if (iVar3 == 0) {
          uVar7 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
          *(uint *)(param_1 + 0xc308) = uVar7;
          uStack_3c = 0x3f800000;
          uStack_40 = 0x3ecccccd;
        }
        fStack_14 = (float)(param_1 + 0x158);
        FUN_00569130();
        uStack_230 = uStack_c8;
        afStack_268[(uint)bVar8 * -2 + 0xf] = afStack_1d8[(uint)bVar8 * -2 + 0x45];
        afStack_268[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
             afStack_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x46];
        FUN_00408b40();
        fStack_14c = fStack_11c;
        afStack_1d8[(uint)bVar8 * -2 + 0x24] = afStack_1d8[(uint)bVar8 * -2 + 0x30];
        afStack_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x25] =
             afStack_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x31];
        FUN_00569130();
        uStack_110 = uStack_b0;
        afStack_1d8[(uint)bVar8 * -2 + 0x33] = afStack_1d8[(uint)bVar8 * -2 + 0x4b];
        afStack_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x34] =
             afStack_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x4c];
        FUN_00408b40();
        fVar1 = fStack_14c;
        fStack_140 = fStack_218;
        afStack_1d8[(uint)bVar8 * -2 + 0x27] = afStack_268[(uint)bVar8 * -2 + 0x15];
        afStack_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x28] =
             afStack_268[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16];
        fStack_200 = fVar1 + fStack_140;
        fStack_1fc = fStack_148 + fStack_13c;
        fStack_1f8 = fStack_144 + fStack_138;
        fStack_194 = fVar1 + fStack_140;
        afStack_1d8[(uint)bVar8 * -2 + 0x12] = afStack_268[(uint)bVar8 * -2 + 0x1b];
        afStack_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13] =
             afStack_268[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1c];
        fStack_1b8 = fStack_194 * _DAT_005d6f71;
        fStack_1b4 = fStack_190 * _DAT_005d6f71;
        fStack_1b0 = fStack_18c * _DAT_005d6f71;
        fStack_248 = fStack_194 * _DAT_005d6f71;
        afStack_268[(uint)bVar8 * -2 + 9] = afStack_1d8[(uint)bVar8 * -2 + 9];
        afStack_268[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
             afStack_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
LAB_00445e87:
        FUN_004b70f0();
      }
    }
    else if (*(int *)(param_1 + 0xca58) == 1) {
      iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc308));
      if (iVar3 == 0) {
        uVar7 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
        *(uint *)(param_1 + 0xc308) = uVar7;
        uStack_40 = 0x3ecccccd;
      }
      iVar3 = *(int *)(param_1 + 0xc3dc + *(int *)(param_1 + 0xca60) * 0x48);
      if (iVar3 != 0) {
        if (afStack_94 + 5 != (float *)(iVar3 + 0x20)) {
          fStack_80 = *(float *)(iVar3 + 0x20);
          uStack_7c = *(uint *)(iVar3 + 0x24);
          uStack_78 = *(uint *)(iVar3 + 0x28);
        }
        goto LAB_00445e87;
      }
    }
  }
  iVar3 = FUN_0042e1a0();
  if (iVar3 == 0) {
    FUN_00573a80(*(uint *)(param_1 + 0xc304));
    return;
  }
  if ((*(int *)(param_1 + 0xca58) == 1) && (0.0 < *(float *)(param_1 + 0x2538))) {
    fVar1 = *(float *)(param_1 + 0xca5c) + param_2;
    *(float *)(param_1 + 0xca5c) = fVar1;
    if (fVar1 <= *(float *)(param_1 + 0xc38c)) {
      iStack_38 = *(int *)(param_1 + 0xc3dc + *(int *)(param_1 + 0xca60) * 0x48);
      if (iStack_38 == 0) {
        return;
      }
      iVar3 = (**(code **)(*(int *)(iStack_38 + 0x154) + 0x94))(iStack_38);
      if (iVar3 != *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4)) {
        return;
      }
      FUN_004a1b70();
      FUN_004a1b70();
      iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc318));
      if (iVar3 == 0) {
        uVar7 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
        *(uint *)(param_1 + 0xc318) = uVar7;
      }
      iVar4 = iStack_38 + 0x20;
      iVar3 = 0;
      afStack_278[0] = 0.0;
      afStack_278[1] = 1.0;
      afStack_278[2] = 0.0;
      FUN_004b5b30(0x01C57074,iVar4,0x3f000000,afStack_2a0 + 10,0xffff);
      do {
        afStack_a4[0] = 0.0;
        afStack_a4[2] = 0.0;
        iVar3 = iVar3 + 1;
        afStack_a4[1] = 1.0;
        FUN_004b5fa0(0x01C57074,iVar4,afStack_1d8 + 0x4d,4000,0xffdc,1,35000,0x3f800000,0x3e4ccccd
                    );
      } while (iVar3 < 10);
      FUN_004328c0(*(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4));
      *(uint *)(iStack_38 + 0x70) = 2;
      *(uint *)(param_1 + 0xca58) = 3;
      return;
    }
    FUN_00447560(param_1);
  }
  if (*(int *)(param_1 + 0xca58) == 2) {
    iVar3 = *(int *)(param_1 + 0xc3dc + *(int *)(param_1 + 0xca60) * 0x48);
    if (iVar3 != 0) {
      iVar4 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x94))(iVar3);
      iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      if (iVar4 == iVar3) {
        FUN_004328c0(iVar3);
      }
    }
    fVar1 = param_2 / _DAT_005fddc8 + *(float *)(param_1 + 0xca5c);
    *(float *)(param_1 + 0xca5c) = fVar1;
    if (fVar1 < 1.0) {
      iStack_20 = 0;
      if (*(int *)(param_1 + 0xc394) < 1) {
        return;
      }
      iStack_30 = param_1 + 0xc398;
      pfStack_24 = (float *)(param_1 + 0xca5c);
      iStack_2c = param_1 + 0xc3b0;
      iStack_28 = param_1 + 0xc3c0;
      pfStack_1c = (float *)(param_1 + 0xc3d0);
      do {
        pfVar2 = pfStack_1c;
        pfVar5 = (float *)(iStack_20 * 0x48 + iStack_30);
        fStack_44 = pfVar5[0x11];
        fStack_188 = *pfVar5 - *pfStack_1c;
        fStack_184 = pfVar5[1] - pfStack_1c[1];
        fStack_180 = pfVar5[2] - pfStack_1c[2];
        fStack_17c = *pfVar5 - *pfStack_1c;
        afStack_1d8[(uint)bVar8 * -2 + 0x18] = afStack_1d8[(uint)bVar8 * -2 + 0x15];
        afStack_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x19] =
             afStack_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16];
        afStack_a4[3] = fStack_17c * *pfStack_24;
        afStack_94[0] = fStack_178 * *pfStack_24;
        afStack_94[1] = fStack_174 * *pfStack_24;
        fStack_224 = fStack_17c * *pfStack_24;
        afStack_268[(uint)bVar8 * -2 + 0x12] = afStack_94[(uint)bVar8 * -2];
        afStack_268[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13] =
             afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        fStack_e0 = *pfVar2 + fStack_224;
        fStack_dc = pfVar2[1] + fStack_220;
        fStack_d8 = pfVar2[2] + fStack_21c;
        fStack_1a0 = *pfVar2 + fStack_224;
        afStack_1d8[(uint)bVar8 * -2 + 0xf] = afStack_1d8[(uint)bVar8 * -2 + 0x3f];
        afStack_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
             afStack_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x40];
        FUN_005b7940(iStack_2c,iStack_28,*(uint *)(param_1 + 0xca5c));
        afStack_2a0[3] = (float)uStack_2a4;
        afStack_2a0[(uint)bVar8 * -2 + 4] = afStack_2a0[(uint)bVar8 * -2];
        afStack_2a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 5] =
             afStack_2a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        (afStack_2a0 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 5)[(uint)bVar8 * -2 + 1] =
             (afStack_2a0 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
        FUN_005b7c00(afStack_2a0 + 3);
        fStack_170 = fStack_134;
        afStack_1d8[(uint)bVar8 * -2 + 0x1b] = afStack_1d8[(uint)bVar8 * -2 + 0x2a];
        afStack_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1c] =
             afStack_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x2b];
        fStack_170 = *(float *)(param_1 + 0xca5c) * (float)_DAT_005d6f95 + fStack_170;
        *(float *)((int)fStack_44 + 0x20) = fStack_1a0;
        *(uint *)((int)fStack_44 + 0x24) = uStack_19c;
        *(uint *)((int)fStack_44 + 0x28) = uStack_198;
        if ((float *)((int)fStack_44 + 0x30) != afStack_1d8 + 0x1a) {
          *(float *)((int)fStack_44 + 0x30) = fStack_170;
          *(uint *)((int)fStack_44 + 0x34) = uStack_16c;
          *(uint *)((int)fStack_44 + 0x38) = uStack_168;
        }
        if ((float *)((int)fStack_44 + 0xcd0) != afStack_1d8 + 0xe) {
          *(float *)((int)fStack_44 + 0xcd0) = fStack_1a0;
          *(uint *)((int)fStack_44 + 0xcd4) = uStack_19c;
          *(uint *)((int)fStack_44 + 0xcd8) = uStack_198;
        }
        if ((float *)((int)fStack_44 + 0xcdc) != afStack_1d8 + 0x1a) {
          *(float *)((int)fStack_44 + 0xcdc) = fStack_170;
          *(uint *)((int)fStack_44 + 0xce0) = uStack_16c;
          *(uint *)((int)fStack_44 + 0xce4) = uStack_168;
        }
        iStack_20 = iStack_20 + 1;
        iStack_2c = iStack_2c + 0x48;
        iStack_28 = iStack_28 + 0x48;
        pfStack_1c = pfStack_1c + 0x12;
      } while (iStack_20 < *(int *)(param_1 + 0xc394));
      return;
    }
    iVar4 = 0;
    FUN_00569ae0(param_1 + 0x158);
    iVar3 = param_1;
    if (0 < *(int *)(param_1 + 0xc394)) {
      do {
        FUN_0051b740(0x01D2C900,*(uint *)(iVar3 + 0xc3dc),1);
        *(uint *)(iVar3 + 0xc3dc) = 0;
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x48;
      } while (iVar4 < *(int *)(param_1 + 0xc394));
    }
    *(uint *)(param_1 + 0xca58) = 0;
    *(float *)(param_1 + 0x2538) = (float)*(int *)(param_1 + 0xc390);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_54 = param_2 * *(float *)(param_1 + 0xc1d0) * *(float *)(param_1 + 0xca68);
  while (0.0 < fStack_54) {
    uVar6 = FUN_00524270();
    if (uVar6 == 0) {
LAB_004464ed:
      FUN_00434a80();
    }
    else {
      if (uVar6 < 2) {
        iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc30c));
        if (iVar3 == 0) {
          uVar7 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
          *(uint *)(param_1 + 0xc30c) = uVar7;
        }
LAB_0044650c:
        iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc310));
        if (iVar3 == 0) {
          uVar7 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
          *(uint *)(param_1 + 0xc310) = uVar7;
        }
        goto LAB_004464ed;
      }
      if (uVar6 == 7) goto LAB_0044650c;
      FUN_00434a80();
    }
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00435320();
  iVar3 = FUN_00432240();
  if (iVar3 == 0) {
    switch(iStack_34) {
    case 0:
    case 1:
    case 2:
      iVar3 = FUN_004a0fe0();
      if (iVar3 == 0) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x144))();
        if (*(int *)(param_1 + 0xc1e8) != 0) {
          FUN_005247c0(param_1 + 0x158,3,1);
        }
      }
      else {
        FUN_005247c0(param_1 + 0x158,3,1);
      }
      break;
    case 3:
    case 4:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))();
      iStack_48 = param_1 + 0x158;
      if (*(int *)(param_1 + 0xc1e8) == 0) {
        iVar3 = FUN_004a0fe0();
        if (iVar3 == 0) {
          FUN_005247c0(iStack_48,0,1);
        }
      }
      else {
        uStack_1e8 = 0;
        fStack_1e0 = 0x40400000;
        uStack_1e4 = 0;
        fStack_18 = 0x40400000 + (float)_DAT_005d6f85;
        (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xc4))();
        iVar3 = FUN_0042ccf0();
        if (iVar3 < 0) {
          FUN_00445430(PTR_DAT_00611100,"%s gave up chase - I'm confused\n",param_1);
          FUN_005247c0(iStack_48,0,1);
        }
        else {
          iVar3 = *(int *)(param_1 + 0xc1e8);
          fStack_1f4 = *(float *)(param_1 + 0x20) - *(float *)(iVar3 + 0x20);
          fStack_1f0 = *(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24);
          fStack_1ec = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
          fStack_20c = fStack_1f4;
          afStack_268[(uint)bVar8 * -2 + 0x18] = afStack_268[(uint)bVar8 * -2 + 0x1e];
          afStack_268[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x19] =
               afStack_268[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1f];
          fStack_50 = SQRT(fStack_204 * fStack_204 + fStack_20c * fStack_20c);
          uStack_208 = 0;
          if ((*(float *)(param_1 + 0xc1e4) <= 0.0) && (fStack_50 <= fStack_18)) {
            afStack_1d8[2] = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
            afStack_1d8[3] = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
            fStack_1c8 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
            afStack_104[0] = afStack_1d8[2];
            afStack_1d8[(uint)bVar8 * -2 + 0x36] = afStack_1d8[(uint)bVar8 * -2 + 3];
            afStack_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x37] =
                 afStack_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
            FUN_005a7520(afStack_1d8 + 0x35);
            afStack_268[2] = (float)uStack_d4;
            afStack_268[(uint)bVar8 * -2 + 3] = afStack_1d8[(uint)bVar8 * -2 + 0x42];
            afStack_268[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
                 afStack_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x43];
            fStack_14 = (float)FUN_0040cd60(afStack_268[3] - *(float *)(param_1 + 0x34));
            if (ABS(fStack_14) < (float)_DAT_005d6f8d) {
              iVar3 = FUN_0040cc60(0,1,1);
              FUN_005247c0(iStack_48,iVar3 + 5);
              *(uint *)(param_1 + 0xc1e4) = 0x40200000;
              iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc31c));
              if (iVar3 == 0) {
                uVar7 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
                *(uint *)(param_1 + 0xc31c) = uVar7;
              }
            }
          }
        }
      }
      break;
    case 5:
    case 6:
      FUN_0042c010(auStack_2e0);
      fStack_2dc = (float)FUN_0040cc00();
      fStack_2dc = fStack_2dc * *(float *)(param_1 + 0xca68);
      iStack_2ac = param_1;
      iStack_2a8 = param_1;
      fStack_14 = (float)(param_1 + 0xfd8);
      FUN_005b5080();
      uStack_74 = uStack_284;
      afStack_70[(uint)bVar8 * -2] = afStack_2a0[(uint)bVar8 * -2 + 8];
      afStack_70[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           afStack_2a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 9];
      FUN_00408b40();
      uStack_bc = afStack_278[3];
      afStack_1d8[(uint)bVar8 * -2 + 0x48] = afStack_268[(uint)bVar8 * -2];
      afStack_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x49] =
           afStack_268[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      FUN_004a0770();
      FUN_005b5080();
      uStack_164 = uStack_254;
      afStack_1d8[(uint)bVar8 * -2 + 0x1e] = afStack_268[(uint)bVar8 * -2 + 6];
      afStack_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1f] =
           afStack_268[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
      FUN_00408b40();
      uStack_f8 = uStack_23c;
      afStack_1d8[(uint)bVar8 * -2 + 0x39] = afStack_268[(uint)bVar8 * -2 + 0xc];
      afStack_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x3a] =
           afStack_268[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
      FUN_004a0770();
      break;
    case 0xb:
      if (*(int *)(param_1 + 0xca64) == 0) {
        uVar7 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
        *(uint *)(param_1 + 0xca64) = 1;
        *(uint *)(param_1 + 0xc318) = uVar7;
      }
      break;
    case 0xc:
      iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      fStack_158 = *(float *)(param_1 + 0x20) - *(float *)(iVar3 + 0x20);
      fStack_154 = *(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24);
      fStack_150 = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
      fStack_ec = fStack_158;
      afStack_1d8[(uint)bVar8 * -2 + 0x3c] = afStack_1d8[(uint)bVar8 * -2 + 0x21];
      afStack_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x3d] =
           afStack_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x22];
      if ((SQRT(fStack_e4 * fStack_e4 + fStack_ec * fStack_ec + fStack_e8 * fStack_e8) <
           *(float *)(param_1 + 0xc1e0) * _DAT_005d6f7d) &&
         (((**(code **)(*(int *)(param_1 + 0x154) + 0x144))(), *(int *)(param_1 + 0xc1e8) != 0 ||
          (iVar3 = FUN_004a6c30(), iVar3 != 0)))) {
        FUN_005247c0(param_1 + 0x158,0xe,1);
        iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc318));
        if ((iVar3 == 0) &&
           (((iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc31c)), iVar3 == 0 &&
             (iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc314)), iVar3 == 0)) &&
            (iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc314)), iVar3 == 0)))) {
          uVar7 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
          *(uint *)(param_1 + 0xc314) = uVar7;
        }
      }
      break;
    case 0xe:
      if (*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x2504) + (float)_DAT_005d6f75) {
        FUN_005247c0(param_1 + 0x158,0xf,1);
      }
      break;
    case 0xf:
      iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc320));
      if (iVar3 == 0) {
        uVar7 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
        *(uint *)(param_1 + 0xc320) = uVar7;
      }
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))();
    }
    goto switchD_00446df5_caseD_7;
  }
  uVar6 = *(uint *)(param_1 + 0x273c);
  if (uVar6 < 2) {
    if (uVar6 == 1) {
LAB_004465bf:
      uVar9 = 1;
      uVar7 = 3;
    }
    else {
LAB_00446804:
      uVar9 = 1;
      uVar7 = FUN_0040cc60(0,2,1);
    }
    FUN_005247c0(param_1 + 0x158,uVar7,uVar9);
  }
  else {
    if (uVar6 < 3) goto LAB_004465bf;
    if (uVar6 != 3) goto LAB_00446804;
    FUN_005247c0(param_1 + 0x158,0,1);
    FUN_00445430(PTR_DAT_00611100,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
switchD_00446df5_caseD_7:
  if (0.0 < *(float *)(param_1 + 0xc1e4)) {
    *(float *)(param_1 + 0xc1e4) = *(float *)(param_1 + 0xc1e4) - param_2;
  }
  iVar3 = FUN_0042e120(param_1);
  if ((iVar3 != 0) && (iStack_34 != 0xc)) {
    FUN_0042d700();
    afStack_94[2] = *(float *)(param_1 + 0x2518) * param_2;
    afStack_94[3] = *(float *)(param_1 + 0x251c) * param_2;
    fStack_84 = *(float *)(param_1 + 0x2520) * param_2;
    fStack_1ac = afStack_94[2];
    afStack_1d8[(uint)bVar8 * -2 + 0xc] = afStack_94[(uint)bVar8 * -2 + 3];
    afStack_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
         afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    afStack_70[2] = fStack_1ac + *(float *)(param_1 + 0x250c);
    afStack_70[3] = fStack_1a8 + *(float *)(param_1 + 0x2510);
    fStack_60 = fStack_1a4 + *(float *)(param_1 + 0x2514);
    fStack_128 = afStack_70[2];
    afStack_1d8[(uint)bVar8 * -2 + 0x2d] = afStack_70[(uint)bVar8 * -2 + 3];
    afStack_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x2e] =
         afStack_70[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    fStack_1dc = fStack_128 + *(float *)(param_1 + 0x249c);
    afStack_1d8[0] = fStack_124 + *(float *)(param_1 + 0x24a0);
    afStack_1d8[1] = fStack_120 + *(float *)(param_1 + 0x24a4);
    fStack_1c4 = fStack_1dc;
    afStack_1d8[(uint)bVar8 * -2 + 6] = afStack_1d8[(uint)bVar8 * -2];
    afStack_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
         afStack_1d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(float *)(param_1 + 0x24a0) = *(float *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a4);
    FUN_0042d750();
  }
  FUN_0042e160(param_1);
  FUN_005675a0(param_1 + 0x158);
  FUN_00433e80();
  if (((iStack_34 == 3) || (iStack_34 == 4)) &&
     (iVar3 = FUN_00574010((double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
                           (double)*(float *)(param_1 + 0x28),0x42c80000), iVar3 != 0)) {
    iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc304));
    if ((iVar3 == 0) && (iVar3 = FUN_0040cd00(0x3e99999a), iVar3 != 0)) {
      uVar7 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
      *(uint *)(param_1 + 0xc304) = uVar7;
      return;
    }
    return;
  }
  FUN_00573a80(*(uint *)(param_1 + 0xc304));
  return;
}
