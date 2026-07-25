// Name: FUN_005214e0
// Address: 005214e0
// Address Range: [[005214e0, 00521820]]
// Convention: unknown
// Signature: void FUN_005214e0(undefined4 *param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00521816) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005214e0(uint *param_1,int param_2,int param_3,int param_4)

{
  double dVar1;
  double dVar2;
  float10 fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  uint uVar13;
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
  int local_30;
  int local_2c;
  int local_1c;
  
  for (local_2c = 1; 1 << ((byte)local_2c & 0x1f) < param_2; local_2c = local_2c + 1) {
  }
  uVar16 = 0;
  if (0 < param_2) {
    do {
      iVar10 = 0;
      uVar8 = 0;
      uVar13 = uVar16;
      if (0 < local_2c) {
        do {
          iVar10 = iVar10 + 1;
          uVar8 = uVar8 * 2 | uVar13 & 1;
          uVar13 = (int)uVar13 >> 1;
        } while (iVar10 < local_2c);
      }
      *(uint *)(param_3 + uVar8 * 4) = *param_1;
      *(uint *)(uVar8 * 4 + param_4) = 0;
      uVar16 = uVar16 + 1;
      param_1 = param_1 + 1;
    } while ((int)uVar16 < param_2);
  }
  local_30 = 2;
  if (1 < param_2) {
    do {
      iVar10 = local_30 / 2;
      fVar18 = (float10)_DAT_00592126 / (float10)iVar10;
      fVar3 = (float10)fcos(fVar18);
      fVar19 = (float10)fsin(fVar18);
      fVar20 = (float10)_DAT_0059211e;
      fVar18 = fVar18 * fVar20;
      fVar21 = (float10)fsin(fVar18);
      fVar18 = (float10)fcos(fVar18);
      local_1c = 0;
      if (0 < param_2) {
        do {
          iVar17 = 0;
          if (0 < iVar10) {
            fVar22 = (float10)(double)((float10)(double)fVar3 * fVar20);
            iVar11 = local_1c * 4;
            pfVar9 = (float *)(param_4 + iVar11);
            pfVar12 = (float *)(param_3 + iVar10 * 4 + iVar11);
            pfVar14 = (float *)(param_3 + iVar11);
            pfVar15 = (float *)(param_4 + iVar10 * 4 + iVar11);
            dVar1 = (double)fVar3;
            dVar5 = (double)fVar18;
            dVar2 = (double)fVar19;
            dVar7 = (double)fVar21;
            do {
              dVar6 = dVar2;
              dVar4 = dVar1;
              fVar23 = fVar22 * (float10)dVar4 - (float10)dVar5;
              dVar1 = (double)fVar23;
              fVar24 = fVar22 * (float10)dVar6 - (float10)dVar7;
              dVar2 = (double)fVar24;
              iVar17 = iVar17 + 1;
              fVar24 = fVar23 * (float10)*pfVar12 - fVar24 * (float10)*pfVar15;
              fVar23 = (float10)dVar2 * (float10)*pfVar12 + (float10)dVar1 * (float10)*pfVar15;
              *pfVar12 = (float)((float10)*pfVar14 - fVar24);
              *pfVar15 = (float)((float10)*pfVar9 - fVar23);
              *pfVar14 = (float)((float10)*pfVar14 + fVar24);
              *pfVar9 = (float)(fVar23 + (float10)*pfVar9);
              pfVar9 = pfVar9 + 1;
              pfVar12 = pfVar12 + 1;
              pfVar14 = pfVar14 + 1;
              pfVar15 = pfVar15 + 1;
              dVar5 = dVar4;
              dVar7 = dVar6;
            } while (iVar17 < iVar10);
          }
          local_1c = local_1c + local_30;
        } while (local_1c < param_2);
      }
      local_30 = local_30 * 2;
    } while (local_30 <= param_2);
  }
  return;
}
