// Name: sound_sndmain.cpp_analyzeFrequencyBand_FUN_00528e60
// Address: 00528e60
// Address Range: [[00528e60, 005293e5]]
// Convention: __cdecl
// Signature: float __cdecl sound_sndmain_cpp_analyzeFrequencyBand_FUN_00528e60(int channel,float freq_start_hz,float freq_end_hz)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005293b7) */

float __cdecl sound_sndmain_cpp_analyzeFrequencyBand_FUN_00528e60(int channel,float freq_start_hz,float freq_end_hz)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float10 fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
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
  double dVar27;
  uint local_8c;
  uint uStack_88;
  uint local_84;
  uint uStack_80;
  uint uStack_48;
  int local_44;
  int local_40;
  int local_30;
  int local_2c;
  int local_1c;
  
  if ((((g_FLOAT_PTR_ARRAY_02dc8360[channel] == (float *)0x0) ||
       (g_FLOAT_PTR_ARRAY_02dc8384[channel] == (float *)0x0)) ||
      (g_FLOAT_PTR_ARRAY_02dc83a4[channel] == (float *)0x0)) || (g_INT_02dc8330 < 1)) {
    return 0.0;
  }
  iVar8 = sound_sndmain_cpp_getMixBufferCount_FUN_00528620();
  iVar11 = g_INT_02dc8330;
  if (iVar8 != g_INT_ARRAY_02dbd350[channel]) {
    pfVar13 = g_FLOAT_PTR_ARRAY_02dc8384[channel];
    pfVar16 = g_FLOAT_PTR_ARRAY_02dc83a4[channel];
    pfVar10 = g_FLOAT_PTR_ARRAY_02dc8360[channel];
    for (local_2c = 1; 1 << ((byte)local_2c & 0x1f) < g_INT_02dc8330; local_2c = local_2c + 1) {
    }
    uVar18 = 0;
    if (0 < g_INT_02dc8330) {
      do {
        iVar8 = 0;
        uVar9 = 0;
        uVar14 = uVar18;
        if (0 < local_2c) {
          do {
            iVar8 = iVar8 + 1;
            uVar9 = uVar9 * 2 | uVar14 & 1;
            uVar14 = (int)uVar14 >> 1;
          } while (iVar8 < local_2c);
        }
        pfVar13[uVar9] = *pfVar10;
        pfVar16[uVar9] = 0.0;
        uVar18 = uVar18 + 1;
        pfVar10 = pfVar10 + 1;
      } while ((int)uVar18 < iVar11);
    }
    local_30 = 2;
    if (1 < iVar11) {
      do {
        iVar8 = local_30 / 2;
        fVar20 = (float10)3.1415926535000001 / (float10)iVar8;
        fVar4 = (float10)fcos(fVar20);
        fVar21 = (float10)fsin(fVar20);
        fVar22 = (float10)2;
        fVar20 = fVar20 * fVar22;
        fVar23 = (float10)fsin(fVar20);
        fVar20 = (float10)fcos(fVar20);
        uStack_48 = (uint)((ulonglong)(double)fVar20 >> 0x20);
        local_1c = 0;
        if (0 < iVar11) {
          do {
            uStack_80 = uStack_48;
            iVar19 = 0;
            if (0 < iVar8) {
              fVar24 = (float10)(double)((float10)(double)fVar4 * fVar22);
              pfVar10 = pfVar13 + local_1c;
              pfVar12 = pfVar13 + iVar8 + local_1c;
              pfVar15 = pfVar16 + local_1c;
              pfVar17 = pfVar16 + iVar8 + local_1c;
              local_84 = SUB84(__BITCAST_UINT64((double)fVar20),0);
              dVar27 = (double)fVar4;
              dVar3 = (double)fVar21;
              dVar7 = (double)fVar23;
              do {
                dVar6 = dVar3;
                uStack_88 = (uint)((ulonglong)dVar27 >> 0x20);
                local_8c = SUB84(__BITCAST_UINT64(dVar27),0);
                fVar25 = fVar24 * (float10)dVar27 - (float10)__BITCAST_DOUBLE(CONCAT44(uStack_80,local_84));
                dVar27 = (double)fVar25;
                fVar26 = fVar24 * (float10)dVar6 - (float10)dVar7;
                dVar3 = (double)fVar26;
                local_84 = local_8c;
                uStack_80 = uStack_88;
                iVar19 = iVar19 + 1;
                fVar26 = fVar25 * (float10)*pfVar12 - fVar26 * (float10)*pfVar17;
                fVar25 = (float10)dVar3 * (float10)*pfVar12 + (float10)dVar27 * (float10)*pfVar17;
                *pfVar12 = (float)((float10)*pfVar10 - fVar26);
                *pfVar17 = (float)((float10)*pfVar15 - fVar25);
                *pfVar10 = (float)((float10)*pfVar10 + fVar26);
                *pfVar15 = (float)(fVar25 + (float10)*pfVar15);
                pfVar10 = pfVar10 + 1;
                pfVar12 = pfVar12 + 1;
                pfVar15 = pfVar15 + 1;
                pfVar17 = pfVar17 + 1;
                dVar7 = dVar6;
              } while (iVar19 < iVar8);
            }
            local_1c = local_1c + local_30;
          } while (local_1c < iVar11);
        }
        local_30 = local_30 * 2;
      } while (local_30 <= iVar11);
    }
    iVar11 = sound_sndmain_cpp_getMixBufferCount_FUN_00528620();
    g_INT_ARRAY_02dbd350[channel] = iVar11;
  }
  iVar8 = g_INT_02dc8330 / 2;
  iVar11 = iVar8 + 1;
  dVar27 = floor
                     ((double)((freq_start_hz * (float)iVar11) / (float)g_INT_005bea6c));
  fVar5 = (float)g_INT_005bea6c;
  round(dVar27);
  dVar27 = floor((double)((freq_end_hz * (float)iVar11) / fVar5));
  dVar27 = round(dVar27);
  local_44 = (int)ROUND(dVar27);
  if ((local_40 < iVar11) && (0 < local_44)) {
    if (iVar11 <= local_44) {
      local_44 = iVar11;
    }
    if (local_40 < 0) {
      local_40 = 0;
    }
    iVar19 = local_44 - local_40;
    if ((iVar19 < 1) && (iVar19 = 1, iVar11 <= local_44)) {
      local_40 = iVar8;
    }
    iVar8 = 0;
    fVar5 = 0.0;
    if (0 < iVar19) {
      pfVar16 = g_FLOAT_PTR_ARRAY_02dc83a4[channel] + local_40;
      pfVar13 = g_FLOAT_PTR_ARRAY_02dc8384[channel] + local_40;
      do {
        fVar1 = *pfVar13;
        fVar2 = *pfVar16;
        pfVar16 = pfVar16 + 1;
        pfVar13 = pfVar13 + 1;
        iVar8 = iVar8 + 1;
        fVar5 = SQRT(fVar2 * fVar2 + fVar1 * fVar1) + fVar5;
      } while (iVar8 < iVar19);
    }
    return SQRT((fVar5 / (float)iVar19) / (float)iVar11) * (float)2;
  }
  return 0.0;
}
