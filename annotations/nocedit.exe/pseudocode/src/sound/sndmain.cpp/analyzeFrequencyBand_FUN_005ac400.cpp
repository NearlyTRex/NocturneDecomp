// Name: sound_sndmain.cpp_analyzeFrequencyBand_FUN_005ac400
// Address: 005ac400
// Address Range: [[005ac400, 005ac985]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_analyzeFrequencyBand_FUN_005ac400(int channel, float freq_start_hz, float freq_end_hz)

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
  double dVar6;
  double dVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  uint uVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  float10 in_ST0;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  double dVar30;
  ulonglong uStack_48;
  int local_40;
  int local_2c;
  int local_28;
  int local_18;
  
  if ((((g_ChannelPrimaryBuffers[channel] == (void *)0x0) ||
       (g_ChannelSecondaryBuffersA[channel] == (float *)0x0)) ||
      (g_ChannelSecondaryBuffersB[channel] == (float *)0x0)) || (g_MixBufferSize < 1)) {
    return 0;
  }
  iVar9 = sound_sndmain_cpp_getMixBufferCount_FUN_005ab6d0();
  iVar12 = g_MixBufferSize;
  if (iVar9 != g_ChannelFFTTimestamps[channel]) {
    pfVar14 = g_ChannelSecondaryBuffersA[channel];
    pfVar17 = g_ChannelSecondaryBuffersB[channel];
    pfVar11 = (float *)g_ChannelPrimaryBuffers[channel];
    for (local_28 = 1; 1 << ((byte)local_28 & 0x1f) < g_MixBufferSize; local_28 = local_28 + 1) {
    }
    uVar19 = 0;
    if (0 < g_MixBufferSize) {
      do {
        iVar9 = 0;
        uVar10 = 0;
        uVar15 = uVar19;
        if (0 < local_28) {
          do {
            iVar9 = iVar9 + 1;
            uVar10 = uVar10 * 2 | uVar15 & 1;
            uVar15 = (int)uVar15 >> 1;
          } while (iVar9 < local_28);
        }
        pfVar14[uVar10] = *pfVar11;
        pfVar17[uVar10] = 0.0;
        uVar19 = uVar19 + 1;
        pfVar11 = pfVar11 + 1;
      } while ((int)uVar19 < iVar12);
    }
    local_2c = 2;
    if (1 < iVar12) {
      do {
        iVar9 = local_2c / 2;
        fVar22 = (float10)3.1415926535000001 / (float10)iVar9;
        fVar29 = (float10)fcos(fVar22);
        fVar23 = (float10)fsin(fVar22);
        fVar24 = (float10)2;
        fVar22 = fVar22 * fVar24;
        fVar25 = (float10)fsin(fVar22);
        fVar22 = (float10)fcos(fVar22);
        local_18 = 0;
        if (0 < iVar12) {
          do {
            iVar20 = 0;
            if (0 < iVar9) {
              fVar26 = (float10)(double)((float10)(double)fVar29 * fVar24);
              pfVar11 = pfVar14 + local_18;
              pfVar13 = pfVar14 + iVar9 + local_18;
              pfVar16 = pfVar17 + local_18;
              pfVar18 = pfVar17 + iVar9 + local_18;
              dVar30 = (double)fVar29;
              dVar3 = (double)fVar23;
              dVar6 = (double)fVar25;
              dVar7 = (double)fVar22;
              do {
                dVar5 = dVar3;
                dVar4 = dVar30;
                fVar27 = fVar26 * (float10)dVar4 - (float10)dVar7;
                dVar30 = (double)fVar27;
                fVar28 = fVar26 * (float10)dVar5 - (float10)dVar6;
                dVar3 = (double)fVar28;
                iVar20 = iVar20 + 1;
                fVar28 = fVar27 * (float10)*pfVar13 - fVar28 * (float10)*pfVar18;
                fVar27 = (float10)dVar3 * (float10)*pfVar13 + (float10)dVar30 * (float10)*pfVar18;
                *pfVar13 = (float)((float10)*pfVar11 - fVar28);
                *pfVar18 = (float)((float10)*pfVar16 - fVar27);
                *pfVar11 = (float)((float10)*pfVar11 + fVar28);
                *pfVar16 = (float)(fVar27 + (float10)*pfVar16);
                pfVar11 = pfVar11 + 1;
                pfVar13 = pfVar13 + 1;
                pfVar16 = pfVar16 + 1;
                pfVar18 = pfVar18 + 1;
                dVar6 = dVar5;
                dVar7 = dVar4;
              } while (iVar20 < iVar9);
            }
            local_18 = local_18 + local_2c;
          } while (local_18 < iVar12);
        }
        local_2c = local_2c * 2;
      } while (local_2c <= iVar12);
    }
    iVar12 = sound_sndmain_cpp_getMixBufferCount_FUN_005ab6d0();
    g_ChannelFFTTimestamps[channel] = iVar12;
  }
  iVar9 = g_MixBufferSize >> 0x1f;
  iVar20 = g_MixBufferSize / 2;
  iVar12 = iVar20 + 1;
  dVar30 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
  fVar29 = (float10)dVar30;
  uStack_48 = (double)CONCAT44 /* combine 2-byte values */(iVar9,iVar20);
  crt_math_c_round_FUN_005fe6b0(uStack_48);
  crt_math_c_floor_FUN_005feb90((double)fVar29);
  dVar30 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar9,iVar20));
  iVar9 = (int)ROUND(dVar30);
  if ((local_40 < iVar12) && (0 < iVar9)) {
    if (iVar12 <= iVar9) {
      iVar9 = iVar12;
    }
    if (local_40 < 0) {
      local_40 = 0;
    }
    iVar21 = iVar9 - local_40;
    if ((iVar21 < 1) && (iVar21 = 1, iVar12 <= iVar9)) {
      local_40 = iVar20;
    }
    iVar9 = 0;
    fVar8 = 0.0;
    if (0 < iVar21) {
      fVar8 = 0.0;
      pfVar17 = g_ChannelSecondaryBuffersB[channel] + local_40;
      pfVar14 = g_ChannelSecondaryBuffersA[channel] + local_40;
      do {
        fVar1 = *pfVar14;
        fVar2 = *pfVar17;
        pfVar17 = pfVar17 + 1;
        pfVar14 = pfVar14 + 1;
        iVar9 = iVar9 + 1;
        fVar8 = SQRT(fVar2 * fVar2 + fVar1 * fVar1) + fVar8;
      } while (iVar9 < iVar21);
    }
    return (int)(SQRT((fVar8 / (float)iVar21) / (float)iVar12) * (float)2);
  }
  return 0;
}
