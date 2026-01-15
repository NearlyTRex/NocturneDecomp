// Name: sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
// Address: 005304f0
// Address Range: [[005304f0, 0053079d]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0(CMP3Decoder * this_ptr, float * subband_samples, int channel_index, short * pcm_output)

#include "nocturne.h"

void __cdecl
sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0
          (CMP3Decoder *this_ptr,float *subband_samples,int channel_index,short *pcm_output)

{
  double dVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float *extraout_EBX;
  float *pfVar8;
  float *extraout_EBX_00;
  float *pfVar9;
  float10 fVar10;
  int aiStack_e4 [32];
  double local_64;
  double local_5c [2];
  int local_4c;
  int local_48;
  float *local_44;
  float (*local_40) [32];
  float *local_3c;
  int local_30;
  float *local_24;
  int local_20;
  int local_1c;
  int local_14;
  
  if (g_MpegSynthesisTableInitialized != 0) {
    local_1c = 0;
    local_24 = g_MpegSynthesisDctTable[0];
    do {
      iVar7 = 1;
      pfVar8 = local_24;
      pfVar9 = local_24;
      do {
        fVar10 = (float10)fcos((float10)iVar7 *
                               ((float10)local_1c * (float10)0.049087385211999998 +
                               (float10)0.78539816339699997));
        *pfVar8 = (float)(fVar10 * (float10)1000000000);
        local_14 = iVar7;
        if (*pfVar8 < 0.0) {
          local_5c[0] = (double)*pfVar8;
          crt_math_c_modf_FUN_00602102((double)(*pfVar8 + (float)-0.5),local_5c);
          pfVar8 = extraout_EBX_00;
          dVar1 = local_5c[0];
        }
        else {
          local_64 = (double)*pfVar8;
          crt_math_c_modf_FUN_00602102((double)(*pfVar8 + (float)0.5),&local_64);
          pfVar8 = extraout_EBX;
          dVar1 = local_64;
        }
        *pfVar8 = (float)dVar1;
        pfVar8 = pfVar8 + 1;
        iVar7 = iVar7 + 2;
        *pfVar9 = *pfVar9 * (float)1.0000000000000001e-09;
        pfVar9 = pfVar9 + 1;
      } while (iVar7 != 0x41);
      local_1c = local_1c + 1;
      local_24 = local_24 + 0x20;
    } while (local_1c < 0x40);
    g_MpegSynthesisTableInitialized = 0;
  }
  uVar6 = this_ptr->synthesis_buffer_index[channel_index] - 0x40U & 0x3ff;
  this_ptr->synthesis_buffer_index[channel_index] = uVar6;
  local_44 = this_ptr->synthesis_v_buffer[channel_index] + uVar6;
  iVar7 = 0;
  local_4c = 0;
  do {
    if ((float)1.0000000000000001e-05 < ABS(subband_samples[iVar7])) {
      aiStack_e4[local_4c] = iVar7;
      local_4c = local_4c + 1;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x20);
  local_20 = 0;
  do {
    local_40 = g_MpegSynthesisDctTable + local_20;
    local_3c = subband_samples;
    fVar2 = 0.0;
    iVar7 = local_4c;
    while (0 < iVar7) {
      iVar7 = iVar7 + -1;
      fVar2 = g_MpegSynthesisDctTable[local_20][aiStack_e4[iVar7]] *
              subband_samples[aiStack_e4[iVar7]] + fVar2;
    }
    *local_44 = fVar2;
    local_44 = local_44 + 1;
    local_20 = local_20 + 1;
  } while (local_20 < 0x40);
  local_48 = 0;
  do {
    uVar6 = local_48 + this_ptr->synthesis_buffer_index[channel_index];
    fVar2 = 0.0;
    iVar3 = 8;
    iVar7 = local_48;
    do {
      pfVar8 = g_MpegSynthesisWindow[0] + iVar7;
      uVar4 = uVar6 & 0x3ff;
      pfVar9 = g_MpegSynthesisWindow[1] + iVar7;
      uVar5 = uVar4 + 0x60 & 0x3ff;
      iVar7 = iVar7 + 0x40;
      uVar6 = uVar5 + 0x20;
      fVar2 = *pfVar9 * this_ptr->synthesis_v_buffer[channel_index][uVar5] +
              *pfVar8 * this_ptr->synthesis_v_buffer[channel_index][uVar4] + fVar2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    local_30 = (int)ROUND(fVar2 * 32768.0);
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
