// Name: engine_mini3d.cpp_matrixPushAndTransformMatrix_FUN_004ed520
// Address: 004ed520
// Address Range: [[004ed520, 004ed717]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_matrixPushAndTransformMatrix_FUN_004ed520(CMatrix3x3f *rotation,CVector3f *position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_matrixPushAndTransformMatrix_FUN_004ed520(CMatrix3x3f *rotation,CVector3f *position)

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
  fVar4 = _DAT_01d76cfc[10] - position->y;
  fVar5 = _DAT_01d76cfc[9] - position->x;
  fVar6 = _DAT_01d76cfc[0xb] - position->z;
  *(float *)(iVar7 + 0x1d76d28) =
       fVar6 * rotation->m[2].x + fVar5 * rotation->m[0].x + fVar4 * rotation->m[1].x;
  *(float *)(iVar7 + 0x1d76d2c) =
       fVar6 * rotation->m[2].y + fVar4 * rotation->m[1].y + fVar5 * rotation->m[0].y;
  *(float *)(iVar7 + 0x1d76d30) =
       fVar6 * rotation->m[2].z + fVar4 * rotation->m[1].z + fVar5 * rotation->m[0].z;
  *(float *)(iVar7 + 0x1d76d34) =
       _DAT_01d76cfc[0xe] * rotation->m[2].x +
       _DAT_01d76cfc[0xc] * rotation->m[0].x + _DAT_01d76cfc[0xd] * rotation->m[1].x;
  *(float *)(iVar7 + 0x1d76d38) =
       _DAT_01d76cfc[0xe] * rotation->m[2].y +
       _DAT_01d76cfc[0xd] * rotation->m[1].y + _DAT_01d76cfc[0xc] * rotation->m[0].y;
  *(float *)(iVar7 + 0x1d76d3c) =
       _DAT_01d76cfc[0xe] * rotation->m[2].z +
       _DAT_01d76cfc[0xd] * rotation->m[1].z + _DAT_01d76cfc[0xc] * rotation->m[0].z;
  *(float *)(&DAT_01d76d04 + iVar7) =
       rotation->m[2].x * _DAT_01d76cfc[6] +
       rotation->m[0].x * *_DAT_01d76cfc + rotation->m[1].x * _DAT_01d76cfc[3];
  *(float *)(&DAT_01d76d08 + iVar7) =
       rotation->m[2].x * _DAT_01d76cfc[7] +
       rotation->m[0].x * _DAT_01d76cfc[1] + rotation->m[1].x * _DAT_01d76cfc[4];
  *(float *)(&DAT_01d76d0c + iVar7) =
       rotation->m[2].x * _DAT_01d76cfc[8] +
       rotation->m[0].x * _DAT_01d76cfc[2] + rotation->m[1].x * _DAT_01d76cfc[5];
  *(float *)(&DAT_01d76d10 + iVar7) =
       rotation->m[2].y * _DAT_01d76cfc[6] +
       rotation->m[0].y * *_DAT_01d76cfc + rotation->m[1].y * _DAT_01d76cfc[3];
  *(float *)(&DAT_01d76d14 + iVar7) =
       rotation->m[2].y * _DAT_01d76cfc[7] +
       rotation->m[1].y * _DAT_01d76cfc[4] + rotation->m[0].y * _DAT_01d76cfc[1];
  *(float *)(&DAT_01d76d18 + iVar7) =
       rotation->m[2].y * _DAT_01d76cfc[8] +
       rotation->m[1].y * _DAT_01d76cfc[5] + rotation->m[0].y * _DAT_01d76cfc[2];
  *(float *)(&DAT_01d76d1c + iVar7) =
       rotation->m[2].z * _DAT_01d76cfc[6] +
       rotation->m[0].z * *_DAT_01d76cfc + rotation->m[1].z * _DAT_01d76cfc[3];
  *(float *)(&DAT_01d76d20 + iVar7) =
       rotation->m[2].z * _DAT_01d76cfc[7] +
       rotation->m[1].z * _DAT_01d76cfc[4] + rotation->m[0].z * _DAT_01d76cfc[1];
  pfVar1 = _DAT_01d76cfc + 2;
  pfVar2 = _DAT_01d76cfc + 5;
  pfVar3 = _DAT_01d76cfc + 8;
  _DAT_01d7977c = 1;
  _DAT_01d76cfc = (float *)(&DAT_01d76d04 + iVar7);
  *(float *)(&DAT_01d76d24 + iVar7) =
       rotation->m[2].z * *pfVar3 + rotation->m[1].z * *pfVar2 + rotation->m[0].z * *pfVar1;
  return;
}
