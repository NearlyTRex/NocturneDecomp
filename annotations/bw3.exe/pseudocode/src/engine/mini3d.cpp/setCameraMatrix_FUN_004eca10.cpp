// Name: engine_mini3d.cpp_setCameraMatrix_FUN_004eca10
// Address: 004eca10
// Address Range: [[004eca10, 004eceaa]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setCameraMatrix_FUN_004eca10(CMatrix3x3f *rotation)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setCameraMatrix_FUN_004eca10(CMatrix3x3f *rotation)

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
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0045b9b0(rotation,&CStack_6c);
  pfVar8 = _DAT_01d76cfc;
  fVar3 = _DAT_01d76ca8;
  fVar2 = _DAT_01d76c58 - _DAT_01d76c50;
  fVar1 = _DAT_01d76c54 - _DAT_01d76c4c;
  fStack_60 = CStack_6c.x;
  afStack_5c[(uint)bVar9 * -2] = *(float *)((int)&CStack_6c + (uint)bVar9 * -8 + 4);
  afStack_5c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       *(float *)((int)&CStack_6c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  _DAT_01d76c9c = fStack_60;
  _DAT_01d76ca0 = afStack_5c[1];
  _DAT_01d76cac = _DAT_01d76ca8;
  _DAT_01d76ca4 = afStack_5c[0];
  *_DAT_01d76cfc = rotation->m[0].x;
  pfVar8[1] = rotation->m[0].y;
  pfVar8[2] = rotation->m[0].z;
  pfVar8[3] = rotation->m[1].x;
  _DAT_01d76cb4 = _DAT_01d76cac;
  fStack_14 = pfVar8[3] * _DAT_01d76cac;
  pfVar8[4] = rotation->m[1].y;
  pfVar8[5] = rotation->m[1].z;
  pfVar8[6] = rotation->m[2].x;
  _DAT_01d76cb4 = 1.0 / _DAT_01d76cb4;
  fVar4 = pfVar8[6] * _DAT_01d76cac;
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
  _DAT_01d76cb0 = fVar3;
  pfVar8[1] = fVar1 * fVar3;
  _DAT_01d76cb8 = 1.0 / fVar3;
  pfVar8[4] = fVar2 * fVar3;
  fStack_18 = fVar2 * fVar3 * pfVar8[8];
  pfVar8[7] = pfVar8[7] * fVar3;
  fStack_10 = pfVar8[5] * pfVar8[7];
  fStack_3c = fStack_18 - fStack_10;
  *pfVar8 = *pfVar8 * _DAT_01d76cac;
  afStack_5c[3] = pfVar8[3] * pfVar8[7];
  fStack_48 = pfVar8[4] * pfVar8[6];
  fStack_44 = afStack_5c[3] - fStack_48;
  fVar2 = pfVar8[1] * _DAT_005c7e69;
  fVar4 = pfVar8[2] * _DAT_005c7e69;
  fStack_30 = -fStack_40;
  fStack_38 = -(pfVar8[1] * pfVar8[8] - pfVar8[2] * pfVar8[7]);
  fStack_20 = 1.0 / ((*pfVar8 * fStack_3c - fVar1 * fVar3 * fStack_40) + pfVar8[2] * fStack_44);
  fStack_2c = *pfVar8 * pfVar8[8] - pfVar8[2] * pfVar8[6];
  fStack_24 = -(*pfVar8 * pfVar8[7] - pfVar8[1] * pfVar8[6]);
  fStack_34 = pfVar8[1] * pfVar8[5] - pfVar8[2] * pfVar8[4];
  fStack_28 = -(*pfVar8 * pfVar8[5] - pfVar8[2] * pfVar8[3]);
  afStack_5c[2] = *pfVar8 * pfVar8[4] - pfVar8[1] * pfVar8[3];
  fVar1 = pfVar8[3] * _DAT_005c7e69;
  fVar3 = pfVar8[4] * _DAT_005c7e69;
  _DAT_01d76c6c = fStack_3c * fStack_20;
  _DAT_01d76c70 = fStack_38 * fStack_20;
  _DAT_01d76c74 = fStack_34 * fStack_20;
  _DAT_01d76c78 = fStack_30 * fStack_20;
  _DAT_01d76c7c = fStack_2c * fStack_20;
  _DAT_01d76c80 = fStack_28 * fStack_20;
  _DAT_01d76c84 = fStack_44 * fStack_20;
  _DAT_01d76c88 = fStack_24 * fStack_20;
  _DAT_01d76c8c = afStack_5c[2] * fStack_20;
  fVar5 = pfVar8[5] * _DAT_005c7e69;
  fVar6 = pfVar8[6] * _DAT_005c7e69;
  _DAT_01d7977c = 1;
  dVar10 = round((double)(*pfVar8 * _DAT_005c7e69));
  _DAT_01c6e2fc = (int)ROUND(dVar10);
  fVar7 = pfVar8[7] * _DAT_005c7e69;
  dVar10 = round((double)fVar2);
  _DAT_01c6e300 = (int)ROUND(dVar10);
  fVar2 = pfVar8[8] * _DAT_005c7e69;
  dVar10 = round((double)fVar4);
  _DAT_01c6e304 = (int)ROUND(dVar10);
  fVar4 = _DAT_01d76c6c * _DAT_005c7e69;
  dVar10 = round((double)fVar1);
  _DAT_01c6e308 = (int)ROUND(dVar10);
  fVar1 = _DAT_01d76c70 * _DAT_005c7e69;
  dVar10 = round((double)fVar3);
  _DAT_01c6e30c = (int)ROUND(dVar10);
  fVar3 = _DAT_01d76c74 * _DAT_005c7e69;
  dVar10 = round((double)fVar5);
  _DAT_01c6e310 = (int)ROUND(dVar10);
  fVar5 = _DAT_01d76c78 * _DAT_005c7e69;
  dVar10 = round((double)fVar6);
  _DAT_01c6e314 = (int)ROUND(dVar10);
  fVar6 = _DAT_01d76c7c * _DAT_005c7e69;
  dVar10 = round((double)fVar7);
  _DAT_01c6e318 = (int)ROUND(dVar10);
  fVar7 = _DAT_01d76c80 * _DAT_005c7e69;
  dVar10 = round((double)fVar2);
  _DAT_01c6e31c = (int)ROUND(dVar10);
  fVar2 = _DAT_01d76c84 * _DAT_005c7e69;
  dVar10 = round((double)fVar4);
  _DAT_01d72644 = (int)ROUND(dVar10);
  fVar4 = _DAT_01d76c88 * _DAT_005c7e69;
  dVar10 = round((double)fVar1);
  _DAT_01d72648 = (int)ROUND(dVar10);
  fVar1 = _DAT_01d76c8c * _DAT_005c7e69;
  dVar10 = round((double)fVar3);
  dVar11 = round((double)fVar5);
  dVar12 = round((double)fVar6);
  dVar13 = round((double)fVar7);
  dVar14 = round((double)fVar2);
  dVar15 = round((double)fVar4);
  dVar16 = round((double)fVar1);
  _DAT_01d7264c = (int)ROUND(dVar10);
  _DAT_01d72650 = (int)ROUND(dVar11);
  _DAT_01d72654 = (int)ROUND(dVar12);
  _DAT_01d72658 = (int)ROUND(dVar13);
  _DAT_01d7265c = (int)ROUND(dVar14);
  _DAT_01d72660 = (int)ROUND(dVar15);
  _DAT_01d72664 = (int)ROUND(dVar16);
  return;
}
