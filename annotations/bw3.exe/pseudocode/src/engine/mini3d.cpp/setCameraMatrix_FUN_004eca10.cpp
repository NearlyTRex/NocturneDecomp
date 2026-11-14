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
  float *pfVar5;
  int iVar6;
  byte bVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float afStackY_1054 [1017];
  uint uStack_6c;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  float fStack_54;
  float fStack_50;
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
  
  bVar7 = 0;
  core_dirmat_cpp_FUN_0045b9b0(rotation);
  pfVar5 = _DAT_01d76cfc;
  fVar3 = _DAT_01d76ca8;
  fVar2 = _DAT_01d76c58 - _DAT_01d76c50;
  fVar1 = _DAT_01d76c54 - _DAT_01d76c4c;
  uStack_60 = uStack_6c;
  *(uint *)((int)&stack0xffffffa4 + (uint)bVar7 * -8) =
       *(uint *)(&stack0xffffff98 + (uint)bVar7 * -8);
  *(uint *)((int)&stack0xffffffa8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)(&stack0xffffff9c + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  _DAT_01d76c9c = uStack_60;
  _DAT_01d76ca0 = uStack_58;
  _DAT_01d76cac = _DAT_01d76ca8;
  _DAT_01d76ca4 = uStack_5c;
  *_DAT_01d76cfc = rotation->m[0].x;
  pfVar5[1] = rotation->m[0].y;
  pfVar5[2] = rotation->m[0].z;
  pfVar5[3] = rotation->m[1].x;
  _DAT_01d76cb4 = _DAT_01d76cac;
  fStack_14 = pfVar5[3] * _DAT_01d76cac;
  pfVar5[4] = rotation->m[1].y;
  pfVar5[5] = rotation->m[1].z;
  pfVar5[6] = rotation->m[2].x;
  _DAT_01d76cb4 = 1.0 / _DAT_01d76cb4;
  fVar4 = pfVar5[6] * _DAT_01d76cac;
  pfVar5[7] = rotation->m[2].y;
  pfVar5[8] = rotation->m[2].z;
  pfVar5[3] = fStack_14;
  fStack_14 = fStack_14 * pfVar5[8];
  pfVar5[6] = fVar4;
  fStack_4c = pfVar5[5] * pfVar5[6];
  fVar3 = fVar3 * ((fVar1 + 1.0) / (fVar2 + 1.0));
  fVar1 = pfVar5[1];
  fVar2 = pfVar5[4];
  fStack_40 = fStack_14 - fStack_4c;
  _DAT_01d76cb0 = fVar3;
  pfVar5[1] = fVar1 * fVar3;
  _DAT_01d76cb8 = 1.0 / fVar3;
  pfVar5[4] = fVar2 * fVar3;
  fStack_18 = fVar2 * fVar3 * pfVar5[8];
  pfVar5[7] = pfVar5[7] * fVar3;
  fStack_10 = pfVar5[5] * pfVar5[7];
  fStack_3c = fStack_18 - fStack_10;
  *pfVar5 = *pfVar5 * _DAT_01d76cac;
  fStack_50 = pfVar5[3] * pfVar5[7];
  fStack_48 = pfVar5[4] * pfVar5[6];
  fStack_44 = fStack_50 - fStack_48;
  fVar8 = (float10)*pfVar5 * (float10)_DAT_005c7e69;
  fVar9 = (float10)pfVar5[1] * (float10)_DAT_005c7e69;
  fVar10 = (float10)pfVar5[2] * (float10)_DAT_005c7e69;
  fStack_30 = -fStack_40;
  fStack_38 = -(pfVar5[1] * pfVar5[8] - pfVar5[2] * pfVar5[7]);
  fStack_20 = 1.0 / ((*pfVar5 * fStack_3c - fVar1 * fVar3 * fStack_40) + pfVar5[2] * fStack_44);
  fStack_2c = *pfVar5 * pfVar5[8] - pfVar5[2] * pfVar5[6];
  fStack_24 = -(*pfVar5 * pfVar5[7] - pfVar5[1] * pfVar5[6]);
  fStack_34 = pfVar5[1] * pfVar5[5] - pfVar5[2] * pfVar5[4];
  fStack_28 = -(*pfVar5 * pfVar5[5] - pfVar5[2] * pfVar5[3]);
  fStack_54 = *pfVar5 * pfVar5[4] - pfVar5[1] * pfVar5[3];
  fVar11 = (float10)pfVar5[3] * (float10)_DAT_005c7e69;
  fVar12 = (float10)pfVar5[4] * (float10)_DAT_005c7e69;
  _DAT_01d76c6c = fStack_3c * fStack_20;
  _DAT_01d76c70 = fStack_38 * fStack_20;
  _DAT_01d76c74 = fStack_34 * fStack_20;
  _DAT_01d76c78 = fStack_30 * fStack_20;
  _DAT_01d76c7c = fStack_2c * fStack_20;
  _DAT_01d76c80 = fStack_28 * fStack_20;
  _DAT_01d76c84 = fStack_44 * fStack_20;
  _DAT_01d76c88 = fStack_24 * fStack_20;
  _DAT_01d76c8c = fStack_54 * fStack_20;
  fVar13 = (float10)pfVar5[5] * (float10)_DAT_005c7e69;
  fVar14 = (float10)pfVar5[6] * (float10)_DAT_005c7e69;
  _DAT_01d7977c = 1;
  iVar6 = round();
  _DAT_01c6e2fc = (int)ROUND(fVar8);
  fVar8 = (float10)*(float *)(iVar6 + 0x1c) * (float10)_DAT_005c7e69;
  iVar6 = round();
  _DAT_01c6e300 = (int)ROUND(fVar9);
  fVar9 = (float10)*(float *)(iVar6 + 0x20) * (float10)_DAT_005c7e69;
  round();
  _DAT_01c6e304 = (int)ROUND(fVar10);
  fVar10 = (float10)_DAT_01d76c6c * (float10)_DAT_005c7e69;
  round();
  _DAT_01c6e308 = (int)ROUND(fVar11);
  fVar11 = (float10)_DAT_01d76c70 * (float10)_DAT_005c7e69;
  round();
  _DAT_01c6e30c = (int)ROUND(fVar12);
  fVar12 = (float10)_DAT_01d76c74 * (float10)_DAT_005c7e69;
  round();
  _DAT_01c6e310 = (int)ROUND(fVar13);
  fVar13 = (float10)_DAT_01d76c78 * (float10)_DAT_005c7e69;
  round();
  _DAT_01c6e314 = (int)ROUND(fVar14);
  fVar14 = (float10)_DAT_01d76c7c * (float10)_DAT_005c7e69;
  round();
  _DAT_01c6e318 = (int)ROUND(fVar8);
  fVar8 = (float10)_DAT_01d76c80 * (float10)_DAT_005c7e69;
  round();
  _DAT_01c6e31c = (int)ROUND(fVar9);
  fVar9 = (float10)_DAT_01d76c84 * (float10)_DAT_005c7e69;
  round();
  _DAT_01d72644 = (int)ROUND(fVar10);
  fVar10 = (float10)_DAT_01d76c88 * (float10)_DAT_005c7e69;
  round();
  _DAT_01d72648 = (int)ROUND(fVar11);
  fVar11 = (float10)_DAT_01d76c8c * (float10)_DAT_005c7e69;
  round();
  round();
  round();
  round();
  round();
  round();
  round();
  _DAT_01d7264c = (int)ROUND(fVar12);
  _DAT_01d72650 = (int)ROUND(fVar13);
  _DAT_01d72654 = (int)ROUND(fVar14);
  _DAT_01d72658 = (int)ROUND(fVar8);
  _DAT_01d7265c = (int)ROUND(fVar9);
  _DAT_01d72660 = (int)ROUND(fVar10);
  _DAT_01d72664 = (int)ROUND(fVar11);
  return;
}
