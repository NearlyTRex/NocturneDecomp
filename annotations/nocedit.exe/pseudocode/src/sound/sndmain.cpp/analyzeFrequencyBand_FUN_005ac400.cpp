// Name: sound_sndmain.cpp_analyzeFrequencyBand_FUN_005ac400
// Address: 005ac400
// Address Range: [[005ac400, 005ac985]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_analyzeFrequencyBand_FUN_005ac400(int channel,float freq_start_hz,float freq_end_hz)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */
/* WARNING: Removing unreachable block (ram,0x005ac957) */

int __cdecl sound_sndmain_cpp_analyzeFrequencyBand_FUN_005ac400(int channel,float freq_start_hz,float freq_end_hz)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float10 fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  uint uVar11;
  float *pfVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  uint uVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  uint uVar20;
  int iVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  float10 fVar28;
  double dVar29;
  int local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_1c;
  
  if ((((g_ChannelPrimaryBuffers[channel] == (void *)0x0) ||
       (g_ChannelSecondaryBuffersA[channel] == (float *)0x0)) ||
      (g_ChannelSecondaryBuffersB[channel] == (float *)0x0)) || (g_MixBufferSize < 1)) {
    return 0;
  }
  iVar10 = sound_sndmain_cpp_getMixBufferCount_FUN_005ab6d0();
  iVar13 = g_MixBufferSize;
  if (iVar10 != g_ChannelFFTTimestamps[channel]) {
    pfVar15 = g_ChannelSecondaryBuffersA[channel];
    pfVar18 = g_ChannelSecondaryBuffersB[channel];
    pfVar12 = g_ChannelPrimaryBuffers[channel];
    for (local_2c = 1; 1 << ((byte)local_2c & 0x1f) < g_MixBufferSize; local_2c = local_2c + 1) {
    }
    uVar20 = 0;
    if (0 < g_MixBufferSize) {
      do {
        iVar10 = 0;
        uVar11 = 0;
        uVar16 = uVar20;
        if (0 < local_2c) {
          do {
            iVar10 = iVar10 + 1;
            uVar11 = uVar11 * 2 | uVar16 & 1;
            uVar16 = (int)uVar16 >> 1;
          } while (iVar10 < local_2c);
        }
        pfVar15[uVar11] = *pfVar12;
        pfVar18[uVar11] = 0.0;
        uVar20 = uVar20 + 1;
        pfVar12 = pfVar12 + 1;
      } while ((int)uVar20 < iVar13);
    }
    local_30 = 2;
    if (1 < iVar13) {
      do {
        iVar10 = local_30 / 2;
        fVar22 = (float10)3.1415926535000001 / (float10)iVar10;
        fVar4 = (float10)fcos(fVar22);
        fVar23 = (float10)fsin(fVar22);
        fVar24 = (float10)2;
        fVar22 = fVar22 * fVar24;
        fVar25 = (float10)fsin(fVar22);
        fVar22 = (float10)fcos(fVar22);
        local_1c = 0;
        if (0 < iVar13) {
          do {
            iVar21 = 0;
            if (0 < iVar10) {
              fVar26 = (float10)(double)((float10)(double)fVar4 * fVar24);
              pfVar12 = pfVar15 + local_1c;
              pfVar14 = pfVar15 + iVar10 + local_1c;
              pfVar17 = pfVar18 + local_1c;
              pfVar19 = pfVar18 + iVar10 + local_1c;
              dVar29 = (double)fVar4;
              dVar3 = (double)fVar23;
              dVar8 = (double)fVar25;
              dVar9 = (double)fVar22;
              do {
                dVar7 = dVar3;
                dVar6 = dVar29;
                fVar27 = fVar26 * (float10)dVar6 - (float10)dVar9;
                dVar29 = (double)fVar27;
                fVar28 = fVar26 * (float10)dVar7 - (float10)dVar8;
                dVar3 = (double)fVar28;
                iVar21 = iVar21 + 1;
                fVar28 = fVar27 * (float10)*pfVar14 - fVar28 * (float10)*pfVar19;
                fVar27 = (float10)dVar3 * (float10)*pfVar14 + (float10)dVar29 * (float10)*pfVar19;
                *pfVar14 = (float)((float10)*pfVar12 - fVar28);
                *pfVar19 = (float)((float10)*pfVar17 - fVar27);
                *pfVar12 = (float)((float10)*pfVar12 + fVar28);
                *pfVar17 = (float)(fVar27 + (float10)*pfVar17);
                pfVar12 = pfVar12 + 1;
                pfVar14 = pfVar14 + 1;
                pfVar17 = pfVar17 + 1;
                pfVar19 = pfVar19 + 1;
                dVar8 = dVar7;
                dVar9 = dVar6;
              } while (iVar21 < iVar10);
            }
            local_1c = local_1c + local_30;
          } while (local_1c < iVar13);
        }
        local_30 = local_30 * 2;
      } while (local_30 <= iVar13);
    }
    iVar13 = sound_sndmain_cpp_getMixBufferCount_FUN_005ab6d0();
    g_ChannelFFTTimestamps[channel] = iVar13;
  }
  iVar10 = g_MixBufferSize / 2;
  iVar13 = iVar10 + 1;
  dVar29 = floor
                     ((double)((freq_start_hz * (float)iVar13) / (float)g_AudioSampleRate));
  local_38 = (int)ROUND(ROUND(dVar29));
  dVar29 = floor
                     ((double)((freq_end_hz * (float)iVar13) / (float)g_AudioSampleRate));
  local_3c = (int)ROUND(ROUND(dVar29));
  if ((local_38 < iVar13) && (0 < local_3c)) {
    if (iVar13 <= local_3c) {
      local_3c = iVar13;
    }
    if (local_38 < 0) {
      local_38 = 0;
    }
    iVar21 = local_3c - local_38;
    if ((iVar21 < 1) && (iVar21 = 1, iVar13 <= local_3c)) {
      local_38 = iVar10;
    }
    iVar10 = 0;
    fVar5 = 0.0;
    if (0 < iVar21) {
      pfVar18 = g_ChannelSecondaryBuffersB[channel] + local_38;
      pfVar15 = g_ChannelSecondaryBuffersA[channel] + local_38;
      do {
        fVar1 = *pfVar15;
        fVar2 = *pfVar18;
        pfVar18 = pfVar18 + 1;
        pfVar15 = pfVar15 + 1;
        iVar10 = iVar10 + 1;
        fVar5 = SQRT(fVar2 * fVar2 + fVar1 * fVar1) + fVar5;
      } while (iVar10 < iVar21);
    }
    return (int)(SQRT((fVar5 / (float)iVar21) / (float)iVar13) * (float)2);
  }
  return 0;
}
