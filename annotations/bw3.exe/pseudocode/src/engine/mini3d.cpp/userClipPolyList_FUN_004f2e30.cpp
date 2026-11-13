// Name: engine_mini3d.cpp_userClipPolyList_FUN_004f2e30
// Address: 004f2e30
// Address Range: [[004f2e30, 004f3390]]
// Convention: __cdecl
// Signature: int __cdecl engine_mini3d_cpp_userClipPolyList_FUN_004f2e30(float *vertices,int vertex_count,ushort *indices,int triangle_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_mini3d_cpp_userClipPolyList_FUN_004f2e30(float *vertices,int vertex_count,ushort *indices,int triangle_count)

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
  float *pfVar11;
  int extraout_EAX;
  ushort *puVar12;
  int iVar13;
  float *pfVar14;
  int iVar15;
  int unaff_EBX;
  int iVar16;
  uint clip_flags;
  int iVar17;
  int iVar18;
  int unaff_EDI;
  int in_stack_00000020;
  float afStack_ac [27];
  int iStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int iStack_30;
  float *pfStack_24;
  float *pfStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  fVar5 = _DAT_01d76c94;
  iVar17 = 0;
  pfVar11 = vertices;
  if (0 < vertex_count) {
    do {
      fStack_3c = *pfVar11;
      fVar1 = fStack_3c * _DAT_01d76c70;
      fStack_38 = pfVar11[1];
      fVar2 = fStack_38 * _DAT_01d76c7c;
      fStack_34 = pfVar11[2];
      fVar3 = fStack_34 * _DAT_01d76c88;
      iVar17 = iVar17 + 1;
      fVar4 = fStack_34 * _DAT_01d76c8c + fStack_38 * _DAT_01d76c80 + fStack_3c * _DAT_01d76c74 +
              _DAT_01d76c98;
      *pfVar11 = fStack_34 * _DAT_01d76c84 + fStack_38 * _DAT_01d76c78 + fStack_3c * _DAT_01d76c6c +
                 _DAT_01d76c90;
      pfVar11[1] = fVar3 + fVar2 + fVar1 + fVar5;
      pfVar11[2] = fVar4;
      pfVar11 = pfVar11 + 0x10;
    } while (iVar17 < vertex_count);
  }
  if (_DAT_01d7a6ac == (void *)0x0) {
    _DAT_01d7a6ac = malloc(360000);
    if (_DAT_01d7a6ac == (void *)0x0) {
      _DAT_01d71de0 = "..\\engine\\mini3d.cpp";
      _DAT_01d71de4 = 0x14e5;
      core_main_c_FUN_004e4330("CMini3D::userClipPolyList - Out of memory");
    }
    _DAT_01d7a6b0 = malloc(60000);
    if (_DAT_01d7a6b0 == (ushort *)0x0) {
      _DAT_01d71de0 = "..\\engine\\mini3d.cpp";
      _DAT_01d71de4 = 0x14e9;
      core_main_c_FUN_004e4330("CMini3D::userClipPolyList - Out of memory");
    }
  }
  iVar17 = 0;
  iStack_1c = 0;
  iStack_14 = 0;
  if (0 < triangle_count) {
    iStack_18 = 0;
    do {
      puVar12 = (ushort *)((int)indices + iStack_18);
      iVar13 = iStack_18 + 6;
      pfVar11 = afStack_ac;
      do {
        pfVar14 = vertices + (uint)*puVar12 * 0x10;
        puVar12 = puVar12 + 1;
        *pfVar11 = *pfVar14;
        pfVar11[1] = pfVar14[1];
        pfVar11[2] = pfVar14[2];
        pfVar11[7] = pfVar14[7];
        pfVar11[8] = pfVar14[8];
        pfVar11[3] = pfVar14[9];
        pfVar11[4] = pfVar14[10];
        pfVar11[5] = pfVar14[0xb];
        pfVar11[6] = pfVar14[0xc];
        pfVar11 = pfVar11 + 9;
      } while (puVar12 != (ushort *)((int)indices + iVar13));
      iStack_40 = 0;
      engine_mini3d_cpp_clipToUserPlane_FUN_004f2cf0
                (afStack_ac,3,(float *)((int)_DAT_01d7a6ac + iStack_14 * 0x24),&iStack_40);
      if (2 < iStack_30) {
        iVar16 = unaff_EBX + 2;
        iVar18 = iVar17 * 2;
        iVar13 = unaff_EBX;
        for (iVar15 = 0; puVar12 = _DAT_01d7a6b0, iVar13 = iVar13 + 1, iVar15 < iStack_30 + -2;
            iVar15 = iVar15 + 1) {
          *(short *)(iVar18 + (int)_DAT_01d7a6b0) = (short)unaff_EBX;
          iVar17 = iVar17 + 3;
          *(short *)(iVar18 + 2 + (int)puVar12) = (short)iVar13;
          *(short *)(iVar18 + 4 + (int)puVar12) = (short)iVar16;
          iVar16 = iVar16 + 1;
          iVar18 = iVar18 + 6;
        }
        unaff_EBX = unaff_EBX + iStack_30;
      }
      unaff_EDI = unaff_EDI + 1;
    } while (unaff_EDI < in_stack_00000020);
  }
  clip_flags = 0;
  pfVar11 = (float *)(iStack_14 << 6);
  if (_DAT_01d76d00 == 0) {
    if (0 < iStack_14) {
      iVar13 = 0;
      iVar18 = 0;
      pfStack_24 = pfVar11;
      do {
        pvVar10 = _DAT_01d7a6ac;
        fVar1 = (float)_DAT_01c6e308;
        fVar5 = *(float *)(iVar18 + (int)_DAT_01d7a6ac) - _DAT_01d76c90;
        *(float *)(iVar18 + 4 + (int)_DAT_01d7a6ac) =
             *(float *)(iVar18 + 4 + (int)_DAT_01d7a6ac) - _DAT_01d76c94;
        *(float *)(iVar18 + (int)pvVar10) = fVar5;
        pfVar11 = _DAT_01d76f60;
        fVar5 = (float)_DAT_01c6e2fc;
        *(float *)(iVar18 + 8 + (int)pvVar10) =
             *(float *)(iVar18 + 8 + (int)pvVar10) - _DAT_01d76c98;
        pfVar11 = (float *)((int)pfVar11 + iVar13);
        fVar2 = (float)_DAT_01c6e30c;
        *pfVar11 = (float)_DAT_01c6e314 * *(float *)(iVar18 + 8 + (int)pvVar10) +
                   fVar5 * *(float *)(iVar18 + (int)pvVar10) +
                   fVar1 * *(float *)(iVar18 + 4 + (int)pvVar10);
        fVar5 = (float)_DAT_01c6e310;
        pfVar11[1] = (float)_DAT_01c6e318 * *(float *)(iVar18 + 8 + (int)pvVar10) +
                     (float)_DAT_01c6e300 * *(float *)(iVar18 + (int)pvVar10) +
                     fVar2 * *(float *)(iVar18 + 4 + (int)pvVar10);
        iVar15 = iVar13 + 0x40;
        pfVar11[2] = (float)_DAT_01c6e31c * *(float *)(iVar18 + 8 + (int)pvVar10) +
                     (float)_DAT_01c6e304 * *(float *)(iVar18 + (int)pvVar10) +
                     fVar5 * *(float *)(iVar18 + 4 + (int)pvVar10);
        engine_mini3d_cpp_projectVertex_FUN_004efd80(pfVar11);
        pvVar10 = _DAT_01d7a6ac;
        pfVar11 = _DAT_01d76f60;
        *(uint *)(iVar13 + 0x1c + (int)_DAT_01d76f60) =
             *(uint *)((int)_DAT_01d7a6ac + iVar18 + 0x1c);
        *(uint *)(iVar13 + 0x20 + (int)pfVar11) =
             *(uint *)((int)pvVar10 + iVar18 + 0x20);
        *(uint *)(iVar13 + 0x24 + (int)pfVar11) = *(uint *)((int)pvVar10 + iVar18 + 0xc)
        ;
        *(uint *)(iVar13 + 0x28 + (int)pfVar11) =
             *(uint *)((int)pvVar10 + iVar18 + 0x10);
        *(uint *)(iVar13 + 0x2c + (int)pfVar11) =
             *(uint *)((int)pvVar10 + iVar18 + 0x14);
        *(uint *)(iVar13 + 0x30 + (int)pfVar11) =
             *(uint *)((int)pvVar10 + iVar18 + 0x18);
        clip_flags = clip_flags | *(uint *)(iVar13 + 0x10 + (int)pfVar11);
        iVar13 = iVar15;
        iVar18 = iVar18 + 0x24;
      } while (iVar15 < (int)pfStack_20);
    }
  }
  else if (0 < iStack_14) {
    iVar13 = 0;
    iVar18 = 0;
    pfStack_20 = pfVar11;
    do {
      fVar5 = *(float *)(iVar18 + 4 + (int)_DAT_01d7a6ac) - _DAT_01d76c94;
      fVar8 = *(float *)(iVar18 + (int)_DAT_01d7a6ac) - _DAT_01d76c90;
      fVar7 = fVar8 * _DAT_01d76d08;
      fVar9 = fVar8 * _DAT_01d76d0c;
      fVar1 = fVar5 * _DAT_01d76d14;
      fVar2 = fVar5 * _DAT_01d76d18;
      fVar4 = *(float *)(iVar18 + 8 + (int)_DAT_01d7a6ac) - _DAT_01d76c98;
      fVar6 = fVar4 * _DAT_01d76d20;
      fVar3 = fVar4 * _DAT_01d76d24;
      pfVar11 = (float *)((int)_DAT_01d76f60 + iVar13);
      iVar15 = iVar13 + 0x40;
      *pfVar11 = fVar4 * _DAT_01d76d1c + fVar8 * _DAT_01d76d04 + fVar5 * _DAT_01d76d10;
      pfVar11[1] = fVar6 + fVar1 + fVar7;
      pfVar11[2] = fVar3 + fVar2 + fVar9;
      engine_mini3d_cpp_projectVertex_FUN_004efd80(pfVar11);
      pvVar10 = _DAT_01d7a6ac;
      pfVar11 = _DAT_01d76f60;
      *(uint *)(iVar13 + 0x1c + (int)_DAT_01d76f60) =
           *(uint *)((int)_DAT_01d7a6ac + iVar18 + 0x1c);
      *(uint *)(iVar13 + 0x20 + (int)pfVar11) = *(uint *)((int)pvVar10 + iVar18 + 0x20);
      *(uint *)(iVar13 + 0x24 + (int)pfVar11) = *(uint *)((int)pvVar10 + iVar18 + 0xc);
      *(uint *)(iVar13 + 0x28 + (int)pfVar11) = *(uint *)((int)pvVar10 + iVar18 + 0x10);
      *(uint *)(iVar13 + 0x2c + (int)pfVar11) = *(uint *)((int)pvVar10 + iVar18 + 0x14);
      *(uint *)(iVar13 + 0x30 + (int)pfVar11) = *(uint *)((int)pvVar10 + iVar18 + 0x18);
      clip_flags = clip_flags | *(uint *)(iVar13 + 0x10 + (int)pfVar11);
      iVar13 = iVar15;
      iVar18 = iVar18 + 0x24;
    } while (iVar15 < iStack_1c);
  }
  if ((2 < iStack_14) && (0 < iVar17 / 3)) {
    engine_mini3d_cpp_drawTransformedList_FUN_004f12b0
              (_DAT_01d76f60,iStack_14,_DAT_01d7a6b0,iVar17 / 3,clip_flags);
    return extraout_EAX;
  }
  return (int)pfVar11;
}
