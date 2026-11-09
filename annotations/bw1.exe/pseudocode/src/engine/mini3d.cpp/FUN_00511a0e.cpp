// Name: engine_mini3d.cpp_FUN_00511a0e
// Address: 00511a0e
// Address Range: [[00511a0e, 00511d40]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_00511a0e(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_00511a0e(int param_1,float *param_2)

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
  
  _DAT_01d22580 = _DAT_01d22580 + 1;
  if (9 < _DAT_01d22580) {
    _DAT_01d1d400 = "..\\engine\\mini3d.cpp";
    _DAT_01d1d404 = 0x3df;
    core_main_c_FUN_005030e0("Matrix unbalance");
  }
  iVar15 = _DAT_01d22580 * 0x3c;
  core_dirmat_cpp_FUN_0045fd80(&fStack_5c,afStack_44,param_1);
  core_dirmat_cpp_FUN_0045fd80(afStack_50,&fStack_58,param_1 + 8);
  core_dirmat_cpp_FUN_0045fd80(&fStack_54,afStack_3c,param_1 + 4);
  fVar6 = fStack_54 * afStack_44[0];
  fVar7 = afStack_50[0] * afStack_44[0];
  fVar8 = fStack_58 * afStack_44[0];
  fVar9 = _DAT_01d2257c[9] - *param_2;
  fVar10 = _DAT_01d2257c[10] - param_2[1];
  fVar5 = afStack_3c[0] * fStack_58 + fStack_54 * fStack_5c * afStack_50[0];
  fVar11 = _DAT_01d2257c[0xb] - param_2[2];
  fVar4 = -afStack_3c[0] * afStack_50[0] + fStack_54 * fStack_5c * fStack_58;
  afStack_44[0] = afStack_3c[0] * afStack_44[0];
  fVar14 = -fStack_5c;
  fVar13 = -fStack_54 * fStack_58 + afStack_3c[0] * fStack_5c * afStack_50[0];
  fVar12 = afStack_50[0] * fStack_54 + afStack_3c[0] * fStack_5c * fStack_58;
  *(float *)(iVar15 + 0x1d225b0) = fVar11 * afStack_44[0] + fVar10 * fVar14 + fVar9 * fVar6;
  *(float *)(iVar15 + 0x1d225a8) = fVar11 * fVar13 + fVar10 * fVar7 + fVar9 * fVar5;
  *(float *)(iVar15 + 0x1d225ac) = fVar10 * fVar8 + fVar9 * fVar4 + fVar11 * fVar12;
  *(float *)(iVar15 + 0x1d225b4) =
       _DAT_01d2257c[0xe] * fVar13 + _DAT_01d2257c[0xd] * fVar7 + _DAT_01d2257c[0xc] * fVar5;
  *(float *)(iVar15 + 0x1d225b8) =
       _DAT_01d2257c[0xe] * fVar12 + _DAT_01d2257c[0xd] * fVar8 + _DAT_01d2257c[0xc] * fVar4;
  *(float *)(iVar15 + 0x1d225bc) =
       _DAT_01d2257c[0xe] * afStack_44[0] + _DAT_01d2257c[0xd] * fVar14 + _DAT_01d2257c[0xc] * fVar6
  ;
  *(float *)(&DAT_01d22584 + iVar15) =
       fVar13 * _DAT_01d2257c[6] + fVar5 * *_DAT_01d2257c + fVar7 * _DAT_01d2257c[3];
  *(float *)(&DAT_01d22588 + iVar15) =
       fVar13 * _DAT_01d2257c[7] + fVar7 * _DAT_01d2257c[4] + fVar5 * _DAT_01d2257c[1];
  *(float *)(&DAT_01d2258c + iVar15) =
       fVar13 * _DAT_01d2257c[8] + fVar7 * _DAT_01d2257c[5] + fVar5 * _DAT_01d2257c[2];
  *(float *)(&DAT_01d22590 + iVar15) =
       fVar12 * _DAT_01d2257c[6] + fVar4 * *_DAT_01d2257c + fVar8 * _DAT_01d2257c[3];
  *(float *)(&DAT_01d22594 + iVar15) =
       fVar12 * _DAT_01d2257c[7] + fVar8 * _DAT_01d2257c[4] + fVar4 * _DAT_01d2257c[1];
  *(float *)(&DAT_01d22598 + iVar15) =
       fVar12 * _DAT_01d2257c[8] + fVar8 * _DAT_01d2257c[5] + fVar4 * _DAT_01d2257c[2];
  *(float *)(&DAT_01d2259c + iVar15) =
       afStack_44[0] * _DAT_01d2257c[6] + fVar6 * *_DAT_01d2257c + fVar14 * _DAT_01d2257c[3];
  *(float *)(&DAT_01d225a0 + iVar15) =
       afStack_44[0] * _DAT_01d2257c[7] + fVar14 * _DAT_01d2257c[4] + fVar6 * _DAT_01d2257c[1];
  pfVar1 = _DAT_01d2257c + 2;
  pfVar2 = _DAT_01d2257c + 5;
  pfVar3 = _DAT_01d2257c + 8;
  _DAT_01d24ffc = 1;
  _DAT_01d2257c = (float *)(&DAT_01d22584 + iVar15);
  *(float *)(&DAT_01d225a4 + iVar15) = afStack_44[0] * *pfVar3 + fVar14 * *pfVar2 + fVar6 * *pfVar1;
  return;
}
