// Name: sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_004feb90
// Address: 004feb90
// Address Range: [[004feb90, 004fee3d]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_004feb90(CMP3Decoder *this_ptr,float *subband_samples,int channel_index,short *pcm_output)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_004feb90(CMP3Decoder *this_ptr,float *subband_samples,int channel_index,short *pcm_output)

{
  int iVar1;
  int iVar2;
  double dVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
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
  float *local_3c;
  int local_30;
  float *local_24;
  int local_20;
  int local_1c;
  int local_14;
  
  if (DAT_00601110 != 0) {
    local_1c = 0;
    local_24 = (float *)&DAT_01d8e410;
    do {
      iVar9 = 1;
      pfVar11 = local_24;
      pfVar12 = local_24;
      do {
        fVar13 = (float10)fcos((float10)iVar9 *
                               ((float10)local_1c * (float10)_DAT_005ca097 + (float10)_DAT_005ca0af)
                              );
        *pfVar11 = (float)(fVar13 * (float10)_DAT_005ca09f);
        local_14 = iVar9;
        if (*pfVar11 < 0.0) {
          local_5c[0] = (double)*pfVar11;
          modf((double)(*pfVar11 + (float)_DAT_005ca0b7),local_5c);
          dVar3 = local_5c[0];
        }
        else {
          local_64 = (double)*pfVar11;
          modf((double)(*pfVar11 + (float)_DAT_005ca0bf),&local_64);
          dVar3 = local_64;
        }
        *pfVar11 = (float)dVar3;
        pfVar11 = pfVar11 + 1;
        iVar9 = iVar9 + 2;
        *pfVar12 = *pfVar12 * (float)_DAT_005ca0a7;
        pfVar12 = pfVar12 + 1;
      } while (iVar9 != 0x41);
      local_1c = local_1c + 1;
      local_24 = local_24 + 0x20;
    } while (local_1c < 0x40);
    DAT_00601110 = 0;
  }
  uVar8 = *(int *)(&this_ptr->field_0x7350 + channel_index * 4) - 0x40U & 0x3ff;
  *(uint *)(&this_ptr->field_0x7350 + channel_index * 4) = uVar8;
  local_44 = (float *)(&this_ptr->field_0x5350 + uVar8 * 4 + channel_index * 0x1000);
  iVar9 = 0;
  local_4c = 0;
  do {
    if ((float)_DAT_005ca0c7 < ABS(subband_samples[iVar9])) {
      aiStack_e4[local_4c] = iVar9;
      local_4c = local_4c + 1;
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x20);
  local_20 = 0;
  do {
    local_40 = &DAT_01d8e410 + local_20 * 0x80;
    local_3c = subband_samples;
    fVar4 = 0.0;
    iVar9 = local_4c;
    while (0 < iVar9) {
      iVar9 = iVar9 + -1;
      fVar4 = *(float *)(&DAT_01d8e410 + local_20 * 0x80 + aiStack_e4[iVar9] * 4) *
              subband_samples[aiStack_e4[iVar9]] + fVar4;
    }
    *local_44 = fVar4;
    local_44 = local_44 + 1;
    local_20 = local_20 + 1;
  } while (local_20 < 0x40);
  local_48 = 0;
  iVar9 = channel_index * 0x1000 + 0x5350;
  do {
    uVar8 = local_48 + *(int *)(&this_ptr->field_0x7350 + channel_index * 4);
    fVar4 = 0.0;
    iVar5 = 8;
    iVar10 = local_48;
    do {
      iVar1 = iVar10 * 4;
      uVar6 = uVar8 & 0x3ff;
      iVar2 = iVar10 * 4;
      uVar7 = uVar6 + 0x60 & 0x3ff;
      iVar10 = iVar10 + 0x40;
      uVar8 = uVar7 + 0x20;
      fVar4 = *(float *)(&DAT_00600990 + iVar2) *
              *(float *)(&this_ptr->field_0x5350 + uVar7 * 4 + iVar9 + -0x5350) +
              *(float *)(&DAT_00600910 + iVar1) *
              *(float *)(&this_ptr->field_0x5350 + uVar6 * 4 + iVar9 + -0x5350) + fVar4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    local_30 = (int)ROUND(fVar4 * 32768.0);
    if (local_30 < 0x8000) {
      if (local_30 < -0x8000) {
        local_30 = -0x8000;
      }
    }
    else {
      local_30 = 0x7fff;
    }
    pcm_output[local_48] = (short)local_30;
    local_48 = local_48 + 1;
  } while (local_48 < 0x20);
  return;
}
