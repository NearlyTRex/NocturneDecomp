// Name: sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_004e4070
// Address: 004e4070
// Address Range: [[004e4070, 004e431d]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_004e4070(CMP3Decoder *this_ptr,float *subband_samples,int channel_index,short *pcm_output)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_004e4070(CMP3Decoder *this_ptr,float *subband_samples,int channel_index,short *pcm_output)

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
  float *pfVar10;
  float *pfVar11;
  float10 fVar12;
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
  
  if (DAT_005bbba0 != 0) {
    local_1c = 0;
    local_24 = (float *)&DAT_01cd4320;
    do {
      iVar9 = 1;
      pfVar10 = local_24;
      pfVar11 = local_24;
      do {
        fVar12 = (float10)fcos((float10)iVar9 *
                               ((float10)local_1c * (float10)0.049087385211999998 +
                               (float10)0.78539816339699997));
        *pfVar10 = (float)(fVar12 * (float10)1000000000);
        local_14 = iVar9;
        if (*pfVar10 < 0.0) {
          local_5c[0] = (double)*pfVar10;
          modf((double)(*pfVar10 + (float)-0.5),local_5c);
          dVar3 = local_5c[0];
        }
        else {
          local_64 = (double)*pfVar10;
          modf((double)(*pfVar10 + (float)0.5),&local_64);
          dVar3 = local_64;
        }
        *pfVar10 = (float)dVar3;
        pfVar10 = pfVar10 + 1;
        iVar9 = iVar9 + 2;
        *pfVar11 = *pfVar11 * (float)1.0000000000000001e-09;
        pfVar11 = pfVar11 + 1;
      } while (iVar9 != 0x41);
      local_1c = local_1c + 1;
      local_24 = local_24 + 0x20;
    } while (local_1c < 0x40);
    DAT_005bbba0 = 0;
  }
  uVar8 = this_ptr->synthesis_buffer_index[channel_index] - 0x40U & 0x3ff;
  this_ptr->synthesis_buffer_index[channel_index] = uVar8;
  local_44 = this_ptr->synthesis_v_buffer[channel_index] + uVar8;
  iVar9 = 0;
  local_4c = 0;
  do {
    if ((float)1.0000000000000001e-05 < ABS(subband_samples[iVar9])) {
      aiStack_e4[local_4c] = iVar9;
      local_4c = local_4c + 1;
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x20);
  local_20 = 0;
  do {
    local_40 = &DAT_01cd4320 + local_20 * 0x80;
    local_3c = subband_samples;
    fVar4 = 0.0;
    iVar9 = local_4c;
    while (0 < iVar9) {
      iVar9 = iVar9 + -1;
      fVar4 = *(float *)(&DAT_01cd4320 + local_20 * 0x80 + aiStack_e4[iVar9] * 4) *
              subband_samples[aiStack_e4[iVar9]] + fVar4;
    }
    *local_44 = fVar4;
    local_44 = local_44 + 1;
    local_20 = local_20 + 1;
  } while (local_20 < 0x40);
  local_48 = 0;
  do {
    uVar8 = local_48 + this_ptr->synthesis_buffer_index[channel_index];
    fVar4 = 0.0;
    iVar5 = 8;
    iVar9 = local_48;
    do {
      iVar1 = iVar9 * 4;
      uVar6 = uVar8 & 0x3ff;
      iVar2 = iVar9 * 4;
      uVar7 = uVar6 + 0x60 & 0x3ff;
      iVar9 = iVar9 + 0x40;
      uVar8 = uVar7 + 0x20;
      fVar4 = *(float *)(&DAT_005bb420 + iVar2) * this_ptr->synthesis_v_buffer[channel_index][uVar7]
              + *(float *)(&DAT_005bb3a0 + iVar1) *
                this_ptr->synthesis_v_buffer[channel_index][uVar6] + fVar4;
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
