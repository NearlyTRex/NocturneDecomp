// Name: sound_sndmain.cpp_analyzeFrequencyBand_FUN_00528e60
// Address: 00528e60
// Address Range: [[00528e60, 005293e5]]
// Convention: unknown
// Signature: float sound_sndmain_cpp_analyzeFrequencyBand_FUN_00528e60(int param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005293b7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float sound_sndmain_cpp_analyzeFrequencyBand_FUN_00528e60(int param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  uint uVar15;
  float *pfVar16;
  float *pfVar17;
  int iVar18;
  float *pfVar19;
  uint uVar20;
  int iVar21;
  uint *puVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  float10 fVar30;
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
  
  iVar18 = param_1 * 4;
  if ((((*(int *)(iVar18 + 0x2dc8360) == 0) || (*(int *)(iVar18 + 0x2dc8384) == 0)) ||
      (*(int *)(iVar18 + 0x2dc83a4) == 0)) || (_DAT_02dc8330 < 1)) {
    return 0.0;
  }
  iVar9 = sound_sndmain_cpp_getMixBufferCount_FUN_00528620();
  iVar12 = _DAT_02dc8330;
  if (iVar9 != *(int *)(iVar18 + 0x2dbd350)) {
    iVar9 = *(int *)(iVar18 + 0x2dc8384);
    iVar5 = *(int *)(iVar18 + 0x2dc83a4);
    puVar22 = *(uint **)(iVar18 + 0x2dc8360);
    for (local_2c = 1; 1 << ((byte)local_2c & 0x1f) < _DAT_02dc8330; local_2c = local_2c + 1) {
    }
    uVar20 = 0;
    if (0 < _DAT_02dc8330) {
      do {
        iVar18 = 0;
        uVar10 = 0;
        uVar15 = uVar20;
        if (0 < local_2c) {
          do {
            iVar18 = iVar18 + 1;
            uVar10 = uVar10 * 2 | uVar15 & 1;
            uVar15 = (int)uVar15 >> 1;
          } while (iVar18 < local_2c);
        }
        *(uint *)(iVar9 + uVar10 * 4) = *puVar22;
        *(uint *)(uVar10 * 4 + iVar5) = 0;
        uVar20 = uVar20 + 1;
        puVar22 = puVar22 + 1;
      } while ((int)uVar20 < iVar12);
    }
    local_30 = 2;
    if (1 < iVar12) {
      do {
        iVar18 = local_30 / 2;
        fVar23 = (float10)_DAT_00593aee / (float10)iVar18;
        fVar30 = (float10)fcos(fVar23);
        fVar24 = (float10)fsin(fVar23);
        fVar25 = (float10)_DAT_00593ae6;
        fVar23 = fVar23 * fVar25;
        fVar26 = (float10)fsin(fVar23);
        fVar23 = (float10)fcos(fVar23);
        uStack_48 = (uint)((ulonglong)(double)fVar23 >> 0x20);
        local_1c = 0;
        if (0 < iVar12) {
          do {
            uStack_80 = uStack_48;
            iVar21 = 0;
            if (0 < iVar18) {
              fVar27 = (float10)(double)((float10)(double)fVar30 * fVar25);
              iVar13 = local_1c * 4;
              pfVar14 = (float *)(iVar9 + iVar13);
              pfVar17 = (float *)(iVar9 + iVar18 * 4 + iVar13);
              pfVar16 = (float *)(iVar5 + iVar13);
              pfVar19 = (float *)(iVar5 + iVar18 * 4 + iVar13);
              local_84 = SUB84(__BITCAST_UINT64((double)fVar23),0);
              dVar3 = (double)fVar30;
              dVar4 = (double)fVar24;
              dVar8 = (double)fVar26;
              do {
                dVar7 = dVar4;
                uStack_88 = (uint)((ulonglong)dVar3 >> 0x20);
                local_8c = SUB84(__BITCAST_UINT64(dVar3),0);
                fVar28 = fVar27 * (float10)dVar3 - (float10)__BITCAST_DOUBLE(CONCAT44(uStack_80,local_84));
                dVar3 = (double)fVar28;
                fVar29 = fVar27 * (float10)dVar7 - (float10)dVar8;
                dVar4 = (double)fVar29;
                local_84 = local_8c;
                uStack_80 = uStack_88;
                iVar21 = iVar21 + 1;
                fVar29 = fVar28 * (float10)*pfVar17 - fVar29 * (float10)*pfVar19;
                fVar28 = (float10)dVar4 * (float10)*pfVar17 + (float10)dVar3 * (float10)*pfVar19;
                *pfVar17 = (float)((float10)*pfVar14 - fVar29);
                *pfVar19 = (float)((float10)*pfVar16 - fVar28);
                *pfVar14 = (float)((float10)*pfVar14 + fVar29);
                *pfVar16 = (float)(fVar28 + (float10)*pfVar16);
                pfVar14 = pfVar14 + 1;
                pfVar17 = pfVar17 + 1;
                pfVar16 = pfVar16 + 1;
                pfVar19 = pfVar19 + 1;
                dVar8 = dVar7;
              } while (iVar21 < iVar18);
            }
            local_1c = local_1c + local_30;
          } while (local_1c < iVar12);
        }
        local_30 = local_30 * 2;
      } while (local_30 <= iVar12);
    }
    uVar11 = sound_sndmain_cpp_getMixBufferCount_FUN_00528620();
    *(uint *)(param_1 * 4 + 0x2dbd350) = uVar11;
  }
  iVar12 = _DAT_02dc8330 / 2;
  iVar18 = iVar12 + 1;
  dVar3 = (double)floor
                            ((double)((param_2 * (float)iVar18) / (float)DAT_005bea6c));
  fVar6 = (float)DAT_005bea6c;
  uVar11 = 0x52927b;
  round((float10)dVar3);
  dVar3 = (double)floor((double)((param_3 * (float)iVar18) / fVar6),uVar11);
  fVar30 = (float10)round((float10)dVar3);
  local_44 = (int)ROUND(fVar30);
  if ((local_40 < iVar18) && (0 < local_44)) {
    if (iVar18 <= local_44) {
      local_44 = iVar18;
    }
    if (local_40 < 0) {
      local_40 = 0;
    }
    iVar9 = local_44 - local_40;
    if ((iVar9 < 1) && (iVar9 = 1, iVar18 <= local_44)) {
      local_40 = iVar12;
    }
    iVar12 = 0;
    fVar6 = 0.0;
    if (0 < iVar9) {
      pfVar17 = (float *)(*(int *)(param_1 * 4 + 0x2dc83a4) + local_40 * 4);
      pfVar14 = (float *)(*(int *)(param_1 * 4 + 0x2dc8384) + local_40 * 4);
      do {
        fVar1 = *pfVar14;
        fVar2 = *pfVar17;
        pfVar17 = pfVar17 + 1;
        pfVar14 = pfVar14 + 1;
        iVar12 = iVar12 + 1;
        fVar6 = SQRT(fVar2 * fVar2 + fVar1 * fVar1) + fVar6;
      } while (iVar12 < iVar9);
    }
    return SQRT((fVar6 / (float)iVar9) / (float)iVar18) * (float)_DAT_00593ae6;
  }
  return 0.0;
}
