// Name: FUN_00528e60
// Address: 00528e60
// Address Range: [[00528e60, 005293e5]]
// Convention: unknown
// Signature: float FUN_00528e60(int param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005293b7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00528e60(int param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  uint uVar17;
  float *pfVar18;
  float *pfVar19;
  int iVar20;
  float *pfVar21;
  uint uVar22;
  int iVar23;
  uint *puVar24;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  float10 fVar30;
  float10 fVar31;
  float10 fVar32;
  double local_4c;
  int local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_1c;
  
  iVar20 = param_1 * 4;
  if ((((*(int *)(iVar20 + 0x2dc8360) == 0) || (*(int *)(iVar20 + 0x2dc8384) == 0)) ||
      (*(int *)(iVar20 + 0x2dc83a4) == 0)) || (_DAT_02dc8330 < 1)) {
    return 0.0;
  }
  iVar11 = FUN_00528620();
  iVar14 = _DAT_02dc8330;
  if (iVar11 != *(int *)(iVar20 + 0x2dbd350)) {
    iVar11 = *(int *)(iVar20 + 0x2dc8384);
    iVar5 = *(int *)(iVar20 + 0x2dc83a4);
    puVar24 = *(uint **)(iVar20 + 0x2dc8360);
    for (local_2c = 1; 1 << ((byte)local_2c & 0x1f) < _DAT_02dc8330; local_2c = local_2c + 1) {
    }
    uVar22 = 0;
    if (0 < _DAT_02dc8330) {
      do {
        iVar20 = 0;
        uVar12 = 0;
        uVar17 = uVar22;
        if (0 < local_2c) {
          do {
            iVar20 = iVar20 + 1;
            uVar12 = uVar12 * 2 | uVar17 & 1;
            uVar17 = (int)uVar17 >> 1;
          } while (iVar20 < local_2c);
        }
        *(uint *)(iVar11 + uVar12 * 4) = *puVar24;
        *(uint *)(uVar12 * 4 + iVar5) = 0;
        uVar22 = uVar22 + 1;
        puVar24 = puVar24 + 1;
      } while ((int)uVar22 < iVar14);
    }
    local_30 = 2;
    if (1 < iVar14) {
      do {
        iVar20 = local_30 / 2;
        fVar25 = (float10)_DAT_00593aee / (float10)iVar20;
        fVar32 = (float10)fcos(fVar25);
        fVar26 = (float10)fsin(fVar25);
        fVar27 = (float10)_DAT_00593ae6;
        fVar25 = fVar25 * fVar27;
        fVar28 = (float10)fsin(fVar25);
        fVar25 = (float10)fcos(fVar25);
        local_1c = 0;
        if (0 < iVar14) {
          do {
            iVar23 = 0;
            if (0 < iVar20) {
              fVar29 = (float10)(double)((float10)(double)fVar32 * fVar27);
              iVar15 = local_1c * 4;
              pfVar16 = (float *)(iVar11 + iVar15);
              pfVar19 = (float *)(iVar11 + iVar20 * 4 + iVar15);
              pfVar18 = (float *)(iVar5 + iVar15);
              pfVar21 = (float *)(iVar5 + iVar20 * 4 + iVar15);
              dVar3 = (double)fVar32;
              dVar4 = (double)fVar26;
              dVar9 = (double)fVar28;
              dVar10 = (double)fVar25;
              do {
                dVar8 = dVar4;
                dVar7 = dVar3;
                fVar30 = fVar29 * (float10)dVar7 - (float10)dVar10;
                dVar3 = (double)fVar30;
                fVar31 = fVar29 * (float10)dVar8 - (float10)dVar9;
                dVar4 = (double)fVar31;
                iVar23 = iVar23 + 1;
                fVar31 = fVar30 * (float10)*pfVar19 - fVar31 * (float10)*pfVar21;
                fVar30 = (float10)dVar4 * (float10)*pfVar19 + (float10)dVar3 * (float10)*pfVar21;
                *pfVar19 = (float)((float10)*pfVar16 - fVar31);
                *pfVar21 = (float)((float10)*pfVar18 - fVar30);
                *pfVar16 = (float)((float10)*pfVar16 + fVar31);
                *pfVar18 = (float)(fVar30 + (float10)*pfVar18);
                pfVar16 = pfVar16 + 1;
                pfVar19 = pfVar19 + 1;
                pfVar18 = pfVar18 + 1;
                pfVar21 = pfVar21 + 1;
                dVar9 = dVar8;
                dVar10 = dVar7;
              } while (iVar23 < iVar20);
            }
            local_1c = local_1c + local_30;
          } while (local_1c < iVar14);
        }
        local_30 = local_30 * 2;
      } while (local_30 <= iVar14);
    }
    uVar13 = FUN_00528620();
    *(uint *)(param_1 * 4 + 0x2dbd350) = uVar13;
  }
  iVar14 = _DAT_02dc8330 / 2;
  iVar20 = iVar14 + 1;
  local_4c = (double)FUN_005648c0((double)((param_2 * (float)iVar20) / (float)DAT_005bea6c));
  fVar32 = (float10)local_4c;
  fVar26 = ((float10)param_3 * (float10)iVar20) / (float10)DAT_005bea6c;
  FUN_00563a30();
  local_38 = (int)ROUND(fVar32);
  local_4c = (double)FUN_005648c0((double)fVar26);
  fVar32 = (float10)local_4c;
  FUN_00563a30();
  local_3c = (int)ROUND(fVar32);
  if ((local_38 < iVar20) && (0 < local_3c)) {
    if (iVar20 <= local_3c) {
      local_3c = iVar20;
    }
    if (local_38 < 0) {
      local_38 = 0;
    }
    iVar11 = local_3c - local_38;
    if ((iVar11 < 1) && (iVar11 = 1, iVar20 <= local_3c)) {
      local_38 = iVar14;
    }
    iVar14 = 0;
    fVar6 = 0.0;
    if (0 < iVar11) {
      pfVar19 = (float *)(*(int *)(param_1 * 4 + 0x2dc83a4) + local_38 * 4);
      pfVar16 = (float *)(*(int *)(param_1 * 4 + 0x2dc8384) + local_38 * 4);
      do {
        fVar1 = *pfVar16;
        fVar2 = *pfVar19;
        pfVar19 = pfVar19 + 1;
        pfVar16 = pfVar16 + 1;
        iVar14 = iVar14 + 1;
        fVar6 = SQRT(fVar2 * fVar2 + fVar1 * fVar1) + fVar6;
      } while (iVar14 < iVar11);
    }
    return SQRT((fVar6 / (float)iVar11) / (float)iVar20) * (float)_DAT_00593ae6;
  }
  return 0.0;
}
