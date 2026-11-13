// Name: engine_mini3d.cpp_userClipPolyList_FUN_00517660
// Address: 00517660
// Address Range: [[00517660, 00517bc0]]
// Convention: __cdecl
// Signature: int __cdecl engine_mini3d_cpp_userClipPolyList_FUN_00517660(float *vertices,int vertex_count,ushort *indices,int triangle_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_mini3d_cpp_userClipPolyList_FUN_00517660(float *vertices,int vertex_count,ushort *indices,int triangle_count)

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
  
  fVar5 = _DAT_01d22514;
  iVar17 = 0;
  pfVar11 = vertices;
  if (0 < vertex_count) {
    do {
      fStack_3c = *pfVar11;
      fVar1 = fStack_3c * _DAT_01d224f0;
      fStack_38 = pfVar11[1];
      fVar2 = fStack_38 * _DAT_01d224fc;
      fStack_34 = pfVar11[2];
      fVar3 = fStack_34 * _DAT_01d22508;
      iVar17 = iVar17 + 1;
      fVar4 = fStack_34 * _DAT_01d2250c + fStack_38 * _DAT_01d22500 + fStack_3c * _DAT_01d224f4 +
              _DAT_01d22518;
      *pfVar11 = fStack_34 * _DAT_01d22504 + fStack_38 * _DAT_01d224f8 + fStack_3c * _DAT_01d224ec +
                 _DAT_01d22510;
      pfVar11[1] = fVar3 + fVar2 + fVar1 + fVar5;
      pfVar11[2] = fVar4;
      pfVar11 = pfVar11 + 0x10;
    } while (iVar17 < vertex_count);
  }
  if (_DAT_01d25f2c == (void *)0x0) {
    _DAT_01d25f2c = malloc(360000);
    if (_DAT_01d25f2c == (void *)0x0) {
      _DAT_01d1d400 = "..\\engine\\mini3d.cpp";
      _DAT_01d1d404 = 0x14e5;
      core_main_c_FUN_005030e0("CMini3D::userClipPolyList - Out of memory");
    }
    _DAT_01d25f30 = malloc(60000);
    if (_DAT_01d25f30 == (ushort *)0x0) {
      _DAT_01d1d400 = "..\\engine\\mini3d.cpp";
      _DAT_01d1d404 = 0x14e9;
      core_main_c_FUN_005030e0("CMini3D::userClipPolyList - Out of memory");
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
      engine_mini3d_cpp_clipToUserPlane_FUN_00517520
                (afStack_ac,3,(float *)((int)_DAT_01d25f2c + iStack_14 * 0x24),&iStack_40);
      if (2 < iStack_30) {
        iVar16 = unaff_EBX + 2;
        iVar18 = iVar17 * 2;
        iVar13 = unaff_EBX;
        for (iVar15 = 0; puVar12 = _DAT_01d25f30, iVar13 = iVar13 + 1, iVar15 < iStack_30 + -2;
            iVar15 = iVar15 + 1) {
          *(short *)(iVar18 + (int)_DAT_01d25f30) = (short)unaff_EBX;
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
  if (_DAT_01d22580 == 0) {
    if (0 < iStack_14) {
      iVar13 = 0;
      iVar18 = 0;
      pfStack_24 = pfVar11;
      do {
        pvVar10 = _DAT_01d25f2c;
        fVar1 = (float)_DAT_01c51d68;
        fVar5 = *(float *)(iVar18 + (int)_DAT_01d25f2c) - _DAT_01d22510;
        *(float *)(iVar18 + 4 + (int)_DAT_01d25f2c) =
             *(float *)(iVar18 + 4 + (int)_DAT_01d25f2c) - _DAT_01d22514;
        *(float *)(iVar18 + (int)pvVar10) = fVar5;
        pfVar11 = _DAT_01d227e0;
        fVar5 = (float)_DAT_01c51d5c;
        *(float *)(iVar18 + 8 + (int)pvVar10) =
             *(float *)(iVar18 + 8 + (int)pvVar10) - _DAT_01d22518;
        pfVar11 = (float *)((int)pfVar11 + iVar13);
        fVar2 = (float)_DAT_01c51d6c;
        *pfVar11 = (float)_DAT_01c51d74 * *(float *)(iVar18 + 8 + (int)pvVar10) +
                   fVar5 * *(float *)(iVar18 + (int)pvVar10) +
                   fVar1 * *(float *)(iVar18 + 4 + (int)pvVar10);
        fVar5 = (float)_DAT_01c51d70;
        pfVar11[1] = (float)_DAT_01c51d78 * *(float *)(iVar18 + 8 + (int)pvVar10) +
                     (float)_DAT_01c51d60 * *(float *)(iVar18 + (int)pvVar10) +
                     fVar2 * *(float *)(iVar18 + 4 + (int)pvVar10);
        iVar15 = iVar13 + 0x40;
        pfVar11[2] = (float)_DAT_01c51d7c * *(float *)(iVar18 + 8 + (int)pvVar10) +
                     (float)_DAT_01c51d64 * *(float *)(iVar18 + (int)pvVar10) +
                     fVar5 * *(float *)(iVar18 + 4 + (int)pvVar10);
        engine_mini3d_cpp_projectVertex_FUN_005145b0(pfVar11);
        pvVar10 = _DAT_01d25f2c;
        pfVar11 = _DAT_01d227e0;
        *(uint *)(iVar13 + 0x1c + (int)_DAT_01d227e0) =
             *(uint *)((int)_DAT_01d25f2c + iVar18 + 0x1c);
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
      fVar5 = *(float *)(iVar18 + 4 + (int)_DAT_01d25f2c) - _DAT_01d22514;
      fVar8 = *(float *)(iVar18 + (int)_DAT_01d25f2c) - _DAT_01d22510;
      fVar7 = fVar8 * _DAT_01d22588;
      fVar9 = fVar8 * _DAT_01d2258c;
      fVar1 = fVar5 * _DAT_01d22594;
      fVar2 = fVar5 * _DAT_01d22598;
      fVar4 = *(float *)(iVar18 + 8 + (int)_DAT_01d25f2c) - _DAT_01d22518;
      fVar6 = fVar4 * _DAT_01d225a0;
      fVar3 = fVar4 * _DAT_01d225a4;
      pfVar11 = (float *)((int)_DAT_01d227e0 + iVar13);
      iVar15 = iVar13 + 0x40;
      *pfVar11 = fVar4 * _DAT_01d2259c + fVar8 * _DAT_01d22584 + fVar5 * _DAT_01d22590;
      pfVar11[1] = fVar6 + fVar1 + fVar7;
      pfVar11[2] = fVar3 + fVar2 + fVar9;
      engine_mini3d_cpp_projectVertex_FUN_005145b0(pfVar11);
      pvVar10 = _DAT_01d25f2c;
      pfVar11 = _DAT_01d227e0;
      *(uint *)(iVar13 + 0x1c + (int)_DAT_01d227e0) =
           *(uint *)((int)_DAT_01d25f2c + iVar18 + 0x1c);
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
    engine_mini3d_cpp_drawTransformedList_FUN_00515ae0
              (_DAT_01d227e0,iStack_14,_DAT_01d25f30,iVar17 / 3,clip_flags);
    return extraout_EAX;
  }
  return (int)pfVar11;
}
