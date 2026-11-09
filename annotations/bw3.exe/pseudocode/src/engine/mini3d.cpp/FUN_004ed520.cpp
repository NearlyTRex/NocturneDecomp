// Name: engine_mini3d.cpp_FUN_004ed520
// Address: 004ed520
// Address Range: [[004ed520, 004ed717]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004ed520(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004ed520(float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  
  _DAT_01d76d00 = _DAT_01d76d00 + 1;
  if (9 < _DAT_01d76d00) {
    _DAT_01d71de0 = "..\\engine\\mini3d.cpp";
    _DAT_01d71de4 = 0x447;
    core_main_c_FUN_004e4330("Matrix unbalance");
  }
  iVar7 = _DAT_01d76d00 * 0x3c;
  fVar4 = _DAT_01d76cfc[10] - param_2[1];
  fVar5 = _DAT_01d76cfc[9] - *param_2;
  fVar6 = _DAT_01d76cfc[0xb] - param_2[2];
  *(float *)(iVar7 + 0x1d76d28) = fVar6 * param_1[6] + fVar5 * *param_1 + fVar4 * param_1[3];
  *(float *)(iVar7 + 0x1d76d2c) = fVar6 * param_1[7] + fVar4 * param_1[4] + fVar5 * param_1[1];
  *(float *)(iVar7 + 0x1d76d30) = fVar6 * param_1[8] + fVar4 * param_1[5] + fVar5 * param_1[2];
  *(float *)(iVar7 + 0x1d76d34) =
       _DAT_01d76cfc[0xe] * param_1[6] +
       _DAT_01d76cfc[0xc] * *param_1 + _DAT_01d76cfc[0xd] * param_1[3];
  *(float *)(iVar7 + 0x1d76d38) =
       _DAT_01d76cfc[0xe] * param_1[7] +
       _DAT_01d76cfc[0xd] * param_1[4] + _DAT_01d76cfc[0xc] * param_1[1];
  *(float *)(iVar7 + 0x1d76d3c) =
       _DAT_01d76cfc[0xe] * param_1[8] +
       _DAT_01d76cfc[0xd] * param_1[5] + _DAT_01d76cfc[0xc] * param_1[2];
  *(float *)(&DAT_01d76d04 + iVar7) =
       param_1[6] * _DAT_01d76cfc[6] + *param_1 * *_DAT_01d76cfc + param_1[3] * _DAT_01d76cfc[3];
  *(float *)(&DAT_01d76d08 + iVar7) =
       param_1[6] * _DAT_01d76cfc[7] + *param_1 * _DAT_01d76cfc[1] + param_1[3] * _DAT_01d76cfc[4];
  *(float *)(&DAT_01d76d0c + iVar7) =
       param_1[6] * _DAT_01d76cfc[8] + *param_1 * _DAT_01d76cfc[2] + param_1[3] * _DAT_01d76cfc[5];
  *(float *)(&DAT_01d76d10 + iVar7) =
       param_1[7] * _DAT_01d76cfc[6] + param_1[1] * *_DAT_01d76cfc + param_1[4] * _DAT_01d76cfc[3];
  *(float *)(&DAT_01d76d14 + iVar7) =
       param_1[7] * _DAT_01d76cfc[7] + param_1[4] * _DAT_01d76cfc[4] + param_1[1] * _DAT_01d76cfc[1]
  ;
  *(float *)(&DAT_01d76d18 + iVar7) =
       param_1[7] * _DAT_01d76cfc[8] + param_1[4] * _DAT_01d76cfc[5] + param_1[1] * _DAT_01d76cfc[2]
  ;
  *(float *)(&DAT_01d76d1c + iVar7) =
       param_1[8] * _DAT_01d76cfc[6] + param_1[2] * *_DAT_01d76cfc + param_1[5] * _DAT_01d76cfc[3];
  *(float *)(&DAT_01d76d20 + iVar7) =
       param_1[8] * _DAT_01d76cfc[7] + param_1[5] * _DAT_01d76cfc[4] + param_1[2] * _DAT_01d76cfc[1]
  ;
  pfVar1 = _DAT_01d76cfc + 2;
  pfVar2 = _DAT_01d76cfc + 5;
  pfVar3 = _DAT_01d76cfc + 8;
  _DAT_01d7977c = 1;
  _DAT_01d76cfc = (float *)(&DAT_01d76d04 + iVar7);
  *(float *)(&DAT_01d76d24 + iVar7) =
       param_1[8] * *pfVar3 + param_1[5] * *pfVar2 + param_1[2] * *pfVar1;
  return;
}
