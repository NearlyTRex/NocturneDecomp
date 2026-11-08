// Name: FUN_00553b60
// Address: 00553b60
// Address Range: [[00553b60, 005540e8]]
// Convention: unknown
// Signature: float FUN_00553b60(int param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005540ba) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00553b60(int param_1,float param_2,float param_3)

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
  double local_50;
  int local_44;
  int local_40;
  int local_38;
  int local_34;
  int local_24;
  
  iVar20 = param_1 * 4;
  if ((((*(int *)(iVar20 + 0x2648ec8) == 0) || (*(int *)(iVar20 + 0x2648eec) == 0)) ||
      (*(int *)(iVar20 + 0x2648f0c) == 0)) || (_DAT_02648e98 < 1)) {
    return 0.0;
  }
  iVar11 = FUN_00552cb0();
  iVar14 = _DAT_02648e98;
  if (iVar11 != *(int *)(iVar20 + 0x263cef0)) {
    iVar11 = *(int *)(iVar20 + 0x2648eec);
    iVar5 = *(int *)(iVar20 + 0x2648f0c);
    puVar24 = *(uint **)(iVar20 + 0x2648ec8);
    for (local_34 = 1; 1 << ((byte)local_34 & 0x1f) < _DAT_02648e98; local_34 = local_34 + 1) {
    }
    uVar22 = 0;
    if (0 < _DAT_02648e98) {
      do {
        iVar20 = 0;
        uVar12 = 0;
        uVar17 = uVar22;
        if (0 < local_34) {
          do {
            iVar20 = iVar20 + 1;
            uVar12 = uVar12 * 2 | uVar17 & 1;
            uVar17 = (int)uVar17 >> 1;
          } while (iVar20 < local_34);
        }
        *(uint *)(iVar11 + uVar12 * 4) = *puVar24;
        *(uint *)(uVar12 * 4 + iVar5) = 0;
        uVar22 = uVar22 + 1;
        puVar24 = puVar24 + 1;
      } while ((int)uVar22 < iVar14);
    }
    local_38 = 2;
    if (1 < iVar14) {
      do {
        iVar20 = local_38 / 2;
        fVar25 = (float10)_DAT_005e93ae / (float10)iVar20;
        fVar32 = (float10)fcos(fVar25);
        fVar26 = (float10)fsin(fVar25);
        fVar27 = (float10)_DAT_005e93a6;
        fVar25 = fVar25 * fVar27;
        fVar28 = (float10)fsin(fVar25);
        fVar25 = (float10)fcos(fVar25);
        local_24 = 0;
        if (0 < iVar14) {
          do {
            iVar23 = 0;
            if (0 < iVar20) {
              fVar29 = (float10)(double)((float10)(double)fVar32 * fVar27);
              iVar15 = local_24 * 4;
              pfVar16 = (float *)(iVar5 + iVar15);
              pfVar19 = (float *)(iVar11 + iVar20 * 4 + iVar15);
              pfVar18 = (float *)(iVar11 + iVar15);
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
                *pfVar19 = (float)((float10)*pfVar18 - fVar31);
                *pfVar21 = (float)((float10)*pfVar16 - fVar30);
                *pfVar18 = (float)((float10)*pfVar18 + fVar31);
                *pfVar16 = (float)(fVar30 + (float10)*pfVar16);
                pfVar16 = pfVar16 + 1;
                pfVar19 = pfVar19 + 1;
                pfVar18 = pfVar18 + 1;
                pfVar21 = pfVar21 + 1;
                dVar9 = dVar8;
                dVar10 = dVar7;
              } while (iVar23 < iVar20);
            }
            local_24 = local_24 + local_38;
          } while (local_24 < iVar14);
        }
        local_38 = local_38 * 2;
      } while (local_38 <= iVar14);
    }
    uVar13 = FUN_00552cb0();
    *(uint *)(param_1 * 4 + 0x263cef0) = uVar13;
  }
  iVar14 = _DAT_02648e98 / 2;
  iVar20 = iVar14 + 1;
  local_50 = (double)FUN_005b84d0((double)((param_2 * (float)iVar20) / (float)DAT_0061bca0));
  fVar32 = (float10)local_50;
  fVar26 = ((float10)param_3 * (float10)iVar20) / (float10)DAT_0061bca0;
  FUN_005b7ff0();
  local_40 = (int)ROUND(fVar32);
  local_50 = (double)FUN_005b84d0((double)fVar26);
  fVar32 = (float10)local_50;
  FUN_005b7ff0();
  local_44 = (int)ROUND(fVar32);
  if ((local_40 < iVar20) && (0 < local_44)) {
    if (iVar20 <= local_44) {
      local_44 = iVar20;
    }
    if (local_40 < 0) {
      local_40 = 0;
    }
    iVar11 = local_44 - local_40;
    if ((iVar11 < 1) && (iVar11 = 1, iVar20 <= local_44)) {
      local_40 = iVar14;
    }
    iVar14 = 0;
    fVar6 = 0.0;
    if (0 < iVar11) {
      pfVar19 = (float *)(*(int *)(param_1 * 4 + 0x2648f0c) + local_40 * 4);
      pfVar16 = (float *)(*(int *)(param_1 * 4 + 0x2648eec) + local_40 * 4);
      do {
        fVar1 = *pfVar16;
        fVar2 = *pfVar19;
        pfVar19 = pfVar19 + 1;
        pfVar16 = pfVar16 + 1;
        iVar14 = iVar14 + 1;
        fVar6 = SQRT(fVar2 * fVar2 + fVar1 * fVar1) + fVar6;
      } while (iVar14 < iVar11);
    }
    return SQRT((fVar6 / (float)iVar11) / (float)iVar20) * (float)_DAT_005e93a6;
  }
  return 0.0;
}
