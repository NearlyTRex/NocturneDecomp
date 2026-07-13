// Name: FUN_004c3c90
// Address: 004c3c90
// Address Range: [[004c3c90, 004c407e]]
// Convention: unknown
// Signature: int FUN_004c3c90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004c3c90(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *extraout_ECX;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  int extraout_EDX;
  int iVar12;
  int *piVar13;
  uint *puVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  int local_1c;
  int *local_18;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_004c3aa0(param_1);
  }
  uVar8 = *(uint *)(param_1 + 0xc);
  uVar11 = (int)*(uint *)(param_1 + 0x10) >> 0x1f;
  uVar6 = *(uint *)(param_1 + 0x10) ^ uVar11;
  uVar7 = uVar6 / uVar8;
  if (0x7ffe < uVar7) {
    uVar7 = 0x7fff;
  }
  uVar11 = ((uint)(((ulonglong)uVar6 % (ulonglong)uVar8 << 0x20) / (ulonglong)uVar8) >> 0x10 |
           uVar7 << 0x10) ^ uVar11;
  iVar12 = (int)uVar11 >> 0x10;
  iVar15 = iVar12 + 1;
  *(int *)(param_1 + 0x10) = _DAT_01bd1d84 % (int)(*(int *)(param_1 + 8) * uVar8);
  if (*(int *)(param_1 + 8) <= iVar15) {
    iVar15 = 0;
  }
  local_1c = iVar15 + 1;
  if (*(int *)(param_1 + 8) <= local_1c) {
    local_1c = 0;
  }
  iVar18 = iVar12 + -1;
  if (iVar18 < 0) {
    iVar18 = *(int *)(param_1 + 8) + -1;
  }
  iVar5 = *(int *)(param_1 + 0x14);
  if (*(int *)(iVar5 + 8) != 2) {
    _DAT_01cc4800 = "..\\engine\\keyframe.c";
    _DAT_01cc4804 = 0x16b;
    FUN_004c8440("Bad keyframe 1");
  }
  local_18 = (int *)(*(int *)(param_1 + 0x118 + iVar15 * 4) + 0x14);
  iVar15 = local_1c * 4;
  fVar19 = (float10)(uVar11 & 0xffff) * (float10)_DAT_0058767c;
  fVar20 = fVar19 * fVar19;
  fVar21 = fVar20 * fVar19;
  fVar22 = ((fVar21 * (float10)_DAT_00587684 + fVar20) -
           (float10)(float)(fVar19 * (float10)_DAT_00587688)) * (float10)_DAT_0058768c;
  fVar23 = (fVar21 * (float10)_DAT_00587688 - fVar20 * (float10)_DAT_00587688) *
           (float10)_DAT_0058768c;
  fVar24 = ((float10)1 + fVar20 * (float10)_DAT_00587698 + fVar21 * (float10)_DAT_00587694) *
           (float10)_DAT_0058768c;
  fVar19 = (fVar21 * (float10)_DAT_005876a0 + fVar20 * (float10)_DAT_0058769c +
           (float10)(float)(fVar19 * (float10)_DAT_00587688)) * (float10)_DAT_0058768c;
  piVar13 = (int *)(*(int *)(iVar12 * 4 + param_1 + 0x118) + 0x14);
  local_1c = 0;
  piVar16 = (int *)(*(int *)(iVar15 + param_1 + 0x118) + 0x14);
  piVar17 = (int *)(*(int *)(iVar18 * 4 + param_1 + 0x118) + 0x14);
  FUN_00563a30();
  iVar15 = (int)ROUND(fVar23);
  FUN_00563a30();
  FUN_00563a30();
  FUN_00563a30();
  iVar12 = (int)ROUND(fVar22);
  iVar18 = (int)ROUND(fVar24);
  iVar4 = (int)ROUND(fVar19);
  piVar9 = extraout_ECX;
  piVar10 = extraout_ECX;
  if (0 < extraout_EDX) {
    do {
      *piVar9 = ((uint)((longlong)iVar12 * (longlong)*piVar17) >> 0x10 |
                (int)((ulonglong)((longlong)iVar12 * (longlong)*piVar17) >> 0x20) << 0x10) +
                ((uint)((longlong)iVar18 * (longlong)*piVar13) >> 0x10 |
                (int)((ulonglong)((longlong)iVar18 * (longlong)*piVar13) >> 0x20) << 0x10) +
                ((uint)((longlong)iVar4 * (longlong)*local_18) >> 0x10 |
                (int)((ulonglong)((longlong)iVar4 * (longlong)*local_18) >> 0x20) << 0x10) +
                ((uint)((longlong)iVar15 * (longlong)*piVar16) >> 0x10 |
                (int)((ulonglong)((longlong)iVar15 * (longlong)*piVar16) >> 0x20) << 0x10);
      piVar9[1] = ((uint)((longlong)iVar12 * (longlong)piVar17[1]) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar12 * (longlong)piVar17[1]) >> 0x20) << 0x10) +
                  ((uint)((longlong)iVar18 * (longlong)piVar13[1]) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar18 * (longlong)piVar13[1]) >> 0x20) << 0x10) +
                  ((uint)((longlong)iVar4 * (longlong)local_18[1]) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar4 * (longlong)local_18[1]) >> 0x20) << 0x10) +
                  ((uint)((longlong)iVar15 * (longlong)piVar16[1]) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar15 * (longlong)piVar16[1]) >> 0x20) << 0x10);
      piVar1 = piVar17 + 2;
      piVar2 = piVar13 + 2;
      piVar17 = piVar17 + 3;
      piVar13 = piVar13 + 3;
      piVar3 = piVar16 + 2;
      piVar16 = piVar16 + 3;
      piVar10 = piVar9 + 3;
      piVar9[2] = ((uint)((longlong)iVar12 * (longlong)*piVar1) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar12 * (longlong)*piVar1) >> 0x20) << 0x10) +
                  ((uint)((longlong)iVar18 * (longlong)*piVar2) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar18 * (longlong)*piVar2) >> 0x20) << 0x10) +
                  ((uint)((longlong)iVar4 * (longlong)local_18[2]) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar4 * (longlong)local_18[2]) >> 0x20) << 0x10) +
                  ((uint)((longlong)iVar15 * (longlong)*piVar3) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar15 * (longlong)*piVar3) >> 0x20) << 0x10);
      local_1c = local_1c + 1;
      local_18 = local_18 + 3;
      piVar9 = piVar10;
    } while (local_1c < *(int *)(iVar5 + 0x10));
  }
  if (*piVar10 != 0x17) {
    _DAT_01cc4800 = "..\\engine\\keyframe.c";
    _DAT_01cc4804 = 0x1a6;
    FUN_004c8440("ZBP not found!");
  }
  puVar14 = (uint *)(piVar10 + 3);
  iVar15 = *(int *)(param_1 + 0x14) + 0x14;
  do {
    uVar8 = *puVar14;
    if (0x17 < uVar8) {
      if (uVar8 < 0x19) {
        FUN_004c3920(iVar15,puVar14);
      }
      else if (uVar8 == 0x19) {
        FUN_004c3760(iVar15,puVar14);
      }
    }
    uVar8 = FUN_004dd520(puVar14);
    puVar14 = (uint *)((int)puVar14 + (uVar8 & 0xfffffffc));
  } while (*puVar14 != 0);
  FUN_00408e80(*(uint *)(param_1 + 0x14));
  return param_1 + 0x158;
}
