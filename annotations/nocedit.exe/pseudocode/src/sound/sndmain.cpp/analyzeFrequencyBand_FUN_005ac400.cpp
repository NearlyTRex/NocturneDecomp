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
  int iVar6;
  uint uVar7;
  float fVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  uint uVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  uint uVar18;
  int iVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  double dVar28;
  uint local_c0;
  uint uStack_78;
  uint local_74;
  uint uStack_70;
  uint local_6c;
  int local_40;
  int local_2c;
  int local_28;
  int local_18;
  float fStack_14;
  
  if ((((g_ChannelPrimaryBuffers[channel] == (void *)0x0) ||
       (g_ChannelSecondaryBuffersA[channel] == (float *)0x0)) ||
      (g_ChannelSecondaryBuffersB[channel] == (float *)0x0)) || (g_MixBufferSize < 1)) {
    return 0;
  }
  iVar6 = sound_sndmain_cpp_getMixBufferCount_FUN_005ab6d0();
  iVar10 = g_MixBufferSize;
  if (iVar6 != g_ChannelFFTTimestamps[channel]) {
    pfVar13 = g_ChannelSecondaryBuffersA[channel];
    pfVar16 = g_ChannelSecondaryBuffersB[channel];
    pfVar9 = g_ChannelPrimaryBuffers[channel];
    for (local_28 = 1; 1 << ((byte)local_28 & 0x1f) < g_MixBufferSize; local_28 = local_28 + 1) {
    }
    uVar18 = 0;
    if (0 < g_MixBufferSize) {
      do {
        iVar6 = 0;
        uVar7 = 0;
        uVar14 = uVar18;
        if (0 < local_28) {
          do {
            iVar6 = iVar6 + 1;
            uVar7 = uVar7 * 2 | uVar14 & 1;
            uVar14 = (int)uVar14 >> 1;
          } while (iVar6 < local_28);
        }
        pfVar13[uVar7] = *pfVar9;
        pfVar16[uVar7] = 0.0;
        uVar18 = uVar18 + 1;
        pfVar9 = pfVar9 + 1;
      } while ((int)uVar18 < iVar10);
    }
    local_2c = 2;
    if (1 < iVar10) {
      do {
        fVar8 = (float)(local_2c / 2);
        fVar20 = (float10)3.1415926535000001 / (float10)(int)fVar8;
        fVar27 = (float10)fcos(fVar20);
        fVar21 = (float10)fsin(fVar20);
        fVar22 = (float10)2;
        fVar20 = fVar20 * fVar22;
        fVar23 = (float10)fsin(fVar20);
        fVar20 = (float10)fcos(fVar20);
        local_c0 = (uint)((ulonglong)(double)fVar21 >> 0x20);
        local_18 = 0;
        fStack_14 = fVar8;
        if (0 < iVar10) {
          do {
            local_6c = local_c0;
            iVar6 = 0;
            if (0 < (int)fVar8) {
              fVar24 = (float10)(double)((float10)(double)fVar27 * fVar22);
              fStack_14 = (float)((int)fVar8 * 4);
              pfVar9 = pfVar13 + local_18;
              pfVar12 = pfVar13 + (int)fVar8 + local_18;
              pfVar15 = pfVar16 + local_18;
              pfVar17 = pfVar16 + (int)fVar8 + local_18;
              uStack_70 = SUB84 /* extract 2-byte value */((double)fVar21,0);
              dVar28 = (double)fVar27;
              dVar5 = (double)fVar23;
              dVar3 = (double)fVar20;
              do {
                dVar4 = dVar28;
                fVar25 = fVar24 * (float10)dVar4 - (float10)dVar3;
                dVar28 = (double)fVar25;
                fVar26 = fVar24 * (float10)(double)CONCAT44 /* combine 2-byte values */(local_6c,uStack_70) - (float10)dVar5;
                dVar3 = (double)fVar26;
                iVar6 = iVar6 + 1;
                fVar26 = fVar25 * (float10)*pfVar12 - fVar26 * (float10)*pfVar17;
                fVar25 = (float10)dVar3 * (float10)*pfVar12 + (float10)dVar28 * (float10)*pfVar17;
                *pfVar12 = (float)((float10)*pfVar9 - fVar26);
                dVar5 = (double)CONCAT44 /* combine 2-byte values */(local_6c,uStack_70);
                uStack_78 = SUB84 /* extract 2-byte value */(dVar3,0);
                *pfVar17 = (float)((float10)*pfVar15 - fVar25);
                uStack_70 = uStack_78;
                local_74 = (uint)((ulonglong)dVar3 >> 0x20);
                local_6c = local_74;
                *pfVar9 = (float)((float10)*pfVar9 + fVar26);
                *pfVar15 = (float)(fVar25 + (float10)*pfVar15);
                pfVar9 = pfVar9 + 1;
                pfVar12 = pfVar12 + 1;
                pfVar15 = pfVar15 + 1;
                pfVar17 = pfVar17 + 1;
                dVar3 = dVar4;
              } while (iVar6 < (int)fVar8);
            }
            local_18 = local_18 + local_2c;
          } while (local_18 < iVar10);
        }
        local_2c = local_2c * 2;
      } while (local_2c <= iVar10);
    }
    iVar10 = sound_sndmain_cpp_getMixBufferCount_FUN_005ab6d0();
    g_ChannelFFTTimestamps[channel] = iVar10;
  }
  iVar11 = g_MixBufferSize / 2;
  iVar10 = iVar11 + 1;
  dVar28 = crt_math_c_floor_FUN_005feb90
                     ((double)((freq_start_hz * (float)iVar10) / (float)g_AudioSampleRate));
  fVar27 = ((float10)freq_end_hz * (float10)fStack_14) / (float10)g_AudioSampleRate;
  crt_math_c_round_FUN_005fe6b0(dVar28);
  dVar28 = crt_math_c_floor_FUN_005feb90((double)fVar27);
  dVar28 = crt_math_c_round_FUN_005fe6b0(dVar28);
  iVar6 = (int)ROUND(dVar28);
  if ((local_40 < iVar10) && (0 < iVar6)) {
    if (iVar10 <= iVar6) {
      iVar6 = iVar10;
    }
    if (local_40 < 0) {
      local_40 = 0;
    }
    iVar19 = iVar6 - local_40;
    if ((iVar19 < 1) && (iVar19 = 1, iVar10 <= iVar6)) {
      local_40 = iVar11;
    }
    iVar6 = 0;
    fVar8 = 0.0;
    if (0 < iVar19) {
      fVar8 = 0.0;
      pfVar16 = g_ChannelSecondaryBuffersB[channel] + local_40;
      pfVar13 = g_ChannelSecondaryBuffersA[channel] + local_40;
      do {
        fVar1 = *pfVar13;
        fVar2 = *pfVar16;
        pfVar16 = pfVar16 + 1;
        pfVar13 = pfVar13 + 1;
        iVar6 = iVar6 + 1;
        fVar8 = SQRT(fVar2 * fVar2 + fVar1 * fVar1) + fVar8;
      } while (iVar6 < iVar19);
    }
    return (int)(SQRT((fVar8 / (float)iVar19) / (float)iVar10) * (float)2);
  }
  return 0;
}
