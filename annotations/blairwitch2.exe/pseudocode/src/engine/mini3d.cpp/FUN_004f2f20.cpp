// Name: engine_mini3d.cpp_FUN_004f2f20
// Address: 004f2f20
// Address Range: [[004f2f20, 004f3117]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f2f20(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f2f20(float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  
  _DAT_01d0991c = _DAT_01d0991c + 1;
  if (9 < _DAT_01d0991c) {
    _DAT_01d046a0 = "..\\engine\\mini3d.cpp";
    _DAT_01d046a4 = 0x437;
    core_main_c_FUN_004e4500("Matrix unbalance");
  }
  iVar7 = _DAT_01d0991c * 0x3c;
  fVar4 = _DAT_01d09918[10] - param_2[1];
  fVar5 = _DAT_01d09918[9] - *param_2;
  fVar6 = _DAT_01d09918[0xb] - param_2[2];
  *(float *)(iVar7 + 0x1d09944) = fVar6 * param_1[6] + fVar5 * *param_1 + fVar4 * param_1[3];
  *(float *)(iVar7 + 0x1d09948) = fVar6 * param_1[7] + fVar4 * param_1[4] + fVar5 * param_1[1];
  *(float *)(iVar7 + 0x1d0994c) = fVar6 * param_1[8] + fVar4 * param_1[5] + fVar5 * param_1[2];
  *(float *)(iVar7 + 0x1d09950) =
       _DAT_01d09918[0xe] * param_1[6] +
       _DAT_01d09918[0xc] * *param_1 + _DAT_01d09918[0xd] * param_1[3];
  *(float *)(iVar7 + 0x1d09954) =
       _DAT_01d09918[0xe] * param_1[7] +
       _DAT_01d09918[0xd] * param_1[4] + _DAT_01d09918[0xc] * param_1[1];
  *(float *)(iVar7 + 0x1d09958) =
       _DAT_01d09918[0xe] * param_1[8] +
       _DAT_01d09918[0xd] * param_1[5] + _DAT_01d09918[0xc] * param_1[2];
  *(float *)(&DAT_01d09920 + iVar7) =
       param_1[6] * _DAT_01d09918[6] + *param_1 * *_DAT_01d09918 + param_1[3] * _DAT_01d09918[3];
  *(float *)(&DAT_01d09924 + iVar7) =
       param_1[6] * _DAT_01d09918[7] + *param_1 * _DAT_01d09918[1] + param_1[3] * _DAT_01d09918[4];
  *(float *)(&DAT_01d09928 + iVar7) =
       param_1[6] * _DAT_01d09918[8] + *param_1 * _DAT_01d09918[2] + param_1[3] * _DAT_01d09918[5];
  *(float *)(&DAT_01d0992c + iVar7) =
       param_1[7] * _DAT_01d09918[6] + param_1[1] * *_DAT_01d09918 + param_1[4] * _DAT_01d09918[3];
  *(float *)(&DAT_01d09930 + iVar7) =
       param_1[7] * _DAT_01d09918[7] + param_1[4] * _DAT_01d09918[4] + param_1[1] * _DAT_01d09918[1]
  ;
  *(float *)(&DAT_01d09934 + iVar7) =
       param_1[7] * _DAT_01d09918[8] + param_1[4] * _DAT_01d09918[5] + param_1[1] * _DAT_01d09918[2]
  ;
  *(float *)(&DAT_01d09938 + iVar7) =
       param_1[8] * _DAT_01d09918[6] + param_1[2] * *_DAT_01d09918 + param_1[5] * _DAT_01d09918[3];
  *(float *)(&DAT_01d0993c + iVar7) =
       param_1[8] * _DAT_01d09918[7] + param_1[5] * _DAT_01d09918[4] + param_1[2] * _DAT_01d09918[1]
  ;
  pfVar1 = _DAT_01d09918 + 2;
  pfVar2 = _DAT_01d09918 + 5;
  pfVar3 = _DAT_01d09918 + 8;
  _DAT_01d0c398 = 1;
  _DAT_01d09918 = (float *)(&DAT_01d09920 + iVar7);
  *(float *)(&DAT_01d09940 + iVar7) =
       param_1[8] * *pfVar3 + param_1[5] * *pfVar2 + param_1[2] * *pfVar1;
  return;
}
