// Name: engine_mini3d.cpp_matrixPushAndTransform_FUN_004f2be0
// Address: 004f2be0
// Address Range: [[004f2be0, 004f2f10]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_matrixPushAndTransform_FUN_004f2be0(CVector3f *angles,CVector3f *position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_matrixPushAndTransform_FUN_004f2be0(CVector3f *angles,CVector3f *position)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float afStack_50 [3];
  float afStack_44 [2];
  float afStack_3c [11];
  
  _DAT_01d0991c = _DAT_01d0991c + 1;
  if (9 < _DAT_01d0991c) {
    _DAT_01d046a0 = "..\\engine\\mini3d.cpp";
    _DAT_01d046a4 = 0x3cf;
    core_main_c_FUN_004e4500("Matrix unbalance");
  }
  iVar15 = _DAT_01d0991c * 0x3c;
  core_dirmat_cpp_FUN_00449c20(&fStack_5c,afStack_44,angles);
  core_dirmat_cpp_FUN_00449c20(afStack_50,&fStack_58,&angles->z);
  core_dirmat_cpp_FUN_00449c20(&fStack_54,afStack_3c,&angles->y);
  fVar6 = fStack_54 * afStack_44[0];
  fVar7 = afStack_50[0] * afStack_44[0];
  fVar8 = fStack_58 * afStack_44[0];
  fVar9 = _DAT_01d09918[9] - position->x;
  fVar10 = _DAT_01d09918[10] - position->y;
  fVar5 = afStack_3c[0] * fStack_58 + fStack_54 * fStack_5c * afStack_50[0];
  fVar11 = _DAT_01d09918[0xb] - position->z;
  fVar4 = -afStack_3c[0] * afStack_50[0] + fStack_54 * fStack_5c * fStack_58;
  afStack_44[0] = afStack_3c[0] * afStack_44[0];
  fVar14 = -fStack_5c;
  fVar13 = -fStack_54 * fStack_58 + afStack_3c[0] * fStack_5c * afStack_50[0];
  fVar12 = afStack_50[0] * fStack_54 + afStack_3c[0] * fStack_5c * fStack_58;
  *(float *)(iVar15 + 0x1d0994c) = fVar11 * afStack_44[0] + fVar10 * fVar14 + fVar9 * fVar6;
  *(float *)(iVar15 + 0x1d09944) = fVar11 * fVar13 + fVar10 * fVar7 + fVar9 * fVar5;
  *(float *)(iVar15 + 0x1d09948) = fVar10 * fVar8 + fVar9 * fVar4 + fVar11 * fVar12;
  *(float *)(iVar15 + 0x1d09950) =
       _DAT_01d09918[0xe] * fVar13 + _DAT_01d09918[0xd] * fVar7 + _DAT_01d09918[0xc] * fVar5;
  *(float *)(iVar15 + 0x1d09954) =
       _DAT_01d09918[0xe] * fVar12 + _DAT_01d09918[0xd] * fVar8 + _DAT_01d09918[0xc] * fVar4;
  *(float *)(iVar15 + 0x1d09958) =
       _DAT_01d09918[0xe] * afStack_44[0] + _DAT_01d09918[0xd] * fVar14 + _DAT_01d09918[0xc] * fVar6
  ;
  *(float *)(&DAT_01d09920 + iVar15) =
       fVar13 * _DAT_01d09918[6] + fVar5 * *_DAT_01d09918 + fVar7 * _DAT_01d09918[3];
  *(float *)(&DAT_01d09924 + iVar15) =
       fVar13 * _DAT_01d09918[7] + fVar7 * _DAT_01d09918[4] + fVar5 * _DAT_01d09918[1];
  *(float *)(&DAT_01d09928 + iVar15) =
       fVar13 * _DAT_01d09918[8] + fVar7 * _DAT_01d09918[5] + fVar5 * _DAT_01d09918[2];
  *(float *)(&DAT_01d0992c + iVar15) =
       fVar12 * _DAT_01d09918[6] + fVar4 * *_DAT_01d09918 + fVar8 * _DAT_01d09918[3];
  *(float *)(&DAT_01d09930 + iVar15) =
       fVar12 * _DAT_01d09918[7] + fVar8 * _DAT_01d09918[4] + fVar4 * _DAT_01d09918[1];
  *(float *)(&DAT_01d09934 + iVar15) =
       fVar12 * _DAT_01d09918[8] + fVar8 * _DAT_01d09918[5] + fVar4 * _DAT_01d09918[2];
  *(float *)(&DAT_01d09938 + iVar15) =
       afStack_44[0] * _DAT_01d09918[6] + fVar6 * *_DAT_01d09918 + fVar14 * _DAT_01d09918[3];
  *(float *)(&DAT_01d0993c + iVar15) =
       afStack_44[0] * _DAT_01d09918[7] + fVar14 * _DAT_01d09918[4] + fVar6 * _DAT_01d09918[1];
  pfVar1 = _DAT_01d09918 + 2;
  pfVar2 = _DAT_01d09918 + 5;
  pfVar3 = _DAT_01d09918 + 8;
  _DAT_01d0c398 = 1;
  _DAT_01d09918 = (float *)(&DAT_01d09920 + iVar15);
  *(float *)(&DAT_01d09940 + iVar15) = afStack_44[0] * *pfVar3 + fVar14 * *pfVar2 + fVar6 * *pfVar1;
  return;
}
