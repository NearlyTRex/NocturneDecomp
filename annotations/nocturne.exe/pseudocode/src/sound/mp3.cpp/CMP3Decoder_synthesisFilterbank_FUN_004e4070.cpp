// Name: sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_004e4070
// Address: 004e4070
// Address Range: [[004e4070, 004e431d]]
// Convention: __cdecl
// Signature: int __cdecl sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_004e4070(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_004e4070(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  double dVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  float10 fVar13;
  int aiStack_e4 [32];
  double local_64;
  double local_5c [2];
  int local_4c;
  int local_48;
  float *local_44;
  byte *local_40;
  int local_3c;
  int local_30;
  float *local_24;
  int local_20;
  int local_1c;
  int local_14;
  
  if (DAT_005bbba0 != 0) {
    local_1c = 0;
    local_24 = (float *)&DAT_01cd4320;
    do {
      iVar5 = 1;
      pfVar11 = local_24;
      pfVar12 = local_24;
      do {
        fVar13 = (float10)fcos((float10)iVar5 *
                               ((float10)local_1c * (float10)_DAT_0058b6b0 + (float10)_DAT_0058b6c8)
                              );
        *pfVar11 = (float)(fVar13 * (float10)_DAT_0058b6b8);
        local_14 = iVar5;
        if (*pfVar11 < 0.0) {
          local_5c[0] = (double)*pfVar11;
          modf((double)(*pfVar11 + (float)_DAT_0058b6d0),local_5c);
          dVar3 = local_5c[0];
        }
        else {
          local_64 = (double)*pfVar11;
          modf((double)(*pfVar11 + (float)_DAT_0058b6d8),&local_64);
          dVar3 = local_64;
        }
        *pfVar11 = (float)dVar3;
        pfVar11 = pfVar11 + 1;
        iVar5 = iVar5 + 2;
        *pfVar12 = *pfVar12 * (float)_DAT_0058b6c0;
        pfVar12 = pfVar12 + 1;
      } while (iVar5 != 0x41);
      local_1c = local_1c + 1;
      local_24 = local_24 + 0x20;
    } while (local_1c < 0x40);
    DAT_005bbba0 = 0;
  }
  iVar5 = param_3 * 4 + param_1;
  uVar9 = *(int *)(iVar5 + 0x7350) - 0x40U & 0x3ff;
  *(uint *)(iVar5 + 0x7350) = uVar9;
  local_44 = (float *)(param_1 + 0x5350 + param_3 * 0x1000 + uVar9 * 4);
  iVar5 = 0;
  local_4c = 0;
  do {
    if ((float)_DAT_0058b6e0 < ABS(*(float *)(iVar5 * 4 + param_2))) {
      aiStack_e4[local_4c] = iVar5;
      local_4c = local_4c + 1;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x20);
  local_20 = 0;
  do {
    local_40 = &DAT_01cd4320 + local_20 * 0x80;
    local_3c = param_2;
    fVar4 = 0.0;
    iVar5 = local_4c;
    while (0 < iVar5) {
      iVar5 = iVar5 + -1;
      fVar4 = *(float *)(&DAT_01cd4320 + local_20 * 0x80 + aiStack_e4[iVar5] * 4) *
              *(float *)(param_2 + aiStack_e4[iVar5] * 4) + fVar4;
    }
    *local_44 = fVar4;
    local_44 = local_44 + 1;
    local_20 = local_20 + 1;
  } while (local_20 < 0x40);
  local_48 = 0;
  iVar10 = param_1 + 0x5350 + param_3 * 0x1000;
  iVar5 = local_48;
  do {
    local_48 = iVar5;
    uVar9 = local_48 + *(int *)(param_1 + param_3 * 4 + 0x7350);
    fVar4 = 0.0;
    iVar6 = 8;
    iVar5 = local_48;
    do {
      iVar1 = iVar5 * 4;
      uVar7 = uVar9 & 0x3ff;
      iVar2 = iVar5 * 4;
      uVar8 = uVar7 + 0x60 & 0x3ff;
      iVar5 = iVar5 + 0x40;
      uVar9 = uVar8 + 0x20;
      fVar4 = *(float *)(&DAT_005bb420 + iVar2) * *(float *)(iVar10 + uVar8 * 4) +
              *(float *)(&DAT_005bb3a0 + iVar1) * *(float *)(iVar10 + uVar7 * 4) + fVar4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    local_30 = (int)ROUND(fVar4 * 32768.0);
    if (local_30 < 0x8000) {
      if (local_30 < -0x8000) {
        local_30 = -0x8000;
      }
    }
    else {
      local_30 = 0x7fff;
    }
    *(short *)(local_48 * 2 + param_4) = (short)local_30;
    iVar5 = local_48 + 1;
  } while (local_48 + 1 < 0x20);
  return local_48;
}
