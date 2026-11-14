// Name: engine_mini3d.cpp_matrixPushAndTransformMatrix_FUN_004f2f20
// Address: 004f2f20
// Address Range: [[004f2f20, 004f3117]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_matrixPushAndTransformMatrix_FUN_004f2f20(CMatrix3x3f *rotation,CVector3f *position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_matrixPushAndTransformMatrix_FUN_004f2f20(CMatrix3x3f *rotation,CVector3f *position)

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
  fVar4 = _DAT_01d09918[10] - position->y;
  fVar5 = _DAT_01d09918[9] - position->x;
  fVar6 = _DAT_01d09918[0xb] - position->z;
  *(float *)(iVar7 + 0x1d09944) =
       fVar6 * rotation->m[2].x + fVar5 * rotation->m[0].x + fVar4 * rotation->m[1].x;
  *(float *)(iVar7 + 0x1d09948) =
       fVar6 * rotation->m[2].y + fVar4 * rotation->m[1].y + fVar5 * rotation->m[0].y;
  *(float *)(iVar7 + 0x1d0994c) =
       fVar6 * rotation->m[2].z + fVar4 * rotation->m[1].z + fVar5 * rotation->m[0].z;
  *(float *)(iVar7 + 0x1d09950) =
       _DAT_01d09918[0xe] * rotation->m[2].x +
       _DAT_01d09918[0xc] * rotation->m[0].x + _DAT_01d09918[0xd] * rotation->m[1].x;
  *(float *)(iVar7 + 0x1d09954) =
       _DAT_01d09918[0xe] * rotation->m[2].y +
       _DAT_01d09918[0xd] * rotation->m[1].y + _DAT_01d09918[0xc] * rotation->m[0].y;
  *(float *)(iVar7 + 0x1d09958) =
       _DAT_01d09918[0xe] * rotation->m[2].z +
       _DAT_01d09918[0xd] * rotation->m[1].z + _DAT_01d09918[0xc] * rotation->m[0].z;
  *(float *)(&DAT_01d09920 + iVar7) =
       rotation->m[2].x * _DAT_01d09918[6] +
       rotation->m[0].x * *_DAT_01d09918 + rotation->m[1].x * _DAT_01d09918[3];
  *(float *)(&DAT_01d09924 + iVar7) =
       rotation->m[2].x * _DAT_01d09918[7] +
       rotation->m[0].x * _DAT_01d09918[1] + rotation->m[1].x * _DAT_01d09918[4];
  *(float *)(&DAT_01d09928 + iVar7) =
       rotation->m[2].x * _DAT_01d09918[8] +
       rotation->m[0].x * _DAT_01d09918[2] + rotation->m[1].x * _DAT_01d09918[5];
  *(float *)(&DAT_01d0992c + iVar7) =
       rotation->m[2].y * _DAT_01d09918[6] +
       rotation->m[0].y * *_DAT_01d09918 + rotation->m[1].y * _DAT_01d09918[3];
  *(float *)(&DAT_01d09930 + iVar7) =
       rotation->m[2].y * _DAT_01d09918[7] +
       rotation->m[1].y * _DAT_01d09918[4] + rotation->m[0].y * _DAT_01d09918[1];
  *(float *)(&DAT_01d09934 + iVar7) =
       rotation->m[2].y * _DAT_01d09918[8] +
       rotation->m[1].y * _DAT_01d09918[5] + rotation->m[0].y * _DAT_01d09918[2];
  *(float *)(&DAT_01d09938 + iVar7) =
       rotation->m[2].z * _DAT_01d09918[6] +
       rotation->m[0].z * *_DAT_01d09918 + rotation->m[1].z * _DAT_01d09918[3];
  *(float *)(&DAT_01d0993c + iVar7) =
       rotation->m[2].z * _DAT_01d09918[7] +
       rotation->m[1].z * _DAT_01d09918[4] + rotation->m[0].z * _DAT_01d09918[1];
  pfVar1 = _DAT_01d09918 + 2;
  pfVar2 = _DAT_01d09918 + 5;
  pfVar3 = _DAT_01d09918 + 8;
  _DAT_01d0c398 = 1;
  _DAT_01d09918 = (float *)(&DAT_01d09920 + iVar7);
  *(float *)(&DAT_01d09940 + iVar7) =
       rotation->m[2].z * *pfVar3 + rotation->m[1].z * *pfVar2 + rotation->m[0].z * *pfVar1;
  return;
}
