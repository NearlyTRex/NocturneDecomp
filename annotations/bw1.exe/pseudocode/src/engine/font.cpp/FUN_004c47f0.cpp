// Name: engine_font.cpp_FUN_004c47f0
// Address: 004c47f0
// Address Range: [[004c47f0, 004c4b30]]
// Convention: unknown
// Signature: int engine_font_cpp_FUN_004c47f0(byte *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_font_cpp_FUN_004c47f0(byte *param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  short sVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  byte *pbVar9;
  int iVar10;
  float *pfVar11;
  short *psVar12;
  uint uVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  double dVar17;
  float fVar18;
  
  iVar10 = param_3;
  pbVar9 = param_1;
  if (param_5 == -2) {
    uVar13 = _DAT_01cc8cd8 << 0x10 | _DAT_01cc8cdc << 8 | _DAT_01cc8ce0;
  }
  else if (param_5 < 0) {
    uVar13 = 0xffffff;
  }
  else {
    param_5 = param_5 * 3;
    uVar13 = (uint)(byte)(&DAT_01c4e9fa)[param_5] |
             (uint)(byte)(&DAT_01c4e9f9)[param_5] << 8 |
             (uint)(byte)(&DAT_01c4e9f8)[param_5] << 0x10;
  }
  fVar18 = 7.0054e-39;
  dVar17 = round((double)(_DAT_01d224c0 * _DAT_005e0ae2));
  fVar14 = (float)(uVar13 | (int)ROUND(dVar17) << 0x18);
  iVar16 = iVar10;
  while (uVar13 = (uint)*param_1, uVar13 != 0) {
    if (uVar13 == 0xd) {
      param_1 = param_1 + 1;
    }
    else if (uVar13 == 10) {
      param_3 = param_3 + *(int *)(pbVar9 + 0x41f0) + *(int *)(pbVar9 + 0x41f8);
      param_1 = param_1 + 1;
      iVar16 = iVar10;
    }
    else if (uVar13 == 0x20) {
      iVar16 = iVar16 + *(int *)(pbVar9 + 0x3668) + *(int *)(pbVar9 + 0x41f4);
      param_1 = param_1 + 1;
    }
    else {
      if ((999 < *(int *)(pbVar9 + 0x1dd8) + 4) || (999 < *(int *)(pbVar9 + 0x1ddc) + 6)) {
        engine_font_cpp_FUN_004c2750(pbVar9,fVar18);
      }
      pfVar11 = (float *)(*(int *)(pbVar9 + 0x1dd8) * 0x20 + *(int *)(pbVar9 + 0x1dd0));
      iVar1 = uVar13 * 4;
      fVar8 = (float)iVar16 + _DAT_005e0ae6;
      iVar15 = uVar13 * 0x10;
      iVar2 = *(int *)(pbVar9 + iVar1 + 0x35e8);
      iVar3 = *(int *)(pbVar9 + iVar1 + 0x39e8);
      fVar18 = (float)param_3 + _DAT_005e0ae6 + (float)*(int *)(pbVar9 + iVar1 + 0x3de8);
      *pfVar11 = fVar8;
      fVar6 = (float)iVar2 + fVar8 + 1.0;
      pfVar11[1] = fVar18;
      pfVar11[2] = *(float *)(pbVar9 + 0x4218);
      fVar4 = *(float *)(pbVar9 + 0x421c);
      pfVar11[5] = 0.0;
      pfVar11[4] = fVar14;
      pfVar11[3] = fVar4;
      pfVar11[6] = *(float *)(pbVar9 + iVar15 + 0x25e8);
      pfVar11[7] = *(float *)(pbVar9 + iVar15 + 0x25ec);
      pfVar11[8] = fVar6;
      pfVar11[9] = fVar18;
      fVar7 = (float)iVar3 + fVar18 + 1.0;
      pfVar11[10] = *(float *)(pbVar9 + 0x4218);
      fVar4 = *(float *)(pbVar9 + 0x421c);
      pfVar11[0xd] = 0.0;
      pfVar11[0xc] = fVar14;
      pfVar11[0xb] = fVar4;
      pfVar11[0xe] = *(float *)(pbVar9 + iVar15 + 0x25f0);
      pfVar11[0xf] = *(float *)(pbVar9 + iVar15 + 0x25ec);
      pfVar11[0x10] = fVar6;
      pfVar11[0x11] = fVar7;
      pfVar11[0x12] = *(float *)(pbVar9 + 0x4218);
      pfVar11[0x13] = *(float *)(pbVar9 + 0x421c);
      pfVar11[0x14] = fVar14;
      pfVar11[0x15] = 0.0;
      pfVar11[0x16] = *(float *)(pbVar9 + uVar13 * 0x10 + 0x25f0);
      fVar4 = *(float *)(pbVar9 + uVar13 * 0x10 + 0x25f4);
      pfVar11[0x18] = fVar8;
      pfVar11[0x19] = fVar7;
      pfVar11[0x17] = fVar4;
      pfVar11[0x1a] = *(float *)(pbVar9 + 0x4218);
      fVar4 = *(float *)(pbVar9 + 0x421c);
      pfVar11[0x1d] = 0.0;
      pfVar11[0x1c] = fVar14;
      pfVar11[0x1b] = fVar4;
      pfVar11[0x1e] = *(float *)(pbVar9 + uVar13 * 0x10 + 0x25e8);
      pfVar11[0x1f] = *(float *)(pbVar9 + uVar13 * 0x10 + 0x25f4);
      psVar12 = (short *)(*(int *)(pbVar9 + 0x1ddc) * 2 + *(int *)(pbVar9 + 0x1dd4));
      sVar5 = *(short *)(pbVar9 + 0x1dd8);
      *psVar12 = sVar5;
      psVar12[1] = sVar5 + 1;
      psVar12[2] = *(short *)(pbVar9 + 0x1dd8) + 2;
      sVar5 = *(short *)(pbVar9 + 0x1dd8);
      psVar12[3] = sVar5;
      psVar12[4] = sVar5 + 2;
      psVar12[5] = *(short *)(pbVar9 + 0x1dd8) + 3;
      *(int *)(pbVar9 + 0x1dd8) = *(int *)(pbVar9 + 0x1dd8) + 4;
      *(int *)(pbVar9 + 0x1ddc) = *(int *)(pbVar9 + 0x1ddc) + 6;
      iVar16 = iVar16 + *(int *)(pbVar9 + (iVar1 >> 2) * 4 + 0x35e8) + *(int *)(pbVar9 + 0x41f4);
      param_1 = param_1 + 1;
    }
  }
  return iVar16 - iVar10;
}
