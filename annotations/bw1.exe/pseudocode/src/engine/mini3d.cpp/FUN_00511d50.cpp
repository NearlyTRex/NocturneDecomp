// Name: engine_mini3d.cpp_FUN_00511d50
// Address: 00511d50
// Address Range: [[00511d50, 00511f47]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_00511d50(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_00511d50(float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  
  _DAT_01d22580 = _DAT_01d22580 + 1;
  if (9 < _DAT_01d22580) {
    _DAT_01d1d400 = "..\\engine\\mini3d.cpp";
    _DAT_01d1d404 = 0x447;
    core_main_c_FUN_005030e0("Matrix unbalance");
  }
  iVar7 = _DAT_01d22580 * 0x3c;
  fVar4 = _DAT_01d2257c[10] - param_2[1];
  fVar5 = _DAT_01d2257c[9] - *param_2;
  fVar6 = _DAT_01d2257c[0xb] - param_2[2];
  *(float *)(iVar7 + 0x1d225a8) = fVar6 * param_1[6] + fVar5 * *param_1 + fVar4 * param_1[3];
  *(float *)(iVar7 + 0x1d225ac) = fVar6 * param_1[7] + fVar4 * param_1[4] + fVar5 * param_1[1];
  *(float *)(iVar7 + 0x1d225b0) = fVar6 * param_1[8] + fVar4 * param_1[5] + fVar5 * param_1[2];
  *(float *)(iVar7 + 0x1d225b4) =
       _DAT_01d2257c[0xe] * param_1[6] +
       _DAT_01d2257c[0xc] * *param_1 + _DAT_01d2257c[0xd] * param_1[3];
  *(float *)(iVar7 + 0x1d225b8) =
       _DAT_01d2257c[0xe] * param_1[7] +
       _DAT_01d2257c[0xd] * param_1[4] + _DAT_01d2257c[0xc] * param_1[1];
  *(float *)(iVar7 + 0x1d225bc) =
       _DAT_01d2257c[0xe] * param_1[8] +
       _DAT_01d2257c[0xd] * param_1[5] + _DAT_01d2257c[0xc] * param_1[2];
  *(float *)(&DAT_01d22584 + iVar7) =
       param_1[6] * _DAT_01d2257c[6] + *param_1 * *_DAT_01d2257c + param_1[3] * _DAT_01d2257c[3];
  *(float *)(&DAT_01d22588 + iVar7) =
       param_1[6] * _DAT_01d2257c[7] + *param_1 * _DAT_01d2257c[1] + param_1[3] * _DAT_01d2257c[4];
  *(float *)(&DAT_01d2258c + iVar7) =
       param_1[6] * _DAT_01d2257c[8] + *param_1 * _DAT_01d2257c[2] + param_1[3] * _DAT_01d2257c[5];
  *(float *)(&DAT_01d22590 + iVar7) =
       param_1[7] * _DAT_01d2257c[6] + param_1[1] * *_DAT_01d2257c + param_1[4] * _DAT_01d2257c[3];
  *(float *)(&DAT_01d22594 + iVar7) =
       param_1[7] * _DAT_01d2257c[7] + param_1[4] * _DAT_01d2257c[4] + param_1[1] * _DAT_01d2257c[1]
  ;
  *(float *)(&DAT_01d22598 + iVar7) =
       param_1[7] * _DAT_01d2257c[8] + param_1[4] * _DAT_01d2257c[5] + param_1[1] * _DAT_01d2257c[2]
  ;
  *(float *)(&DAT_01d2259c + iVar7) =
       param_1[8] * _DAT_01d2257c[6] + param_1[2] * *_DAT_01d2257c + param_1[5] * _DAT_01d2257c[3];
  *(float *)(&DAT_01d225a0 + iVar7) =
       param_1[8] * _DAT_01d2257c[7] + param_1[5] * _DAT_01d2257c[4] + param_1[2] * _DAT_01d2257c[1]
  ;
  pfVar1 = _DAT_01d2257c + 2;
  pfVar2 = _DAT_01d2257c + 5;
  pfVar3 = _DAT_01d2257c + 8;
  _DAT_01d24ffc = 1;
  _DAT_01d2257c = (float *)(&DAT_01d22584 + iVar7);
  *(float *)(&DAT_01d225a4 + iVar7) =
       param_1[8] * *pfVar3 + param_1[5] * *pfVar2 + param_1[2] * *pfVar1;
  return;
}
