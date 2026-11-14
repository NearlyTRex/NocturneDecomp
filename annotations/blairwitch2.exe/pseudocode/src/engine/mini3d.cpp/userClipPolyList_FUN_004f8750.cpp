// Name: engine_mini3d.cpp_userClipPolyList_FUN_004f8750
// Address: 004f8750
// Address Range: [[004f8750, 004f8c98]]
// Convention: __cdecl
// Signature: int __cdecl engine_mini3d_cpp_userClipPolyList_FUN_004f8750(float *vertices,int vertex_count,ushort *indices,int triangle_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_mini3d_cpp_userClipPolyList_FUN_004f8750(float *vertices,int vertex_count,ushort *indices,int triangle_count)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  void *pvVar10;
  int extraout_EAX;
  ushort *puVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  float *pfVar15;
  int unaff_EBX;
  int iVar16;
  uint clip_flags;
  int iVar17;
  int iVar18;
  int unaff_EDI;
  int in_stack_00000020;
  float afStack_ac [18];
  float afStack_64 [9];
  int iStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int iStack_30;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  fVar5 = _DAT_01d098b4;
  iVar17 = 0;
  pfVar15 = vertices;
  if (0 < vertex_count) {
    do {
      fStack_3c = *pfVar15;
      fVar1 = fStack_3c * _DAT_01d09890;
      fStack_38 = pfVar15[1];
      fVar2 = fStack_38 * _DAT_01d0989c;
      fStack_34 = pfVar15[2];
      fVar3 = fStack_34 * _DAT_01d098a8;
      iVar17 = iVar17 + 1;
      fVar4 = fStack_34 * _DAT_01d098ac + fStack_38 * _DAT_01d098a0 + fStack_3c * _DAT_01d09894 +
              _DAT_01d098b8;
      *pfVar15 = fStack_34 * _DAT_01d098a4 + fStack_38 * _DAT_01d09898 + fStack_3c * _DAT_01d0988c +
                 _DAT_01d098b0;
      pfVar15[1] = fVar3 + fVar2 + fVar1 + fVar5;
      pfVar15[2] = fVar4;
      pfVar15 = pfVar15 + 0x10;
    } while (iVar17 < vertex_count);
  }
  if (_DAT_01d0d2cc == (void *)0x0) {
    _DAT_01d0d2cc = malloc(360000);
    if (_DAT_01d0d2cc == (void *)0x0) {
      _DAT_01d046a0 = "..\\engine\\mini3d.cpp";
      _DAT_01d046a4 = 0x14e7;
      core_main_c_FUN_004e4500("CMini3D::userClipPolyList - Out of memory");
    }
    _DAT_01d0d2d0 = malloc(60000);
    if (_DAT_01d0d2d0 == (ushort *)0x0) {
      _DAT_01d046a0 = "..\\engine\\mini3d.cpp";
      _DAT_01d046a4 = 0x14eb;
      core_main_c_FUN_004e4500("CMini3D::userClipPolyList - Out of memory");
    }
  }
  iVar17 = 0;
  iStack_1c = 0;
  iStack_14 = 0;
  if (0 < triangle_count) {
    iStack_18 = 0;
    do {
      puVar11 = (ushort *)((int)indices + iStack_18);
      pfVar15 = afStack_64;
      do {
        pfVar13 = vertices + (uint)*puVar11 * 0x10;
        puVar11 = puVar11 + 1;
        *pfVar15 = *pfVar13;
        pfVar15[1] = pfVar13[1];
        pfVar15[2] = pfVar13[2];
        pfVar15[7] = pfVar13[7];
        pfVar15[8] = pfVar13[8];
        pfVar15[3] = pfVar13[9];
        pfVar15[4] = pfVar13[10];
        pfVar15[5] = pfVar13[0xb];
        pfVar15[6] = pfVar13[0xc];
        pfVar15 = pfVar15 + -9;
      } while (puVar11 != (ushort *)((int)indices + iStack_18 + 6));
      iStack_40 = 0;
      engine_mini3d_cpp_clipToUserPlane_FUN_004f8610
                (afStack_ac,3,(float *)(iStack_14 * 0x24 + (int)_DAT_01d0d2cc),&iStack_40);
      if (2 < iStack_30) {
        iVar16 = unaff_EBX + 2;
        iVar18 = iVar17 * 2;
        iVar12 = unaff_EBX;
        for (iVar14 = 0; puVar11 = _DAT_01d0d2d0, iVar12 = iVar12 + 1, iVar14 < iStack_30 + -2;
            iVar14 = iVar14 + 1) {
          *(short *)(iVar18 + (int)_DAT_01d0d2d0) = (short)unaff_EBX;
          iVar17 = iVar17 + 3;
          *(short *)(iVar18 + 2 + (int)puVar11) = (short)iVar12;
          *(short *)(iVar18 + 4 + (int)puVar11) = (short)iVar16;
          iVar16 = iVar16 + 1;
          iVar18 = iVar18 + 6;
        }
        unaff_EBX = unaff_EBX + iStack_30;
      }
      unaff_EDI = unaff_EDI + 1;
    } while (unaff_EDI < in_stack_00000020);
  }
  clip_flags = 0;
  if (_DAT_01d0991c == 0) {
    if (0 < iStack_14) {
      iVar12 = 0;
      iVar18 = 0;
      iStack_24 = iStack_14 << 6;
      do {
        pvVar10 = _DAT_01d0d2cc;
        fVar1 = (float)_DAT_01c38ba8;
        fVar5 = *(float *)(iVar18 + (int)_DAT_01d0d2cc) - _DAT_01d098b0;
        *(float *)(iVar18 + 4 + (int)_DAT_01d0d2cc) =
             *(float *)(iVar18 + 4 + (int)_DAT_01d0d2cc) - _DAT_01d098b4;
        *(float *)(iVar18 + (int)pvVar10) = fVar5;
        pfVar15 = _DAT_01d09b7c;
        fVar5 = (float)_DAT_01c38b9c;
        *(float *)(iVar18 + 8 + (int)pvVar10) =
             *(float *)(iVar18 + 8 + (int)pvVar10) - _DAT_01d098b8;
        pfVar15 = (float *)((int)pfVar15 + iVar12);
        fVar2 = (float)_DAT_01c38bac;
        *pfVar15 = (float)_DAT_01c38bb4 * *(float *)(iVar18 + 8 + (int)pvVar10) +
                   fVar5 * *(float *)(iVar18 + (int)pvVar10) +
                   fVar1 * *(float *)(iVar18 + 4 + (int)pvVar10);
        fVar5 = (float)_DAT_01c38bb0;
        pfVar15[1] = (float)_DAT_01c38bb8 * *(float *)(iVar18 + 8 + (int)pvVar10) +
                     (float)_DAT_01c38ba0 * *(float *)(iVar18 + (int)pvVar10) +
                     fVar2 * *(float *)(iVar18 + 4 + (int)pvVar10);
        iVar14 = iVar12 + 0x40;
        pfVar15[2] = (float)_DAT_01c38bbc * *(float *)(iVar18 + 8 + (int)pvVar10) +
                     (float)_DAT_01c38ba4 * *(float *)(iVar18 + (int)pvVar10) +
                     fVar5 * *(float *)(iVar18 + 4 + (int)pvVar10);
        engine_mini3d_cpp_projectVertex_FUN_004f5860(pfVar15);
        pvVar10 = _DAT_01d0d2cc;
        pfVar15 = _DAT_01d09b7c;
        *(uint *)(iVar12 + 0x1c + (int)_DAT_01d09b7c) =
             *(uint *)((int)_DAT_01d0d2cc + iVar18 + 0x1c);
        *(uint *)(iVar12 + 0x20 + (int)pfVar15) =
             *(uint *)((int)pvVar10 + iVar18 + 0x20);
        *(uint *)(iVar12 + 0x24 + (int)pfVar15) = *(uint *)((int)pvVar10 + iVar18 + 0xc)
        ;
        *(uint *)(iVar12 + 0x28 + (int)pfVar15) =
             *(uint *)((int)pvVar10 + iVar18 + 0x10);
        *(uint *)(iVar12 + 0x2c + (int)pfVar15) =
             *(uint *)((int)pvVar10 + iVar18 + 0x14);
        *(uint *)(iVar12 + 0x30 + (int)pfVar15) =
             *(uint *)((int)pvVar10 + iVar18 + 0x18);
        clip_flags = clip_flags | *(uint *)(iVar12 + 0x10 + (int)pfVar15);
        iVar12 = iVar14;
        iVar18 = iVar18 + 0x24;
      } while (iVar14 < iStack_20);
    }
  }
  else if (0 < iStack_14) {
    iVar12 = 0;
    iVar18 = 0;
    iStack_20 = iStack_14 << 6;
    do {
      fVar5 = *(float *)(iVar18 + 4 + (int)_DAT_01d0d2cc) - _DAT_01d098b4;
      fVar8 = *(float *)(iVar18 + (int)_DAT_01d0d2cc) - _DAT_01d098b0;
      fVar7 = fVar8 * _DAT_01d09924;
      fVar9 = fVar8 * _DAT_01d09928;
      fVar1 = fVar5 * _DAT_01d09930;
      fVar2 = fVar5 * _DAT_01d09934;
      fVar4 = *(float *)(iVar18 + 8 + (int)_DAT_01d0d2cc) - _DAT_01d098b8;
      fVar6 = fVar4 * _DAT_01d0993c;
      fVar3 = fVar4 * _DAT_01d09940;
      pfVar15 = (float *)((int)_DAT_01d09b7c + iVar12);
      iVar14 = iVar12 + 0x40;
      *pfVar15 = fVar4 * _DAT_01d09938 + fVar8 * _DAT_01d09920 + fVar5 * _DAT_01d0992c;
      pfVar15[1] = fVar6 + fVar1 + fVar7;
      pfVar15[2] = fVar3 + fVar2 + fVar9;
      engine_mini3d_cpp_projectVertex_FUN_004f5860(pfVar15);
      pvVar10 = _DAT_01d0d2cc;
      pfVar15 = _DAT_01d09b7c;
      *(uint *)(iVar12 + 0x1c + (int)_DAT_01d09b7c) =
           *(uint *)((int)_DAT_01d0d2cc + iVar18 + 0x1c);
      *(uint *)(iVar12 + 0x20 + (int)pfVar15) = *(uint *)((int)pvVar10 + iVar18 + 0x20);
      *(uint *)(iVar12 + 0x24 + (int)pfVar15) = *(uint *)((int)pvVar10 + iVar18 + 0xc);
      *(uint *)(iVar12 + 0x28 + (int)pfVar15) = *(uint *)((int)pvVar10 + iVar18 + 0x10);
      *(uint *)(iVar12 + 0x2c + (int)pfVar15) = *(uint *)((int)pvVar10 + iVar18 + 0x14);
      *(uint *)(iVar12 + 0x30 + (int)pfVar15) = *(uint *)((int)pvVar10 + iVar18 + 0x18);
      clip_flags = clip_flags | *(uint *)(iVar12 + 0x10 + (int)pfVar15);
      iVar12 = iVar14;
      iVar18 = iVar18 + 0x24;
    } while (iVar14 < iStack_1c);
  }
  engine_mini3d_cpp_drawTransformedList_FUN_004f6d00
            (_DAT_01d09b7c,iStack_14,_DAT_01d0d2d0,iVar17 / 3,clip_flags);
  return extraout_EAX;
}
