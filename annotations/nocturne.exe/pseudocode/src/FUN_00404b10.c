// Name: FUN_00404b10
// Address: 00404b10
// Address Range: [[00404b10, 00405138]]
// Convention: unknown
// Signature: int FUN_00404b10(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00404b10(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  
  iVar16 = _DAT_01c03a08;
  iVar15 = _DAT_01c03a04;
  iVar14 = _DAT_01c03a00;
  iVar13 = _DAT_01c039fc;
  iVar12 = _DAT_01c039f8;
  iVar11 = _DAT_01c039f4;
  iVar10 = _DAT_01c039f0;
  iVar9 = _DAT_01c039ec;
  iVar8 = _DAT_01c039e8;
  iVar7 = _DAT_01c039e4;
  iVar6 = _DAT_01c039e0;
  iVar5 = _DAT_01c039dc;
  iVar4 = _DAT_01c039c0;
  iVar3 = _DAT_01c039bc;
  iVar2 = _DAT_01c039b8;
  iVar17 = _DAT_01c039b8 - *(int *)(param_1 + 0x14);
  iVar18 = _DAT_01c039bc - *(int *)(param_1 + 0x18);
  iVar19 = _DAT_01c039c0 - *(int *)(param_1 + 0x1c);
  iVar20 = FUN_004cca60(*(uint *)(param_1 + 8));
  iVar21 = FUN_004ccaa0(*(uint *)(param_1 + 8));
  iVar22 = FUN_004cca60(*(uint *)(param_1 + 0xc));
  iVar23 = FUN_004ccaa0(*(uint *)(param_1 + 0xc));
  iVar24 = FUN_004cca60(*(uint *)(param_1 + 0x10));
  iVar25 = FUN_004ccaa0(*(uint *)(param_1 + 0x10));
  lVar1 = (longlong)
          (int)((uint)((longlong)iVar22 * (longlong)iVar20) >> 0x10 |
               (int)((ulonglong)((longlong)iVar22 * (longlong)iVar20) >> 0x20) << 0x10) *
          (longlong)iVar24;
  iVar31 = ((uint)((longlong)iVar23 * (longlong)iVar25) >> 0x10 |
           (int)((ulonglong)((longlong)iVar23 * (longlong)iVar25) >> 0x20) << 0x10) +
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  lVar1 = (longlong)
          (int)((uint)((longlong)iVar23 * (longlong)iVar20) >> 0x10 |
               (int)((ulonglong)((longlong)iVar23 * (longlong)iVar20) >> 0x20) << 0x10) *
          (longlong)iVar24;
  iVar32 = ((uint)((longlong)iVar22 * (longlong)-iVar25) >> 0x10 |
           (int)((ulonglong)((longlong)iVar22 * (longlong)-iVar25) >> 0x20) << 0x10) +
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  uVar26 = (uint)((longlong)iVar21 * (longlong)iVar24) >> 0x10 |
           (int)((ulonglong)((longlong)iVar21 * (longlong)iVar24) >> 0x20) << 0x10;
  uVar27 = (uint)((longlong)iVar21 * (longlong)iVar22) >> 0x10 |
           (int)((ulonglong)((longlong)iVar21 * (longlong)iVar22) >> 0x20) << 0x10;
  uVar28 = (uint)((longlong)iVar21 * (longlong)iVar23) >> 0x10 |
           (int)((ulonglong)((longlong)iVar21 * (longlong)iVar23) >> 0x20) << 0x10;
  iVar29 = -iVar20;
  lVar1 = (longlong)
          (int)((uint)((longlong)iVar22 * (longlong)iVar20) >> 0x10 |
               (int)((ulonglong)((longlong)iVar22 * (longlong)iVar20) >> 0x20) << 0x10) *
          (longlong)iVar25;
  iVar33 = ((uint)((longlong)iVar23 * (longlong)-iVar24) >> 0x10 |
           (int)((ulonglong)((longlong)iVar23 * (longlong)-iVar24) >> 0x20) << 0x10) +
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  lVar1 = (longlong)
          (int)((uint)((longlong)iVar23 * (longlong)iVar20) >> 0x10 |
               (int)((ulonglong)((longlong)iVar23 * (longlong)iVar20) >> 0x20) << 0x10) *
          (longlong)iVar25;
  iVar20 = ((uint)((longlong)iVar24 * (longlong)iVar22) >> 0x10 |
           (int)((ulonglong)((longlong)iVar24 * (longlong)iVar22) >> 0x20) << 0x10) +
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  uVar30 = (uint)((longlong)iVar21 * (longlong)iVar25) >> 0x10 |
           (int)((ulonglong)((longlong)iVar21 * (longlong)iVar25) >> 0x20) << 0x10;
  _DAT_01c039b8 =
       ((uint)((longlong)iVar31 * (longlong)iVar17) >> 0x10 |
       (int)((ulonglong)((longlong)iVar31 * (longlong)iVar17) >> 0x20) << 0x10) +
       ((uint)((longlong)(int)uVar27 * (longlong)iVar18) >> 0x10 |
       (int)((ulonglong)((longlong)(int)uVar27 * (longlong)iVar18) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar33 * (longlong)iVar19) >> 0x10 |
       (int)((ulonglong)((longlong)iVar33 * (longlong)iVar19) >> 0x20) << 0x10);
  _DAT_01c039bc =
       ((uint)((longlong)iVar32 * (longlong)iVar17) >> 0x10 |
       (int)((ulonglong)((longlong)iVar32 * (longlong)iVar17) >> 0x20) << 0x10) +
       ((uint)((longlong)(int)uVar28 * (longlong)iVar18) >> 0x10 |
       (int)((ulonglong)((longlong)(int)uVar28 * (longlong)iVar18) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar20 * (longlong)iVar19) >> 0x10 |
       (int)((ulonglong)((longlong)iVar20 * (longlong)iVar19) >> 0x20) << 0x10);
  _DAT_01c039c0 =
       ((uint)((longlong)(int)uVar26 * (longlong)iVar17) >> 0x10 |
       (int)((ulonglong)((longlong)(int)uVar26 * (longlong)iVar17) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar29 * (longlong)iVar18) >> 0x10 |
       (int)((ulonglong)((longlong)iVar29 * (longlong)iVar18) >> 0x20) << 0x10) +
       ((uint)((longlong)(int)uVar30 * (longlong)iVar19) >> 0x10 |
       (int)((ulonglong)((longlong)(int)uVar30 * (longlong)iVar19) >> 0x20) << 0x10);
  _DAT_01c039dc =
       ((uint)((longlong)iVar31 * (longlong)iVar5) >> 0x10 |
       (int)((ulonglong)((longlong)iVar31 * (longlong)iVar5) >> 0x20) << 0x10) +
       ((uint)((longlong)(int)uVar27 * (longlong)iVar6) >> 0x10 |
       (int)((ulonglong)((longlong)(int)uVar27 * (longlong)iVar6) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar33 * (longlong)iVar7) >> 0x10 |
       (int)((ulonglong)((longlong)iVar33 * (longlong)iVar7) >> 0x20) << 0x10);
  _DAT_01c039e0 =
       ((uint)((longlong)iVar32 * (longlong)iVar5) >> 0x10 |
       (int)((ulonglong)((longlong)iVar32 * (longlong)iVar5) >> 0x20) << 0x10) +
       ((uint)((longlong)(int)uVar28 * (longlong)iVar6) >> 0x10 |
       (int)((ulonglong)((longlong)(int)uVar28 * (longlong)iVar6) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar20 * (longlong)iVar7) >> 0x10 |
       (int)((ulonglong)((longlong)iVar20 * (longlong)iVar7) >> 0x20) << 0x10);
  _DAT_01c039e4 =
       ((uint)((longlong)(int)uVar26 * (longlong)iVar5) >> 0x10 |
       (int)((ulonglong)((longlong)(int)uVar26 * (longlong)iVar5) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar29 * (longlong)iVar6) >> 0x10 |
       (int)((ulonglong)((longlong)iVar29 * (longlong)iVar6) >> 0x20) << 0x10) +
       ((uint)((longlong)(int)uVar30 * (longlong)iVar7) >> 0x10 |
       (int)((ulonglong)((longlong)(int)uVar30 * (longlong)iVar7) >> 0x20) << 0x10);
  _DAT_01c039e8 =
       ((uint)((longlong)iVar8 * (longlong)iVar31) >> 0x10 |
       (int)((ulonglong)((longlong)iVar8 * (longlong)iVar31) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar11 * (longlong)(int)uVar27) >> 0x10 |
       (int)((ulonglong)((longlong)iVar11 * (longlong)(int)uVar27) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar14 * (longlong)iVar33) >> 0x10 |
       (int)((ulonglong)((longlong)iVar14 * (longlong)iVar33) >> 0x20) << 0x10);
  _DAT_01c039ec =
       ((uint)((longlong)iVar9 * (longlong)iVar31) >> 0x10 |
       (int)((ulonglong)((longlong)iVar9 * (longlong)iVar31) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar12 * (longlong)(int)uVar27) >> 0x10 |
       (int)((ulonglong)((longlong)iVar12 * (longlong)(int)uVar27) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar15 * (longlong)iVar33) >> 0x10 |
       (int)((ulonglong)((longlong)iVar15 * (longlong)iVar33) >> 0x20) << 0x10);
  _DAT_01c039f0 =
       ((uint)((longlong)iVar10 * (longlong)iVar31) >> 0x10 |
       (int)((ulonglong)((longlong)iVar10 * (longlong)iVar31) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar13 * (longlong)(int)uVar27) >> 0x10 |
       (int)((ulonglong)((longlong)iVar13 * (longlong)(int)uVar27) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar16 * (longlong)iVar33) >> 0x10 |
       (int)((ulonglong)((longlong)iVar16 * (longlong)iVar33) >> 0x20) << 0x10);
  _DAT_01c039f4 =
       ((uint)((longlong)iVar8 * (longlong)iVar32) >> 0x10 |
       (int)((ulonglong)((longlong)iVar8 * (longlong)iVar32) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar11 * (longlong)(int)uVar28) >> 0x10 |
       (int)((ulonglong)((longlong)iVar11 * (longlong)(int)uVar28) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar14 * (longlong)iVar20) >> 0x10 |
       (int)((ulonglong)((longlong)iVar14 * (longlong)iVar20) >> 0x20) << 0x10);
  _DAT_01c039f8 =
       ((uint)((longlong)iVar9 * (longlong)iVar32) >> 0x10 |
       (int)((ulonglong)((longlong)iVar9 * (longlong)iVar32) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar12 * (longlong)(int)uVar28) >> 0x10 |
       (int)((ulonglong)((longlong)iVar12 * (longlong)(int)uVar28) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar15 * (longlong)iVar20) >> 0x10 |
       (int)((ulonglong)((longlong)iVar15 * (longlong)iVar20) >> 0x20) << 0x10);
  _DAT_01c039fc =
       ((uint)((longlong)iVar10 * (longlong)iVar32) >> 0x10 |
       (int)((ulonglong)((longlong)iVar10 * (longlong)iVar32) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar13 * (longlong)(int)uVar28) >> 0x10 |
       (int)((ulonglong)((longlong)iVar13 * (longlong)(int)uVar28) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar16 * (longlong)iVar20) >> 0x10 |
       (int)((ulonglong)((longlong)iVar16 * (longlong)iVar20) >> 0x20) << 0x10);
  _DAT_01c03a00 =
       ((uint)((longlong)iVar8 * (longlong)(int)uVar26) >> 0x10 |
       (int)((ulonglong)((longlong)iVar8 * (longlong)(int)uVar26) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar11 * (longlong)iVar29) >> 0x10 |
       (int)((ulonglong)((longlong)iVar11 * (longlong)iVar29) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar14 * (longlong)(int)uVar30) >> 0x10 |
       (int)((ulonglong)((longlong)iVar14 * (longlong)(int)uVar30) >> 0x20) << 0x10);
  _DAT_01c03a04 =
       ((uint)((longlong)iVar9 * (longlong)(int)uVar26) >> 0x10 |
       (int)((ulonglong)((longlong)iVar9 * (longlong)(int)uVar26) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar12 * (longlong)iVar29) >> 0x10 |
       (int)((ulonglong)((longlong)iVar12 * (longlong)iVar29) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar15 * (longlong)(int)uVar30) >> 0x10 |
       (int)((ulonglong)((longlong)iVar15 * (longlong)(int)uVar30) >> 0x20) << 0x10);
  _DAT_01c03a08 =
       ((uint)((longlong)iVar10 * (longlong)(int)uVar26) >> 0x10 |
       (int)((ulonglong)((longlong)iVar10 * (longlong)(int)uVar26) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar13 * (longlong)iVar29) >> 0x10 |
       (int)((ulonglong)((longlong)iVar13 * (longlong)iVar29) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar16 * (longlong)(int)uVar30) >> 0x10 |
       (int)((ulonglong)((longlong)iVar16 * (longlong)(int)uVar30) >> 0x20) << 0x10);
  FUN_00408e80(param_1 + *(int *)(param_1 + 4));
  _DAT_01c039e8 = iVar8;
  _DAT_01c039ec = iVar9;
  _DAT_01c039f0 = iVar10;
  _DAT_01c039f4 = iVar11;
  _DAT_01c039f8 = iVar12;
  _DAT_01c039fc = iVar13;
  _DAT_01c03a00 = iVar14;
  _DAT_01c03a04 = iVar15;
  _DAT_01c03a08 = iVar16;
  _DAT_01c039b8 = iVar2;
  _DAT_01c039bc = iVar3;
  _DAT_01c039c0 = iVar4;
  _DAT_01c039dc = iVar5;
  _DAT_01c039e0 = iVar6;
  _DAT_01c039e4 = iVar7;
  return param_1 + 0x20;
}
