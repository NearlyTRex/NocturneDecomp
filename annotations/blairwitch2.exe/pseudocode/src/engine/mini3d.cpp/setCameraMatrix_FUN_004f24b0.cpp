// Name: engine_mini3d.cpp_setCameraMatrix_FUN_004f24b0
// Address: 004f24b0
// Address Range: [[004f24b0, 004f294a]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setCameraMatrix_FUN_004f24b0(CMatrix3x3f *rotation)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setCameraMatrix_FUN_004f24b0(CMatrix3x3f *rotation)

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
  core_dirmat_cpp_FUN_004496e0(rotation);
  pfVar5 = _DAT_01d09918;
  fVar3 = _DAT_01d098c8;
  fVar2 = _DAT_01d09878 - _DAT_01d09870;
  fVar1 = _DAT_01d09874 - _DAT_01d0986c;
  uStack_60 = uStack_6c;
  *(uint *)((int)&stack0xffffffa4 + (uint)bVar7 * -8) =
       *(uint *)(&stack0xffffff98 + (uint)bVar7 * -8);
  *(uint *)((int)&stack0xffffffa8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)(&stack0xffffff9c + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  _DAT_01d098bc = uStack_60;
  _DAT_01d098c0 = uStack_58;
  _DAT_01d098cc = _DAT_01d098c8;
  _DAT_01d098c4 = uStack_5c;
  *_DAT_01d09918 = rotation->m[0].x;
  pfVar5[1] = rotation->m[0].y;
  pfVar5[2] = rotation->m[0].z;
  pfVar5[3] = rotation->m[1].x;
  _DAT_01d098d4 = _DAT_01d098cc;
  fStack_14 = pfVar5[3] * _DAT_01d098cc;
  pfVar5[4] = rotation->m[1].y;
  pfVar5[5] = rotation->m[1].z;
  pfVar5[6] = rotation->m[2].x;
  _DAT_01d098d4 = 1.0 / _DAT_01d098d4;
  fVar4 = pfVar5[6] * _DAT_01d098cc;
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
  _DAT_01d098d0 = fVar3;
  pfVar5[1] = fVar1 * fVar3;
  _DAT_01d098d8 = 1.0 / fVar3;
  pfVar5[4] = fVar2 * fVar3;
  fStack_18 = fVar2 * fVar3 * pfVar5[8];
  pfVar5[7] = pfVar5[7] * fVar3;
  fStack_10 = pfVar5[5] * pfVar5[7];
  fStack_3c = fStack_18 - fStack_10;
  *pfVar5 = *pfVar5 * _DAT_01d098cc;
  fStack_50 = pfVar5[3] * pfVar5[7];
  fStack_48 = pfVar5[4] * pfVar5[6];
  fStack_44 = fStack_50 - fStack_48;
  fVar8 = (float10)*pfVar5 * (float10)_DAT_005ddae0;
  fVar9 = (float10)pfVar5[1] * (float10)_DAT_005ddae0;
  fVar10 = (float10)pfVar5[2] * (float10)_DAT_005ddae0;
  fStack_30 = -fStack_40;
  fStack_38 = -(pfVar5[1] * pfVar5[8] - pfVar5[2] * pfVar5[7]);
  fStack_20 = 1.0 / ((*pfVar5 * fStack_3c - fVar1 * fVar3 * fStack_40) + pfVar5[2] * fStack_44);
  fStack_2c = *pfVar5 * pfVar5[8] - pfVar5[2] * pfVar5[6];
  fStack_24 = -(*pfVar5 * pfVar5[7] - pfVar5[1] * pfVar5[6]);
  fStack_34 = pfVar5[1] * pfVar5[5] - pfVar5[2] * pfVar5[4];
  fStack_28 = -(*pfVar5 * pfVar5[5] - pfVar5[2] * pfVar5[3]);
  fStack_54 = *pfVar5 * pfVar5[4] - pfVar5[1] * pfVar5[3];
  fVar11 = (float10)pfVar5[3] * (float10)_DAT_005ddae0;
  fVar12 = (float10)pfVar5[4] * (float10)_DAT_005ddae0;
  _DAT_01d0988c = fStack_3c * fStack_20;
  _DAT_01d09890 = fStack_38 * fStack_20;
  _DAT_01d09894 = fStack_34 * fStack_20;
  _DAT_01d09898 = fStack_30 * fStack_20;
  _DAT_01d0989c = fStack_2c * fStack_20;
  _DAT_01d098a0 = fStack_28 * fStack_20;
  _DAT_01d098a4 = fStack_44 * fStack_20;
  _DAT_01d098a8 = fStack_24 * fStack_20;
  _DAT_01d098ac = fStack_54 * fStack_20;
  fVar13 = (float10)pfVar5[5] * (float10)_DAT_005ddae0;
  fVar14 = (float10)pfVar5[6] * (float10)_DAT_005ddae0;
  _DAT_01d0c398 = 1;
  iVar6 = round();
  _DAT_01c38b9c = (int)ROUND(fVar8);
  fVar8 = (float10)*(float *)(iVar6 + 0x1c) * (float10)_DAT_005ddae0;
  iVar6 = round();
  _DAT_01c38ba0 = (int)ROUND(fVar9);
  fVar9 = (float10)*(float *)(iVar6 + 0x20) * (float10)_DAT_005ddae0;
  round();
  _DAT_01c38ba4 = (int)ROUND(fVar10);
  fVar10 = (float10)_DAT_01d0988c * (float10)_DAT_005ddae0;
  round();
  _DAT_01c38ba8 = (int)ROUND(fVar11);
  fVar11 = (float10)_DAT_01d09890 * (float10)_DAT_005ddae0;
  round();
  _DAT_01c38bac = (int)ROUND(fVar12);
  fVar12 = (float10)_DAT_01d09894 * (float10)_DAT_005ddae0;
  round();
  _DAT_01c38bb0 = (int)ROUND(fVar13);
  fVar13 = (float10)_DAT_01d09898 * (float10)_DAT_005ddae0;
  round();
  _DAT_01c38bb4 = (int)ROUND(fVar14);
  fVar14 = (float10)_DAT_01d0989c * (float10)_DAT_005ddae0;
  round();
  _DAT_01c38bb8 = (int)ROUND(fVar8);
  fVar8 = (float10)_DAT_01d098a0 * (float10)_DAT_005ddae0;
  round();
  _DAT_01c38bbc = (int)ROUND(fVar9);
  fVar9 = (float10)_DAT_01d098a4 * (float10)_DAT_005ddae0;
  round();
  _DAT_01d04fb8 = (int)ROUND(fVar10);
  fVar10 = (float10)_DAT_01d098a8 * (float10)_DAT_005ddae0;
  round();
  _DAT_01d04fbc = (int)ROUND(fVar11);
  fVar11 = (float10)_DAT_01d098ac * (float10)_DAT_005ddae0;
  round();
  round();
  round();
  round();
  round();
  round();
  round();
  _DAT_01d04fc0 = (int)ROUND(fVar12);
  _DAT_01d04fc4 = (int)ROUND(fVar13);
  _DAT_01d04fc8 = (int)ROUND(fVar14);
  _DAT_01d04fcc = (int)ROUND(fVar8);
  _DAT_01d04fd0 = (int)ROUND(fVar9);
  _DAT_01d04fd4 = (int)ROUND(fVar10);
  _DAT_01d04fd8 = (int)ROUND(fVar11);
  return;
}
