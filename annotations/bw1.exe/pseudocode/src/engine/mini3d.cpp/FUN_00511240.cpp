// Name: engine_mini3d.cpp_FUN_00511240
// Address: 00511240
// Address Range: [[00511240, 005116da]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_00511240(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_00511240(float *param_1)

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
  core_dirmat_cpp_FUN_0045f840(param_1);
  pfVar5 = _DAT_01d2257c;
  fVar3 = _DAT_01d22528;
  fVar2 = _DAT_01d224d8 - _DAT_01d224d0;
  fVar1 = _DAT_01d224d4 - _DAT_01d224cc;
  uStack_60 = uStack_6c;
  *(uint *)((int)&stack0xffffffa4 + (uint)bVar7 * -8) =
       *(uint *)(&stack0xffffff98 + (uint)bVar7 * -8);
  *(uint *)((int)&stack0xffffffa8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)(&stack0xffffff9c + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  _DAT_01d2251c = uStack_60;
  _DAT_01d22520 = uStack_58;
  _DAT_01d2252c = _DAT_01d22528;
  _DAT_01d22524 = uStack_5c;
  *_DAT_01d2257c = *param_1;
  pfVar5[1] = param_1[1];
  pfVar5[2] = param_1[2];
  pfVar5[3] = param_1[3];
  _DAT_01d22534 = _DAT_01d2252c;
  fStack_14 = pfVar5[3] * _DAT_01d2252c;
  pfVar5[4] = param_1[4];
  pfVar5[5] = param_1[5];
  pfVar5[6] = param_1[6];
  _DAT_01d22534 = 1.0 / _DAT_01d22534;
  fVar4 = pfVar5[6] * _DAT_01d2252c;
  pfVar5[7] = param_1[7];
  pfVar5[8] = param_1[8];
  pfVar5[3] = fStack_14;
  fStack_14 = fStack_14 * pfVar5[8];
  pfVar5[6] = fVar4;
  fStack_4c = pfVar5[5] * pfVar5[6];
  fVar3 = fVar3 * ((fVar1 + 1.0) / (fVar2 + 1.0));
  fVar1 = pfVar5[1];
  fVar2 = pfVar5[4];
  fStack_40 = fStack_14 - fStack_4c;
  _DAT_01d22530 = fVar3;
  pfVar5[1] = fVar1 * fVar3;
  _DAT_01d22538 = 1.0 / fVar3;
  pfVar5[4] = fVar2 * fVar3;
  fStack_18 = fVar2 * fVar3 * pfVar5[8];
  pfVar5[7] = pfVar5[7] * fVar3;
  fStack_10 = pfVar5[5] * pfVar5[7];
  fStack_3c = fStack_18 - fStack_10;
  *pfVar5 = *pfVar5 * _DAT_01d2252c;
  fStack_50 = pfVar5[3] * pfVar5[7];
  fStack_48 = pfVar5[4] * pfVar5[6];
  fStack_44 = fStack_50 - fStack_48;
  fVar8 = (float10)*pfVar5 * (float10)_DAT_005e8b67;
  fVar9 = (float10)pfVar5[1] * (float10)_DAT_005e8b67;
  fVar10 = (float10)pfVar5[2] * (float10)_DAT_005e8b67;
  fStack_30 = -fStack_40;
  fStack_38 = -(pfVar5[1] * pfVar5[8] - pfVar5[2] * pfVar5[7]);
  fStack_20 = 1.0 / ((*pfVar5 * fStack_3c - fVar1 * fVar3 * fStack_40) + pfVar5[2] * fStack_44);
  fStack_2c = *pfVar5 * pfVar5[8] - pfVar5[2] * pfVar5[6];
  fStack_24 = -(*pfVar5 * pfVar5[7] - pfVar5[1] * pfVar5[6]);
  fStack_34 = pfVar5[1] * pfVar5[5] - pfVar5[2] * pfVar5[4];
  fStack_28 = -(*pfVar5 * pfVar5[5] - pfVar5[2] * pfVar5[3]);
  fStack_54 = *pfVar5 * pfVar5[4] - pfVar5[1] * pfVar5[3];
  fVar11 = (float10)pfVar5[3] * (float10)_DAT_005e8b67;
  fVar12 = (float10)pfVar5[4] * (float10)_DAT_005e8b67;
  _DAT_01d224ec = fStack_3c * fStack_20;
  _DAT_01d224f0 = fStack_38 * fStack_20;
  _DAT_01d224f4 = fStack_34 * fStack_20;
  _DAT_01d224f8 = fStack_30 * fStack_20;
  _DAT_01d224fc = fStack_2c * fStack_20;
  _DAT_01d22500 = fStack_28 * fStack_20;
  _DAT_01d22504 = fStack_44 * fStack_20;
  _DAT_01d22508 = fStack_24 * fStack_20;
  _DAT_01d2250c = fStack_54 * fStack_20;
  fVar13 = (float10)pfVar5[5] * (float10)_DAT_005e8b67;
  fVar14 = (float10)pfVar5[6] * (float10)_DAT_005e8b67;
  _DAT_01d24ffc = 1;
  iVar6 = round();
  _DAT_01c51d5c = (int)ROUND(fVar8);
  fVar8 = (float10)*(float *)(iVar6 + 0x1c) * (float10)_DAT_005e8b67;
  iVar6 = round();
  _DAT_01c51d60 = (int)ROUND(fVar9);
  fVar9 = (float10)*(float *)(iVar6 + 0x20) * (float10)_DAT_005e8b67;
  round();
  _DAT_01c51d64 = (int)ROUND(fVar10);
  fVar10 = (float10)_DAT_01d224ec * (float10)_DAT_005e8b67;
  round();
  _DAT_01c51d68 = (int)ROUND(fVar11);
  fVar11 = (float10)_DAT_01d224f0 * (float10)_DAT_005e8b67;
  round();
  _DAT_01c51d6c = (int)ROUND(fVar12);
  fVar12 = (float10)_DAT_01d224f4 * (float10)_DAT_005e8b67;
  round();
  _DAT_01c51d70 = (int)ROUND(fVar13);
  fVar13 = (float10)_DAT_01d224f8 * (float10)_DAT_005e8b67;
  round();
  _DAT_01c51d74 = (int)ROUND(fVar14);
  fVar14 = (float10)_DAT_01d224fc * (float10)_DAT_005e8b67;
  round();
  _DAT_01c51d78 = (int)ROUND(fVar8);
  fVar8 = (float10)_DAT_01d22500 * (float10)_DAT_005e8b67;
  round();
  _DAT_01c51d7c = (int)ROUND(fVar9);
  fVar9 = (float10)_DAT_01d22504 * (float10)_DAT_005e8b67;
  round();
  _DAT_01d1dd18 = (int)ROUND(fVar10);
  fVar10 = (float10)_DAT_01d22508 * (float10)_DAT_005e8b67;
  round();
  _DAT_01d1dd1c = (int)ROUND(fVar11);
  fVar11 = (float10)_DAT_01d2250c * (float10)_DAT_005e8b67;
  round();
  round();
  round();
  round();
  round();
  round();
  round();
  _DAT_01d1dd20 = (int)ROUND(fVar12);
  _DAT_01d1dd24 = (int)ROUND(fVar13);
  _DAT_01d1dd28 = (int)ROUND(fVar14);
  _DAT_01d1dd2c = (int)ROUND(fVar8);
  _DAT_01d1dd30 = (int)ROUND(fVar9);
  _DAT_01d1dd34 = (int)ROUND(fVar10);
  _DAT_01d1dd38 = (int)ROUND(fVar11);
  return;
}
