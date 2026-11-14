// Name: engine_font.cpp_FUN_004ab840
// Address: 004ab840
// Address Range: [[004ab840, 004abb80]]
// Convention: unknown
// Signature: int engine_font_cpp_FUN_004ab840(int param_1,byte *param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_font_cpp_FUN_004ab840(int param_1,byte *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  short sVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  short *psVar10;
  uint uVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  float10 fVar15;
  
  if (param_5 == -2) {
    uVar11 = _DAT_01cb0248 << 0x10 | _DAT_01cb024c << 8 | _DAT_01cb0250;
  }
  else if (param_5 < 0) {
    uVar11 = 0xffffff;
  }
  else {
    param_5 = param_5 * 3;
    uVar11 = (uint)(byte)(&DAT_01c3583a)[param_5] |
             (uint)(byte)(&DAT_01c35839)[param_5] << 8 |
             (uint)(byte)(&DAT_01c35838)[param_5] << 0x10;
  }
  fVar15 = (float10)_DAT_01d09860 * (float10)_DAT_005d6a69;
  round();
  fVar12 = (float)(uVar11 | (int)ROUND(fVar15) << 0x18);
  iVar14 = param_3;
  while (uVar11 = (uint)*param_2, uVar11 != 0) {
    if (uVar11 == 0xd) {
      param_2 = param_2 + 1;
    }
    else if (uVar11 == 10) {
      param_4 = param_4 + *(int *)(param_1 + 0x41f0) + *(int *)(param_1 + 0x41f8);
      param_2 = param_2 + 1;
      iVar14 = param_3;
    }
    else if (uVar11 == 0x20) {
      iVar14 = iVar14 + *(int *)(param_1 + 0x3668) + *(int *)(param_1 + 0x41f4);
      param_2 = param_2 + 1;
    }
    else {
      if ((999 < *(int *)(param_1 + 0x1dd8) + 4) || (999 < *(int *)(param_1 + 0x1ddc) + 6)) {
        engine_font_cpp_FUN_004a97a0(param_1);
      }
      pfVar9 = (float *)(*(int *)(param_1 + 0x1dd8) * 0x20 + *(int *)(param_1 + 0x1dd0));
      fVar8 = (float)iVar14 + _DAT_005d6a6d;
      iVar1 = param_1 + uVar11 * 4;
      iVar13 = uVar11 * 0x10;
      iVar2 = *(int *)(iVar1 + 0x35e8);
      iVar3 = *(int *)(iVar1 + 0x39e8);
      fVar7 = (float)param_4 + _DAT_005d6a6d + (float)*(int *)(iVar1 + 0x3de8);
      *pfVar9 = fVar8;
      fVar6 = (float)iVar2 + fVar8 + 1.0;
      pfVar9[1] = fVar7;
      pfVar9[2] = *(float *)(param_1 + 0x4218);
      fVar4 = *(float *)(param_1 + 0x421c);
      pfVar9[5] = 0.0;
      pfVar9[4] = fVar12;
      pfVar9[3] = fVar4;
      pfVar9[6] = *(float *)(iVar13 + 0x25e8 + param_1);
      pfVar9[7] = *(float *)(iVar13 + 0x25ec + param_1);
      pfVar9[8] = fVar6;
      pfVar9[9] = fVar7;
      fVar7 = (float)iVar3 + fVar7 + 1.0;
      pfVar9[10] = *(float *)(param_1 + 0x4218);
      fVar4 = *(float *)(param_1 + 0x421c);
      pfVar9[0xd] = 0.0;
      pfVar9[0xc] = fVar12;
      pfVar9[0xb] = fVar4;
      pfVar9[0xe] = *(float *)(iVar13 + 0x25f0 + param_1);
      pfVar9[0xf] = *(float *)(iVar13 + 0x25ec + param_1);
      pfVar9[0x10] = fVar6;
      pfVar9[0x11] = fVar7;
      pfVar9[0x12] = *(float *)(param_1 + 0x4218);
      pfVar9[0x13] = *(float *)(param_1 + 0x421c);
      pfVar9[0x14] = fVar12;
      pfVar9[0x15] = 0.0;
      pfVar9[0x16] = *(float *)(param_1 + 0x25f0 + uVar11 * 0x10);
      fVar4 = *(float *)(param_1 + 0x25f4 + uVar11 * 0x10);
      pfVar9[0x18] = fVar8;
      pfVar9[0x19] = fVar7;
      pfVar9[0x17] = fVar4;
      pfVar9[0x1a] = *(float *)(param_1 + 0x4218);
      fVar4 = *(float *)(param_1 + 0x421c);
      pfVar9[0x1d] = 0.0;
      pfVar9[0x1c] = fVar12;
      pfVar9[0x1b] = fVar4;
      pfVar9[0x1e] = *(float *)(param_1 + 0x25e8 + uVar11 * 0x10);
      pfVar9[0x1f] = *(float *)(param_1 + 0x25f4 + uVar11 * 0x10);
      psVar10 = (short *)(*(int *)(param_1 + 0x1ddc) * 2 + *(int *)(param_1 + 0x1dd4));
      sVar5 = *(short *)(param_1 + 0x1dd8);
      *psVar10 = sVar5;
      psVar10[1] = sVar5 + 1;
      psVar10[2] = *(short *)(param_1 + 0x1dd8) + 2;
      sVar5 = *(short *)(param_1 + 0x1dd8);
      psVar10[3] = sVar5;
      psVar10[4] = sVar5 + 2;
      psVar10[5] = *(short *)(param_1 + 0x1dd8) + 3;
      *(int *)(param_1 + 0x1dd8) = *(int *)(param_1 + 0x1dd8) + 4;
      *(int *)(param_1 + 0x1ddc) = *(int *)(param_1 + 0x1ddc) + 6;
      iVar14 = iVar14 + *(int *)(param_1 + 0x35e8 + ((int)(uVar11 * 4) >> 2) * 4) +
                        *(int *)(param_1 + 0x41f4);
      param_2 = param_2 + 1;
    }
  }
  return iVar14 - param_3;
}
