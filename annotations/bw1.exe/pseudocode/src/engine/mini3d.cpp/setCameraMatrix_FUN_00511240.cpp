// Name: engine_mini3d.cpp_setCameraMatrix_FUN_00511240
// Address: 00511240
// Address Range: [[00511240, 005116da]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setCameraMatrix_FUN_00511240(CMatrix3x3f *rotation)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setCameraMatrix_FUN_00511240(CMatrix3x3f *rotation)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  byte bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float afStackY_1054 [1017];
  CVector3f CStack_6c;
  float fStack_60;
  float afStack_5c [4];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  bVar9 = 0;
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0045f840(rotation,&CStack_6c);
  pfVar8 = _DAT_01d2257c;
  fVar3 = _DAT_01d22528;
  fVar2 = _DAT_01d224d8 - _DAT_01d224d0;
  fVar1 = _DAT_01d224d4 - _DAT_01d224cc;
  fStack_60 = CStack_6c.x;
  afStack_5c[(uint)bVar9 * -2] = *(float *)((int)&CStack_6c + (uint)bVar9 * -8 + 4);
  afStack_5c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       *(float *)((int)&CStack_6c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  _DAT_01d2251c = fStack_60;
  _DAT_01d22520 = afStack_5c[1];
  _DAT_01d2252c = _DAT_01d22528;
  _DAT_01d22524 = afStack_5c[0];
  *_DAT_01d2257c = rotation->m[0].x;
  pfVar8[1] = rotation->m[0].y;
  pfVar8[2] = rotation->m[0].z;
  pfVar8[3] = rotation->m[1].x;
  _DAT_01d22534 = _DAT_01d2252c;
  fStack_14 = pfVar8[3] * _DAT_01d2252c;
  pfVar8[4] = rotation->m[1].y;
  pfVar8[5] = rotation->m[1].z;
  pfVar8[6] = rotation->m[2].x;
  _DAT_01d22534 = 1.0 / _DAT_01d22534;
  fVar4 = pfVar8[6] * _DAT_01d2252c;
  pfVar8[7] = rotation->m[2].y;
  pfVar8[8] = rotation->m[2].z;
  pfVar8[3] = fStack_14;
  fStack_14 = fStack_14 * pfVar8[8];
  pfVar8[6] = fVar4;
  fStack_4c = pfVar8[5] * pfVar8[6];
  fVar3 = fVar3 * ((fVar1 + 1.0) / (fVar2 + 1.0));
  fVar1 = pfVar8[1];
  fVar2 = pfVar8[4];
  fStack_40 = fStack_14 - fStack_4c;
  _DAT_01d22530 = fVar3;
  pfVar8[1] = fVar1 * fVar3;
  _DAT_01d22538 = 1.0 / fVar3;
  pfVar8[4] = fVar2 * fVar3;
  fStack_18 = fVar2 * fVar3 * pfVar8[8];
  pfVar8[7] = pfVar8[7] * fVar3;
  fStack_10 = pfVar8[5] * pfVar8[7];
  fStack_3c = fStack_18 - fStack_10;
  *pfVar8 = *pfVar8 * _DAT_01d2252c;
  afStack_5c[3] = pfVar8[3] * pfVar8[7];
  fStack_48 = pfVar8[4] * pfVar8[6];
  fStack_44 = afStack_5c[3] - fStack_48;
  fVar2 = pfVar8[1] * _DAT_005e8b67;
  fVar4 = pfVar8[2] * _DAT_005e8b67;
  fStack_30 = -fStack_40;
  fStack_38 = -(pfVar8[1] * pfVar8[8] - pfVar8[2] * pfVar8[7]);
  fStack_20 = 1.0 / ((*pfVar8 * fStack_3c - fVar1 * fVar3 * fStack_40) + pfVar8[2] * fStack_44);
  fStack_2c = *pfVar8 * pfVar8[8] - pfVar8[2] * pfVar8[6];
  fStack_24 = -(*pfVar8 * pfVar8[7] - pfVar8[1] * pfVar8[6]);
  fStack_34 = pfVar8[1] * pfVar8[5] - pfVar8[2] * pfVar8[4];
  fStack_28 = -(*pfVar8 * pfVar8[5] - pfVar8[2] * pfVar8[3]);
  afStack_5c[2] = *pfVar8 * pfVar8[4] - pfVar8[1] * pfVar8[3];
  fVar1 = pfVar8[3] * _DAT_005e8b67;
  fVar3 = pfVar8[4] * _DAT_005e8b67;
  _DAT_01d224ec = fStack_3c * fStack_20;
  _DAT_01d224f0 = fStack_38 * fStack_20;
  _DAT_01d224f4 = fStack_34 * fStack_20;
  _DAT_01d224f8 = fStack_30 * fStack_20;
  _DAT_01d224fc = fStack_2c * fStack_20;
  _DAT_01d22500 = fStack_28 * fStack_20;
  _DAT_01d22504 = fStack_44 * fStack_20;
  _DAT_01d22508 = fStack_24 * fStack_20;
  _DAT_01d2250c = afStack_5c[2] * fStack_20;
  fVar5 = pfVar8[5] * _DAT_005e8b67;
  fVar6 = pfVar8[6] * _DAT_005e8b67;
  _DAT_01d24ffc = 1;
  dVar10 = round((double)(*pfVar8 * _DAT_005e8b67));
  _DAT_01c51d5c = (int)ROUND(dVar10);
  fVar7 = pfVar8[7] * _DAT_005e8b67;
  dVar10 = round((double)fVar2);
  _DAT_01c51d60 = (int)ROUND(dVar10);
  fVar2 = pfVar8[8] * _DAT_005e8b67;
  dVar10 = round((double)fVar4);
  _DAT_01c51d64 = (int)ROUND(dVar10);
  fVar4 = _DAT_01d224ec * _DAT_005e8b67;
  dVar10 = round((double)fVar1);
  _DAT_01c51d68 = (int)ROUND(dVar10);
  fVar1 = _DAT_01d224f0 * _DAT_005e8b67;
  dVar10 = round((double)fVar3);
  _DAT_01c51d6c = (int)ROUND(dVar10);
  fVar3 = _DAT_01d224f4 * _DAT_005e8b67;
  dVar10 = round((double)fVar5);
  _DAT_01c51d70 = (int)ROUND(dVar10);
  fVar5 = _DAT_01d224f8 * _DAT_005e8b67;
  dVar10 = round((double)fVar6);
  _DAT_01c51d74 = (int)ROUND(dVar10);
  fVar6 = _DAT_01d224fc * _DAT_005e8b67;
  dVar10 = round((double)fVar7);
  _DAT_01c51d78 = (int)ROUND(dVar10);
  fVar7 = _DAT_01d22500 * _DAT_005e8b67;
  dVar10 = round((double)fVar2);
  _DAT_01c51d7c = (int)ROUND(dVar10);
  fVar2 = _DAT_01d22504 * _DAT_005e8b67;
  dVar10 = round((double)fVar4);
  _DAT_01d1dd18 = (int)ROUND(dVar10);
  fVar4 = _DAT_01d22508 * _DAT_005e8b67;
  dVar10 = round((double)fVar1);
  _DAT_01d1dd1c = (int)ROUND(dVar10);
  fVar1 = _DAT_01d2250c * _DAT_005e8b67;
  dVar10 = round((double)fVar3);
  dVar11 = round((double)fVar5);
  dVar12 = round((double)fVar6);
  dVar13 = round((double)fVar7);
  dVar14 = round((double)fVar2);
  dVar15 = round((double)fVar4);
  dVar16 = round((double)fVar1);
  _DAT_01d1dd20 = (int)ROUND(dVar10);
  _DAT_01d1dd24 = (int)ROUND(dVar11);
  _DAT_01d1dd28 = (int)ROUND(dVar12);
  _DAT_01d1dd2c = (int)ROUND(dVar13);
  _DAT_01d1dd30 = (int)ROUND(dVar14);
  _DAT_01d1dd34 = (int)ROUND(dVar15);
  _DAT_01d1dd38 = (int)ROUND(dVar16);
  return;
}
