// Name: sound_sndmain.cpp_analyzeFrequencyBand_FUN_005ac400
// Address: 005ac400
// MANUAL RECONSTRUCTION
// Address Range: [[005ac400, 005ac985]]
// Convention: __cdecl
// Signature: float __cdecl sound_sndmain_cpp_analyzeFrequencyBand_FUN_005ac400(int channel,float freq_start_hz,float freq_end_hz)

#include "nocturne.h"

float __cdecl sound_sndmain_cpp_analyzeFrequencyBand_FUN_005ac400(int channel,float freq_start_hz,float freq_end_hz)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  double dVar4;
  int iVar10;
  uint uVar11;
  float *pfVar12;
  int iVar13;
  int iVar5;
  float *pfVar14;
  float *pfVar15;
  uint uVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  uint uVar20;
  int iVar21;
  int iVar6;
  float *pfVar7;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar8;
  float10 fVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar9;
  float10 fVar10;
  double dVar29;
  double dVar11;
  int local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_1c;
  double dVar7;
  float fVar5;
  double dVar8;
  double dVar6;
  float fVar1;
  float10 fVar4;
  double dVar9;
  float fVar2;
  
  if ((((g_ChannelPrimaryBuffers[channel] == (float *)0x0) ||
       (g_ChannelSecondaryBuffersA[channel] == (float *)0x0)) ||
      (g_ChannelSecondaryBuffersB[channel] == (float *)0x0)) || (g_MixBufferSize < 1)) {
    return 0.0;
  }
  iVar10 = sound_sndmain_cpp_getMixBufferCount_FUN_005ab6d0();
  iVar1 = g_MixBufferSize;
  if (iVar10 != g_ChannelFFTTimestamps[channel]) {
    pfVar2 = g_ChannelSecondaryBuffersA[channel];
    pfVar3 = g_ChannelSecondaryBuffersB[channel];
    pfVar7 = g_ChannelPrimaryBuffers[channel];
    for (local_2c = 1; 1 << ((byte)local_2c & 0x1f) < g_MixBufferSize; local_2c = local_2c + 1) {
    }
    uVar20 = 0;
    if (0 < g_MixBufferSize) {
      do {
        iVar5 = 0;
        uVar11 = 0;
        uVar16 = uVar20;
        if (0 < local_2c) {
          do {
            iVar5 = iVar5 + 1;
            uVar11 = uVar11 * 2 | uVar16 & 1;
            uVar16 = (int)uVar16 >> 1;
          } while (iVar5 < local_2c);
        }
        pfVar2[uVar11] = *pfVar7;
        pfVar3[uVar11] = 0.0;
        uVar20 = uVar20 + 1;
        pfVar7 = pfVar7 + 1;
      } while ((int)uVar20 < iVar1);
    }
    local_30 = 2;
    if (1 < iVar1) {
      do {
        iVar5 = local_30 / 2;
        fVar22 = (float10)3.1415926535000001 / (float10)iVar5;
        fVar4 = (float10)fcos(fVar22);
        fVar23 = (float10)fsin(fVar22);
        fVar24 = (float10)2;
        fVar25 = (float10)fsin(fVar22 * fVar24);
        fVar8 = (float10)fcos(fVar22 * fVar24);
        local_1c = 0;
        if (0 < iVar1) {
          do {
            iVar21 = 0;
            if (0 < iVar5) {
              fVar26 = (float10)(double)((float10)(double)fVar4 * fVar24);
              pfVar12 = pfVar2 + local_1c;
              pfVar14 = pfVar2 + iVar5 + local_1c;
              pfVar17 = pfVar3 + local_1c;
              pfVar19 = pfVar3 + iVar5 + local_1c;
              dVar11 = (double)fVar4;
              dVar4 = (double)fVar23;
              dVar8 = (double)fVar25;
              dVar9 = (double)fVar8;
              do {
                dVar7 = dVar4;
                dVar6 = dVar11;
                fVar27 = fVar26 * (float10)dVar6 - (float10)dVar9;
                fVar28 = fVar26 * (float10)dVar7 - (float10)dVar8;
                iVar21 = iVar21 + 1;
                fVar10 = fVar27 * (float10)*pfVar14 - fVar28 * (float10)*pfVar19;
                fVar9 = (float10)(double)fVar28 * (float10)*pfVar14 +
                        (float10)(double)fVar27 * (float10)*pfVar19;
                *pfVar14 = (float)((float10)*pfVar12 - fVar10);
                *pfVar19 = (float)((float10)*pfVar17 - fVar9);
                *pfVar12 = (float)((float10)*pfVar12 + fVar10);
                *pfVar17 = (float)(fVar9 + (float10)*pfVar17);
                pfVar12 = pfVar12 + 1;
                pfVar14 = pfVar14 + 1;
                pfVar17 = pfVar17 + 1;
                pfVar19 = pfVar19 + 1;
                dVar11 = (double)fVar27;
                dVar4 = (double)fVar28;
                dVar8 = dVar7;
                dVar9 = dVar6;
              } while (iVar21 < iVar5);
            }
            local_1c = local_1c + local_30;
          } while (local_1c < iVar1);
        }
        local_30 = local_30 * 2;
      } while (local_30 <= iVar1);
    }
    iVar13 = sound_sndmain_cpp_getMixBufferCount_FUN_005ab6d0();
    g_ChannelFFTTimestamps[channel] = iVar13;
  }
  iVar5 = g_MixBufferSize / 2;
  iVar1 = iVar5 + 1;
  dVar29 = floor
                     ((double)((freq_start_hz * (float)iVar1) / (float)g_AudioSampleRate));
  local_38 = (int)ROUND(ROUND(dVar29));
  dVar11 = floor
                     ((double)((freq_end_hz * (float)iVar1) / (float)g_AudioSampleRate));
  local_3c = (int)ROUND(ROUND(dVar11));
  if ((local_38 < iVar1) && (0 < local_3c)) {
    if (iVar1 <= local_3c) {
      local_3c = iVar1;
    }
    if (local_38 < 0) {
      local_38 = 0;
    }
    iVar6 = local_3c - local_38;
    if ((iVar6 < 1) && (iVar6 = 1, iVar1 <= local_3c)) {
      local_38 = iVar5;
    }
    iVar5 = 0;
    fVar5 = 0.0;
    if (0 < iVar6) {
      pfVar18 = g_ChannelSecondaryBuffersB[channel] + local_38;
      pfVar15 = g_ChannelSecondaryBuffersA[channel] + local_38;
      do {
        fVar1 = *pfVar15;
        fVar2 = *pfVar18;
        pfVar18 = pfVar18 + 1;
        pfVar15 = pfVar15 + 1;
        iVar5 = iVar5 + 1;
        fVar5 = SQRT(fVar2 * fVar2 + fVar1 * fVar1) + fVar5;
      } while (iVar5 < iVar6);
    }
    return SQRT((fVar5 / (float)iVar6) / (float)iVar1) * (float)2;
  }
  return 0.0;
}
