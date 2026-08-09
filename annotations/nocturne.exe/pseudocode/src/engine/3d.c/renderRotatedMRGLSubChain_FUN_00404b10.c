// Name: engine_3d.c_renderRotatedMRGLSubChain_FUN_00404b10
// Address: 00404b10
// Address Range: [[00404b10, 00405138]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderRotatedMRGLSubChain_FUN_00404b10(SMRGLHeaderExtended *primitive)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderRotatedMRGLSubChain_FUN_00404b10(SMRGLHeaderExtended *primitive)

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
  
  iVar16 = g_TransformMatrix.m[2].z;
  iVar15 = g_TransformMatrix.m[2].y;
  iVar14 = g_TransformMatrix.m[2].x;
  iVar13 = g_TransformMatrix.m[1].z;
  iVar12 = g_TransformMatrix.m[1].y;
  iVar11 = g_TransformMatrix.m[1].x;
  iVar10 = g_TransformMatrix.m[0].z;
  iVar9 = g_TransformMatrix.m[0].y;
  iVar8 = g_TransformMatrix.m[0].x;
  iVar7 = _DAT_01c039e4;
  iVar6 = _DAT_01c039e0;
  iVar5 = _DAT_01c039dc;
  iVar4 = g_RelativeZ;
  iVar3 = g_RelativeY;
  iVar2 = g_RelativeX;
  iVar17 = g_RelativeX - primitive[1].child_count;
  iVar18 = g_RelativeY - primitive[2].base.type;
  iVar19 = g_RelativeZ - primitive[2].base.count;
  iVar20 = engine_matrix_c_interpolatedSin_FUN_004cca60(primitive->child_count);
  iVar21 = engine_matrix_c_interpolatedCos_FUN_004ccaa0(primitive->child_count);
  iVar22 = engine_matrix_c_interpolatedSin_FUN_004cca60(primitive[1].base.type);
  iVar23 = engine_matrix_c_interpolatedCos_FUN_004ccaa0(primitive[1].base.type);
  iVar24 = engine_matrix_c_interpolatedSin_FUN_004cca60(primitive[1].base.count);
  iVar25 = engine_matrix_c_interpolatedCos_FUN_004ccaa0(primitive[1].base.count);
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
  g_RelativeX = ((uint)((longlong)iVar31 * (longlong)iVar17) >> 0x10 |
                (int)((ulonglong)((longlong)iVar31 * (longlong)iVar17) >> 0x20) << 0x10) +
                ((uint)((longlong)(int)uVar27 * (longlong)iVar18) >> 0x10 |
                (int)((ulonglong)((longlong)(int)uVar27 * (longlong)iVar18) >> 0x20) << 0x10) +
                ((uint)((longlong)iVar33 * (longlong)iVar19) >> 0x10 |
                (int)((ulonglong)((longlong)iVar33 * (longlong)iVar19) >> 0x20) << 0x10);
  g_RelativeY = ((uint)((longlong)iVar32 * (longlong)iVar17) >> 0x10 |
                (int)((ulonglong)((longlong)iVar32 * (longlong)iVar17) >> 0x20) << 0x10) +
                ((uint)((longlong)(int)uVar28 * (longlong)iVar18) >> 0x10 |
                (int)((ulonglong)((longlong)(int)uVar28 * (longlong)iVar18) >> 0x20) << 0x10) +
                ((uint)((longlong)iVar20 * (longlong)iVar19) >> 0x10 |
                (int)((ulonglong)((longlong)iVar20 * (longlong)iVar19) >> 0x20) << 0x10);
  g_RelativeZ = ((uint)((longlong)(int)uVar26 * (longlong)iVar17) >> 0x10 |
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
  g_TransformMatrix.m[0].x =
       ((uint)((longlong)iVar8 * (longlong)iVar31) >> 0x10 |
       (int)((ulonglong)((longlong)iVar8 * (longlong)iVar31) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar11 * (longlong)(int)uVar27) >> 0x10 |
       (int)((ulonglong)((longlong)iVar11 * (longlong)(int)uVar27) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar14 * (longlong)iVar33) >> 0x10 |
       (int)((ulonglong)((longlong)iVar14 * (longlong)iVar33) >> 0x20) << 0x10);
  g_TransformMatrix.m[0].y =
       ((uint)((longlong)iVar9 * (longlong)iVar31) >> 0x10 |
       (int)((ulonglong)((longlong)iVar9 * (longlong)iVar31) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar12 * (longlong)(int)uVar27) >> 0x10 |
       (int)((ulonglong)((longlong)iVar12 * (longlong)(int)uVar27) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar15 * (longlong)iVar33) >> 0x10 |
       (int)((ulonglong)((longlong)iVar15 * (longlong)iVar33) >> 0x20) << 0x10);
  g_TransformMatrix.m[0].z =
       ((uint)((longlong)iVar10 * (longlong)iVar31) >> 0x10 |
       (int)((ulonglong)((longlong)iVar10 * (longlong)iVar31) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar13 * (longlong)(int)uVar27) >> 0x10 |
       (int)((ulonglong)((longlong)iVar13 * (longlong)(int)uVar27) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar16 * (longlong)iVar33) >> 0x10 |
       (int)((ulonglong)((longlong)iVar16 * (longlong)iVar33) >> 0x20) << 0x10);
  g_TransformMatrix.m[1].x =
       ((uint)((longlong)iVar8 * (longlong)iVar32) >> 0x10 |
       (int)((ulonglong)((longlong)iVar8 * (longlong)iVar32) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar11 * (longlong)(int)uVar28) >> 0x10 |
       (int)((ulonglong)((longlong)iVar11 * (longlong)(int)uVar28) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar14 * (longlong)iVar20) >> 0x10 |
       (int)((ulonglong)((longlong)iVar14 * (longlong)iVar20) >> 0x20) << 0x10);
  g_TransformMatrix.m[1].y =
       ((uint)((longlong)iVar9 * (longlong)iVar32) >> 0x10 |
       (int)((ulonglong)((longlong)iVar9 * (longlong)iVar32) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar12 * (longlong)(int)uVar28) >> 0x10 |
       (int)((ulonglong)((longlong)iVar12 * (longlong)(int)uVar28) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar15 * (longlong)iVar20) >> 0x10 |
       (int)((ulonglong)((longlong)iVar15 * (longlong)iVar20) >> 0x20) << 0x10);
  g_TransformMatrix.m[1].z =
       ((uint)((longlong)iVar10 * (longlong)iVar32) >> 0x10 |
       (int)((ulonglong)((longlong)iVar10 * (longlong)iVar32) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar13 * (longlong)(int)uVar28) >> 0x10 |
       (int)((ulonglong)((longlong)iVar13 * (longlong)(int)uVar28) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar16 * (longlong)iVar20) >> 0x10 |
       (int)((ulonglong)((longlong)iVar16 * (longlong)iVar20) >> 0x20) << 0x10);
  g_TransformMatrix.m[2].x =
       ((uint)((longlong)iVar8 * (longlong)(int)uVar26) >> 0x10 |
       (int)((ulonglong)((longlong)iVar8 * (longlong)(int)uVar26) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar11 * (longlong)iVar29) >> 0x10 |
       (int)((ulonglong)((longlong)iVar11 * (longlong)iVar29) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar14 * (longlong)(int)uVar30) >> 0x10 |
       (int)((ulonglong)((longlong)iVar14 * (longlong)(int)uVar30) >> 0x20) << 0x10);
  g_TransformMatrix.m[2].y =
       ((uint)((longlong)iVar9 * (longlong)(int)uVar26) >> 0x10 |
       (int)((ulonglong)((longlong)iVar9 * (longlong)(int)uVar26) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar12 * (longlong)iVar29) >> 0x10 |
       (int)((ulonglong)((longlong)iVar12 * (longlong)iVar29) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar15 * (longlong)(int)uVar30) >> 0x10 |
       (int)((ulonglong)((longlong)iVar15 * (longlong)(int)uVar30) >> 0x20) << 0x10);
  g_TransformMatrix.m[2].z =
       ((uint)((longlong)iVar10 * (longlong)(int)uVar26) >> 0x10 |
       (int)((ulonglong)((longlong)iVar10 * (longlong)(int)uVar26) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar13 * (longlong)iVar29) >> 0x10 |
       (int)((ulonglong)((longlong)iVar13 * (longlong)iVar29) >> 0x20) << 0x10) +
       ((uint)((longlong)iVar16 * (longlong)(int)uVar30) >> 0x10 |
       (int)((ulonglong)((longlong)iVar16 * (longlong)(int)uVar30) >> 0x20) << 0x10);
  engine_3d_c_dispatchMRGLBlockChain_FUN_00408e80
            ((SMRGLHeaderExtended *)((int)&(primitive->base).type + (primitive->base).count));
  g_TransformMatrix.m[0].x = iVar8;
  g_TransformMatrix.m[0].y = iVar9;
  g_TransformMatrix.m[0].z = iVar10;
  g_TransformMatrix.m[1].x = iVar11;
  g_TransformMatrix.m[1].y = iVar12;
  g_TransformMatrix.m[1].z = iVar13;
  g_TransformMatrix.m[2].x = iVar14;
  g_TransformMatrix.m[2].y = iVar15;
  g_TransformMatrix.m[2].z = iVar16;
  g_RelativeX = iVar2;
  g_RelativeY = iVar3;
  g_RelativeZ = iVar4;
  _DAT_01c039dc = iVar5;
  _DAT_01c039e0 = iVar6;
  _DAT_01c039e4 = iVar7;
  return (SMRGLHeaderExtended *)&primitive[2].child_count;
}
