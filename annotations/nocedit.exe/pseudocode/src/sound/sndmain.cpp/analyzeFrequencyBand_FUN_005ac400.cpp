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
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  uint uVar10;
  float *pfVar11;
  int iVar12;
  uint extraout_EAX;
  uint extraout_EAX_00;
  float *pfVar13;
  float *pfVar14;
  uint uVar15;
  float *pfVar16;
  uint extraout_EDX;
  uint extraout_EDX_00;
  float *pfVar17;
  float *pfVar18;
  uint uVar19;
  int iVar20;
  float10 in_ST0;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  float10 fVar28;
  double dVar29;
  ulonglong uStack_48;
  int local_34;
  int local_30;
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
        fVar21 = (float10)3.1415926535000001 / (float10)iVar9;
        fVar28 = (float10)fcos(fVar21);
        fVar22 = (float10)fsin(fVar21);
        fVar23 = (float10)2;
        fVar21 = fVar21 * fVar23;
        fVar24 = (float10)fsin(fVar21);
        fVar21 = (float10)fcos(fVar21);
        local_18 = 0;
        if (0 < iVar12) {
          do {
            iVar20 = 0;
            if (0 < iVar9) {
              fVar25 = (float10)(double)((float10)(double)fVar28 * fVar23);
              pfVar11 = pfVar14 + local_18;
              pfVar13 = pfVar14 + iVar9 + local_18;
              pfVar16 = pfVar17 + local_18;
              pfVar18 = pfVar17 + iVar9 + local_18;
              dVar29 = (double)fVar28;
              dVar3 = (double)fVar22;
              dVar7 = (double)fVar24;
              dVar8 = (double)fVar21;
              do {
                dVar6 = dVar3;
                dVar5 = dVar29;
                fVar26 = fVar25 * (float10)dVar5 - (float10)dVar8;
                dVar29 = (double)fVar26;
                fVar27 = fVar25 * (float10)dVar6 - (float10)dVar7;
                dVar3 = (double)fVar27;
                iVar20 = iVar20 + 1;
                fVar27 = fVar26 * (float10)*pfVar13 - fVar27 * (float10)*pfVar18;
                fVar26 = (float10)dVar3 * (float10)*pfVar13 + (float10)dVar29 * (float10)*pfVar18;
                *pfVar13 = (float)((float10)*pfVar11 - fVar27);
                *pfVar18 = (float)((float10)*pfVar16 - fVar26);
                *pfVar11 = (float)((float10)*pfVar11 + fVar27);
                *pfVar16 = (float)(fVar26 + (float10)*pfVar16);
                pfVar11 = pfVar11 + 1;
                pfVar13 = pfVar13 + 1;
                pfVar16 = pfVar16 + 1;
                pfVar18 = pfVar18 + 1;
                dVar7 = dVar6;
                dVar8 = dVar5;
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
  iVar9 = g_MixBufferSize / 2;
  iVar12 = iVar9 + 1;
  dVar29 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
  fVar28 = (float10)dVar29;
  uStack_48 = (double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX);
  fVar22 = (float10)uStack_48;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX));
  local_30 = (int)ROUND(fVar22);
  crt_math_c_floor_FUN_005feb90((double)fVar28);
  uStack_48 = (double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,extraout_EAX_00);
  fVar28 = (float10)uStack_48;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,extraout_EAX_00));
  local_34 = (int)ROUND(fVar28);
  if ((local_30 < iVar12) && (0 < local_34)) {
    if (iVar12 <= local_34) {
      local_34 = iVar12;
    }
    if (local_30 < 0) {
      local_30 = 0;
    }
    iVar20 = local_34 - local_30;
    if ((iVar20 < 1) && (iVar20 = 1, iVar12 <= local_34)) {
      local_30 = iVar9;
    }
    iVar9 = 0;
    fVar4 = 0.0;
    if (0 < iVar20) {
      pfVar17 = g_ChannelSecondaryBuffersB[channel] + local_30;
      pfVar14 = g_ChannelSecondaryBuffersA[channel] + local_30;
      do {
        fVar1 = *pfVar14;
        fVar2 = *pfVar17;
        pfVar17 = pfVar17 + 1;
        pfVar14 = pfVar14 + 1;
        iVar9 = iVar9 + 1;
        fVar4 = SQRT(fVar2 * fVar2 + fVar1 * fVar1) + fVar4;
      } while (iVar9 < iVar20);
    }
    return (int)(SQRT((fVar4 / (float)iVar20) / (float)iVar12) * (float)2);
  }
  return 0;
}
