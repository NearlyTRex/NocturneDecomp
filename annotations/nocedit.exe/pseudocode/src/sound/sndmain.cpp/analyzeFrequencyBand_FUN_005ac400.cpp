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
  int iVar6;
  uint uVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  uint uVar16;
  int iVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  double dVar26;
  uint uStack_bc;
  uint local_84;
  uint uStack_80;
  uint local_7c;
  uint uStack_78;
  uint local_74;
  uint uStack_70;
  uint local_6c;
  uint uStack_68;
  uint local_40;
  int local_3c;
  int local_38;
  int local_28;
  int local_24;
  float fStack_14;
  
  if ((((g_ChannelPrimaryBuffers[channel] == (void *)0x0) ||
       (g_ChannelSecondaryBuffersA[channel] == (float *)0x0)) ||
      (g_ChannelSecondaryBuffersB[channel] == (float *)0x0)) || (g_MixBufferSize < 1)) {
    return 0;
  }
  iVar6 = sound_sndmain_cpp_getMixBufferCount_FUN_005ab6d0();
  iVar9 = g_MixBufferSize;
  if (iVar6 != g_ChannelFFTTimestamps[channel]) {
    pfVar11 = g_ChannelSecondaryBuffersA[channel];
    pfVar14 = g_ChannelSecondaryBuffersB[channel];
    pfVar8 = g_ChannelPrimaryBuffers[channel];
    for (local_24 = 1; 1 << ((byte)local_24 & 0x1f) < g_MixBufferSize; local_24 = local_24 + 1) {
    }
    uVar16 = 0;
    if (0 < g_MixBufferSize) {
      do {
        iVar6 = 0;
        uVar7 = 0;
        uVar12 = uVar16;
        if (0 < local_24) {
          do {
            iVar6 = iVar6 + 1;
            uVar7 = uVar7 * 2 | uVar12 & 1;
            uVar12 = (int)uVar12 >> 1;
          } while (iVar6 < local_24);
        }
        pfVar11[uVar7] = *pfVar8;
        pfVar14[uVar7] = 0.0;
        uVar16 = uVar16 + 1;
        pfVar8 = pfVar8 + 1;
      } while ((int)uVar16 < iVar9);
    }
    local_28 = 2;
    if (1 < iVar9) {
      do {
        iVar6 = local_28 / 2;
        fVar18 = (float10)3.1415926535000001 / (float10)iVar6;
        fVar25 = (float10)fcos(fVar18);
        fVar19 = (float10)fsin(fVar18);
        fVar20 = (float10)2;
        fVar18 = fVar18 * fVar20;
        fVar21 = (float10)fsin(fVar18);
        fVar18 = (float10)fcos(fVar18);
        uStack_bc = (uint)((ulonglong)(double)fVar19 >> 0x20);
        local_40 = (uint)((ulonglong)(double)fVar18 >> 0x20);
        fStack_14 = 0.0;
        if (0 < iVar9) {
          do {
            uStack_78 = local_40;
            uStack_68 = uStack_bc;
            iVar17 = 0;
            if (0 < iVar6) {
              fVar22 = (float10)(double)((float10)(double)fVar25 * fVar20);
              pfVar8 = pfVar11 + (int)fStack_14;
              pfVar10 = pfVar11 + iVar6 + (int)fStack_14;
              pfVar13 = pfVar14 + (int)fStack_14;
              pfVar15 = pfVar14 + iVar6 + (int)fStack_14;
              local_7c = SUB84 /* extract 2-byte value */((double)fVar18,0);
              local_6c = SUB84 /* extract 2-byte value */((double)fVar19,0);
              dVar26 = (double)fVar25;
              dVar5 = (double)fVar21;
              do {
                uStack_80 = (uint)((ulonglong)dVar26 >> 0x20);
                local_84 = SUB84 /* extract 2-byte value */(dVar26,0);
                fVar23 = fVar22 * (float10)dVar26 - (float10)(double)CONCAT44 /* combine 2-byte values */(uStack_78,local_7c);
                dVar26 = (double)fVar23;
                fVar24 = fVar22 * (float10)(double)CONCAT44 /* combine 2-byte values */(uStack_68,local_6c) - (float10)dVar5;
                dVar3 = (double)fVar24;
                local_7c = local_84;
                uStack_78 = uStack_80;
                iVar17 = iVar17 + 1;
                fVar24 = fVar23 * (float10)*pfVar10 - fVar24 * (float10)*pfVar15;
                fVar23 = (float10)dVar3 * (float10)*pfVar10 + (float10)dVar26 * (float10)*pfVar15;
                *pfVar10 = (float)((float10)*pfVar8 - fVar24);
                dVar5 = (double)CONCAT44 /* combine 2-byte values */(uStack_68,local_6c);
                local_74 = SUB84 /* extract 2-byte value */(dVar3,0);
                *pfVar15 = (float)((float10)*pfVar13 - fVar23);
                local_6c = local_74;
                uStack_70 = (uint)((ulonglong)dVar3 >> 0x20);
                uStack_68 = uStack_70;
                *pfVar8 = (float)((float10)*pfVar8 + fVar24);
                *pfVar13 = (float)(fVar23 + (float10)*pfVar13);
                pfVar8 = pfVar8 + 1;
                pfVar10 = pfVar10 + 1;
                pfVar13 = pfVar13 + 1;
                pfVar15 = pfVar15 + 1;
              } while (iVar17 < iVar6);
            }
            fStack_14 = (float)((int)fStack_14 + local_28);
          } while ((int)fStack_14 < iVar9);
        }
        local_28 = local_28 * 2;
      } while (local_28 <= iVar9);
    }
    iVar9 = sound_sndmain_cpp_getMixBufferCount_FUN_005ab6d0();
    g_ChannelFFTTimestamps[channel] = iVar9;
  }
  iVar6 = g_MixBufferSize / 2;
  iVar9 = iVar6 + 1;
  dVar26 = crt_math_c_floor_FUN_005feb90
                     ((double)((freq_start_hz * (float)iVar9) / (float)g_AudioSampleRate));
  fVar25 = ((float10)freq_end_hz * (float10)fStack_14) / (float10)g_AudioSampleRate;
  dVar26 = crt_math_c_round_FUN_005fe6b0(dVar26);
  local_38 = (int)ROUND(dVar26);
  dVar26 = crt_math_c_floor_FUN_005feb90((double)fVar25);
  dVar26 = crt_math_c_round_FUN_005fe6b0(dVar26);
  local_3c = (int)ROUND(dVar26);
  if ((local_38 < iVar9) && (0 < local_3c)) {
    if (iVar9 <= local_3c) {
      local_3c = iVar9;
    }
    if (local_38 < 0) {
      local_38 = 0;
    }
    iVar17 = local_3c - local_38;
    if ((iVar17 < 1) && (iVar17 = 1, iVar9 <= local_3c)) {
      local_38 = iVar6;
    }
    iVar6 = 0;
    fVar4 = 0.0;
    if (0 < iVar17) {
      pfVar14 = g_ChannelSecondaryBuffersB[channel] + local_38;
      pfVar11 = g_ChannelSecondaryBuffersA[channel] + local_38;
      do {
        fVar1 = *pfVar11;
        fVar2 = *pfVar14;
        pfVar14 = pfVar14 + 1;
        pfVar11 = pfVar11 + 1;
        iVar6 = iVar6 + 1;
        fVar4 = SQRT(fVar2 * fVar2 + fVar1 * fVar1) + fVar4;
      } while (iVar6 < iVar17);
    }
    return (int)(SQRT((fVar4 / (float)iVar17) / (float)iVar9) * (float)2);
  }
  return 0;
}
