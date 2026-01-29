// Name: sound_sndmain.cpp_analyzeFrequencyBand_FUN_005ac400
// Address: 005ac400
// Address Range: [[005ac400, 005ac985]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_analyzeFrequencyBand_FUN_005ac400 (int channel,float freq_start_hz,float freq_end_hz)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005ac957) */

int __cdecl
sound_sndmain_cpp_analyzeFrequencyBand_FUN_005ac400
          (int channel,float freq_start_hz,float freq_end_hz)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
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
  double dVar28;
  uint local_94;
  uint uStack_90;
  uint local_8c;
  uint uStack_88;
  int local_4c;
  int iStack_48;
  int local_30;
  int local_2c;
  float local_1c;
  
  dVar3 = (double)CONCAT44(iStack_48,local_4c);
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
        fVar26 = (float10)fcos(fVar22);
        fVar23 = (float10)fsin(fVar22);
        fVar24 = (float10)2;
        fVar22 = fVar22 * fVar24;
        fVar25 = (float10)fsin(fVar22);
        fVar22 = (float10)fcos(fVar22);
        dVar28 = (double)fVar26;
        iStack_48 = (int)((ulonglong)dVar28 >> 0x20);
        dVar3 = (double)fVar22;
        local_1c = 0.0;
        if (0 < iVar13) {
          do {
            uStack_88 = iStack_48;
            iVar21 = 0;
            if (0 < iVar10) {
              fVar26 = (float10)(double)((float10)dVar28 * fVar24);
              pfVar12 = pfVar15 + (int)local_1c;
              pfVar14 = pfVar15 + iVar10 + (int)local_1c;
              pfVar17 = pfVar18 + (int)local_1c;
              pfVar19 = pfVar18 + iVar10 + (int)local_1c;
              local_8c = SUB84(dVar28,0);
              dVar5 = (double)fVar23;
              dVar8 = (double)fVar25;
              dVar9 = dVar3;
              do {
                dVar7 = dVar5;
                fVar22 = fVar26 * (float10)(double)CONCAT44(uStack_88,local_8c) - (float10)dVar9;
                dVar4 = (double)fVar22;
                fVar27 = fVar26 * (float10)dVar7 - (float10)dVar8;
                dVar5 = (double)fVar27;
                dVar9 = (double)CONCAT44(uStack_88,local_8c);
                local_94 = SUB84(dVar4,0);
                local_8c = local_94;
                uStack_90 = (uint)((ulonglong)dVar4 >> 0x20);
                uStack_88 = uStack_90;
                iVar21 = iVar21 + 1;
                fVar27 = fVar22 * (float10)*pfVar14 - fVar27 * (float10)*pfVar19;
                fVar22 = (float10)dVar5 * (float10)*pfVar14 + (float10)dVar4 * (float10)*pfVar19;
                *pfVar14 = (float)((float10)*pfVar12 - fVar27);
                *pfVar19 = (float)((float10)*pfVar17 - fVar22);
                *pfVar12 = (float)((float10)*pfVar12 + fVar27);
                *pfVar17 = (float)(fVar22 + (float10)*pfVar17);
                pfVar12 = pfVar12 + 1;
                pfVar14 = pfVar14 + 1;
                pfVar17 = pfVar17 + 1;
                pfVar19 = pfVar19 + 1;
                dVar8 = dVar7;
              } while (iVar21 < iVar10);
            }
            local_1c = (float)((int)local_1c + local_30);
          } while ((int)local_1c < iVar13);
        }
        local_30 = local_30 * 2;
      } while (local_30 <= iVar13);
    }
    iVar13 = sound_sndmain_cpp_getMixBufferCount_FUN_005ab6d0();
    g_ChannelFFTTimestamps[channel] = iVar13;
  }
  iStack_48 = (int)((ulonglong)dVar3 >> 0x20);
  iVar10 = g_MixBufferSize / 2;
  iVar13 = iVar10 + 1;
  dVar28 = floor
                     ((double)((freq_start_hz * (float)iVar13) / (float)g_AudioSampleRate));
  fVar6 = (float)g_AudioSampleRate;
  round(dVar28);
  dVar28 = floor((double)((freq_end_hz * local_1c) / fVar6));
  dVar28 = round(dVar28);
  local_4c = (int)ROUND(dVar28);
  if ((iStack_48 < iVar13) && (0 < local_4c)) {
    if (iVar13 <= local_4c) {
      local_4c = iVar13;
    }
    if ((longlong)dVar3 < 0) {
      iStack_48 = 0;
    }
    iVar21 = local_4c - iStack_48;
    if ((iVar21 < 1) && (iVar21 = 1, iVar13 <= local_4c)) {
      iStack_48 = iVar10;
    }
    iVar10 = 0;
    fVar6 = 0.0;
    if (0 < iVar21) {
      pfVar18 = g_ChannelSecondaryBuffersB[channel] + iStack_48;
      pfVar15 = g_ChannelSecondaryBuffersA[channel] + iStack_48;
      do {
        fVar1 = *pfVar15;
        fVar2 = *pfVar18;
        pfVar18 = pfVar18 + 1;
        pfVar15 = pfVar15 + 1;
        iVar10 = iVar10 + 1;
        fVar6 = SQRT(fVar2 * fVar2 + fVar1 * fVar1) + fVar6;
      } while (iVar10 < iVar21);
    }
    return (int)(SQRT((fVar6 / (float)iVar21) / (float)iVar13) * (float)2);
  }
  return 0;
}
