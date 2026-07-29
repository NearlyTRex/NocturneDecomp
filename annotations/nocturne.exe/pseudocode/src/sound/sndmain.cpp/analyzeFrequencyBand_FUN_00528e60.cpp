// Name: sound_sndmain.cpp_analyzeFrequencyBand_FUN_00528e60
// Address: 00528e60
// Address Range: [[00528e60, 005293e5]]
// Convention: __cdecl
// Signature: float __cdecl sound_sndmain_cpp_analyzeFrequencyBand_FUN_00528e60(int channel,float freq_start_hz,float freq_end_hz)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005293b7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl sound_sndmain_cpp_analyzeFrequencyBand_FUN_00528e60(int channel,float freq_start_hz,float freq_end_hz)

{
  float fVar1;
  float fVar2;
  double dVar3;
  int iVar4;
  float10 fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  uint uVar14;
  float *pfVar15;
  float *pfVar16;
  int iVar17;
  float *pfVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  float10 fVar28;
  double dVar29;
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
  
  iVar17 = channel * 4;
  if ((((*(int *)(iVar17 + 0x2dc8360) == 0) || (*(int *)(iVar17 + 0x2dc8384) == 0)) ||
      (*(int *)(iVar17 + 0x2dc83a4) == 0)) || (_DAT_02dc8330 < 1)) {
    return 0.0;
  }
  iVar9 = sound_sndmain_cpp_getMixBufferCount_FUN_00528620();
  iVar11 = _DAT_02dc8330;
  if (iVar9 != *(int *)(iVar17 + 0x2dbd350)) {
    iVar9 = *(int *)(iVar17 + 0x2dc8384);
    iVar4 = *(int *)(iVar17 + 0x2dc83a4);
    puVar21 = *(uint **)(iVar17 + 0x2dc8360);
    for (local_2c = 1; 1 << ((byte)local_2c & 0x1f) < _DAT_02dc8330; local_2c = local_2c + 1) {
    }
    uVar19 = 0;
    if (0 < _DAT_02dc8330) {
      do {
        iVar17 = 0;
        uVar10 = 0;
        uVar14 = uVar19;
        if (0 < local_2c) {
          do {
            iVar17 = iVar17 + 1;
            uVar10 = uVar10 * 2 | uVar14 & 1;
            uVar14 = (int)uVar14 >> 1;
          } while (iVar17 < local_2c);
        }
        *(uint *)(iVar9 + uVar10 * 4) = *puVar21;
        *(uint *)(uVar10 * 4 + iVar4) = 0;
        uVar19 = uVar19 + 1;
        puVar21 = puVar21 + 1;
      } while ((int)uVar19 < iVar11);
    }
    local_30 = 2;
    if (1 < iVar11) {
      do {
        iVar17 = local_30 / 2;
        fVar22 = (float10)3.1415926535000001 / (float10)iVar17;
        fVar5 = (float10)fcos(fVar22);
        fVar23 = (float10)fsin(fVar22);
        fVar24 = (float10)2;
        fVar22 = fVar22 * fVar24;
        fVar25 = (float10)fsin(fVar22);
        fVar22 = (float10)fcos(fVar22);
        uStack_48 = (uint)((ulonglong)(double)fVar22 >> 0x20);
        local_1c = 0;
        if (0 < iVar11) {
          do {
            uStack_80 = uStack_48;
            iVar20 = 0;
            if (0 < iVar17) {
              fVar26 = (float10)(double)((float10)(double)fVar5 * fVar24);
              iVar12 = local_1c * 4;
              pfVar13 = (float *)(iVar9 + iVar12);
              pfVar16 = (float *)(iVar9 + iVar17 * 4 + iVar12);
              pfVar15 = (float *)(iVar4 + iVar12);
              pfVar18 = (float *)(iVar4 + iVar17 * 4 + iVar12);
              local_84 = SUB84(__BITCAST_UINT64((double)fVar22),0);
              dVar29 = (double)fVar5;
              dVar3 = (double)fVar23;
              dVar8 = (double)fVar25;
              do {
                dVar7 = dVar3;
                uStack_88 = (uint)((ulonglong)dVar29 >> 0x20);
                local_8c = SUB84(__BITCAST_UINT64(dVar29),0);
                fVar27 = fVar26 * (float10)dVar29 - (float10)__BITCAST_DOUBLE(CONCAT44(uStack_80,local_84));
                dVar29 = (double)fVar27;
                fVar28 = fVar26 * (float10)dVar7 - (float10)dVar8;
                dVar3 = (double)fVar28;
                local_84 = local_8c;
                uStack_80 = uStack_88;
                iVar20 = iVar20 + 1;
                fVar28 = fVar27 * (float10)*pfVar16 - fVar28 * (float10)*pfVar18;
                fVar27 = (float10)dVar3 * (float10)*pfVar16 + (float10)dVar29 * (float10)*pfVar18;
                *pfVar16 = (float)((float10)*pfVar13 - fVar28);
                *pfVar18 = (float)((float10)*pfVar15 - fVar27);
                *pfVar13 = (float)((float10)*pfVar13 + fVar28);
                *pfVar15 = (float)(fVar27 + (float10)*pfVar15);
                pfVar13 = pfVar13 + 1;
                pfVar16 = pfVar16 + 1;
                pfVar15 = pfVar15 + 1;
                pfVar18 = pfVar18 + 1;
                dVar8 = dVar7;
              } while (iVar20 < iVar17);
            }
            local_1c = local_1c + local_30;
          } while (local_1c < iVar11);
        }
        local_30 = local_30 * 2;
      } while (local_30 <= iVar11);
    }
    iVar17 = sound_sndmain_cpp_getMixBufferCount_FUN_00528620();
    *(int *)(channel * 4 + 0x2dbd350) = iVar17;
  }
  iVar11 = _DAT_02dc8330 / 2;
  iVar17 = iVar11 + 1;
  dVar29 = floor
                     ((double)((freq_start_hz * (float)iVar17) / (float)DAT_005bea6c));
  fVar6 = (float)DAT_005bea6c;
  round(dVar29);
  dVar29 = floor((double)((freq_end_hz * (float)iVar17) / fVar6));
  dVar29 = round(dVar29);
  local_44 = (int)ROUND(dVar29);
  if ((local_40 < iVar17) && (0 < local_44)) {
    if (iVar17 <= local_44) {
      local_44 = iVar17;
    }
    if (local_40 < 0) {
      local_40 = 0;
    }
    iVar9 = local_44 - local_40;
    if ((iVar9 < 1) && (iVar9 = 1, iVar17 <= local_44)) {
      local_40 = iVar11;
    }
    iVar11 = 0;
    fVar6 = 0.0;
    if (0 < iVar9) {
      pfVar16 = (float *)(*(int *)(channel * 4 + 0x2dc83a4) + local_40 * 4);
      pfVar13 = (float *)(*(int *)(channel * 4 + 0x2dc8384) + local_40 * 4);
      do {
        fVar1 = *pfVar13;
        fVar2 = *pfVar16;
        pfVar16 = pfVar16 + 1;
        pfVar13 = pfVar13 + 1;
        iVar11 = iVar11 + 1;
        fVar6 = SQRT(fVar2 * fVar2 + fVar1 * fVar1) + fVar6;
      } while (iVar11 < iVar9);
    }
    return SQRT((fVar6 / (float)iVar9) / (float)iVar17) * (float)2;
  }
  return 0.0;
}
