// Name: engine_mini3d.cpp_matrixPushAndTransform_FUN_004ed1e0
// Address: 004ed1e0
// Address Range: [[004ed1e0, 004ed510]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_matrixPushAndTransform_FUN_004ed1e0(CVector3f *angles,CVector3f *position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_matrixPushAndTransform_FUN_004ed1e0(CVector3f *angles,CVector3f *position)

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
  
  _DAT_01d76d00 = _DAT_01d76d00 + 1;
  if (9 < _DAT_01d76d00) {
    _DAT_01d71de0 = "..\\engine\\mini3d.cpp";
    _DAT_01d71de4 = 0x3df;
    core_main_c_FUN_004e4330("Matrix unbalance");
  }
  iVar15 = _DAT_01d76d00 * 0x3c;
  core_dirmat_cpp_FUN_0045bef0(&fStack_5c,afStack_44,angles);
  core_dirmat_cpp_FUN_0045bef0(afStack_50,&fStack_58,&angles->z);
  core_dirmat_cpp_FUN_0045bef0(&fStack_54,afStack_3c,&angles->y);
  fVar6 = fStack_54 * afStack_44[0];
  fVar7 = afStack_50[0] * afStack_44[0];
  fVar8 = fStack_58 * afStack_44[0];
  fVar9 = _DAT_01d76cfc[9] - position->x;
  fVar10 = _DAT_01d76cfc[10] - position->y;
  fVar5 = afStack_3c[0] * fStack_58 + fStack_54 * fStack_5c * afStack_50[0];
  fVar11 = _DAT_01d76cfc[0xb] - position->z;
  fVar4 = -afStack_3c[0] * afStack_50[0] + fStack_54 * fStack_5c * fStack_58;
  afStack_44[0] = afStack_3c[0] * afStack_44[0];
  fVar14 = -fStack_5c;
  fVar13 = -fStack_54 * fStack_58 + afStack_3c[0] * fStack_5c * afStack_50[0];
  fVar12 = afStack_50[0] * fStack_54 + afStack_3c[0] * fStack_5c * fStack_58;
  *(float *)(iVar15 + 0x1d76d30) = fVar11 * afStack_44[0] + fVar10 * fVar14 + fVar9 * fVar6;
  *(float *)(iVar15 + 0x1d76d28) = fVar11 * fVar13 + fVar10 * fVar7 + fVar9 * fVar5;
  *(float *)(iVar15 + 0x1d76d2c) = fVar10 * fVar8 + fVar9 * fVar4 + fVar11 * fVar12;
  *(float *)(iVar15 + 0x1d76d34) =
       _DAT_01d76cfc[0xe] * fVar13 + _DAT_01d76cfc[0xd] * fVar7 + _DAT_01d76cfc[0xc] * fVar5;
  *(float *)(iVar15 + 0x1d76d38) =
       _DAT_01d76cfc[0xe] * fVar12 + _DAT_01d76cfc[0xd] * fVar8 + _DAT_01d76cfc[0xc] * fVar4;
  *(float *)(iVar15 + 0x1d76d3c) =
       _DAT_01d76cfc[0xe] * afStack_44[0] + _DAT_01d76cfc[0xd] * fVar14 + _DAT_01d76cfc[0xc] * fVar6
  ;
  *(float *)(&DAT_01d76d04 + iVar15) =
       fVar13 * _DAT_01d76cfc[6] + fVar5 * *_DAT_01d76cfc + fVar7 * _DAT_01d76cfc[3];
  *(float *)(&DAT_01d76d08 + iVar15) =
       fVar13 * _DAT_01d76cfc[7] + fVar7 * _DAT_01d76cfc[4] + fVar5 * _DAT_01d76cfc[1];
  *(float *)(&DAT_01d76d0c + iVar15) =
       fVar13 * _DAT_01d76cfc[8] + fVar7 * _DAT_01d76cfc[5] + fVar5 * _DAT_01d76cfc[2];
  *(float *)(&DAT_01d76d10 + iVar15) =
       fVar12 * _DAT_01d76cfc[6] + fVar4 * *_DAT_01d76cfc + fVar8 * _DAT_01d76cfc[3];
  *(float *)(&DAT_01d76d14 + iVar15) =
       fVar12 * _DAT_01d76cfc[7] + fVar8 * _DAT_01d76cfc[4] + fVar4 * _DAT_01d76cfc[1];
  *(float *)(&DAT_01d76d18 + iVar15) =
       fVar12 * _DAT_01d76cfc[8] + fVar8 * _DAT_01d76cfc[5] + fVar4 * _DAT_01d76cfc[2];
  *(float *)(&DAT_01d76d1c + iVar15) =
       afStack_44[0] * _DAT_01d76cfc[6] + fVar6 * *_DAT_01d76cfc + fVar14 * _DAT_01d76cfc[3];
  *(float *)(&DAT_01d76d20 + iVar15) =
       afStack_44[0] * _DAT_01d76cfc[7] + fVar14 * _DAT_01d76cfc[4] + fVar6 * _DAT_01d76cfc[1];
  pfVar1 = _DAT_01d76cfc + 2;
  pfVar2 = _DAT_01d76cfc + 5;
  pfVar3 = _DAT_01d76cfc + 8;
  _DAT_01d7977c = 1;
  _DAT_01d76cfc = (float *)(&DAT_01d76d04 + iVar15);
  *(float *)(&DAT_01d76d24 + iVar15) = afStack_44[0] * *pfVar3 + fVar14 * *pfVar2 + fVar6 * *pfVar1;
  return;
}
