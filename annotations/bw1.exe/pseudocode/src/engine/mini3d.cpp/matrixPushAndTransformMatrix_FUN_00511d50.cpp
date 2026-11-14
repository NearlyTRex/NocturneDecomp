// Name: engine_mini3d.cpp_matrixPushAndTransformMatrix_FUN_00511d50
// Address: 00511d50
// Address Range: [[00511d50, 00511f47]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_matrixPushAndTransformMatrix_FUN_00511d50(CMatrix3x3f *rotation,CVector3f *position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_matrixPushAndTransformMatrix_FUN_00511d50(CMatrix3x3f *rotation,CVector3f *position)

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
  fVar4 = _DAT_01d2257c[10] - position->y;
  fVar5 = _DAT_01d2257c[9] - position->x;
  fVar6 = _DAT_01d2257c[0xb] - position->z;
  *(float *)(iVar7 + 0x1d225a8) =
       fVar6 * rotation->m[2].x + fVar5 * rotation->m[0].x + fVar4 * rotation->m[1].x;
  *(float *)(iVar7 + 0x1d225ac) =
       fVar6 * rotation->m[2].y + fVar4 * rotation->m[1].y + fVar5 * rotation->m[0].y;
  *(float *)(iVar7 + 0x1d225b0) =
       fVar6 * rotation->m[2].z + fVar4 * rotation->m[1].z + fVar5 * rotation->m[0].z;
  *(float *)(iVar7 + 0x1d225b4) =
       _DAT_01d2257c[0xe] * rotation->m[2].x +
       _DAT_01d2257c[0xc] * rotation->m[0].x + _DAT_01d2257c[0xd] * rotation->m[1].x;
  *(float *)(iVar7 + 0x1d225b8) =
       _DAT_01d2257c[0xe] * rotation->m[2].y +
       _DAT_01d2257c[0xd] * rotation->m[1].y + _DAT_01d2257c[0xc] * rotation->m[0].y;
  *(float *)(iVar7 + 0x1d225bc) =
       _DAT_01d2257c[0xe] * rotation->m[2].z +
       _DAT_01d2257c[0xd] * rotation->m[1].z + _DAT_01d2257c[0xc] * rotation->m[0].z;
  *(float *)(&DAT_01d22584 + iVar7) =
       rotation->m[2].x * _DAT_01d2257c[6] +
       rotation->m[0].x * *_DAT_01d2257c + rotation->m[1].x * _DAT_01d2257c[3];
  *(float *)(&DAT_01d22588 + iVar7) =
       rotation->m[2].x * _DAT_01d2257c[7] +
       rotation->m[0].x * _DAT_01d2257c[1] + rotation->m[1].x * _DAT_01d2257c[4];
  *(float *)(&DAT_01d2258c + iVar7) =
       rotation->m[2].x * _DAT_01d2257c[8] +
       rotation->m[0].x * _DAT_01d2257c[2] + rotation->m[1].x * _DAT_01d2257c[5];
  *(float *)(&DAT_01d22590 + iVar7) =
       rotation->m[2].y * _DAT_01d2257c[6] +
       rotation->m[0].y * *_DAT_01d2257c + rotation->m[1].y * _DAT_01d2257c[3];
  *(float *)(&DAT_01d22594 + iVar7) =
       rotation->m[2].y * _DAT_01d2257c[7] +
       rotation->m[1].y * _DAT_01d2257c[4] + rotation->m[0].y * _DAT_01d2257c[1];
  *(float *)(&DAT_01d22598 + iVar7) =
       rotation->m[2].y * _DAT_01d2257c[8] +
       rotation->m[1].y * _DAT_01d2257c[5] + rotation->m[0].y * _DAT_01d2257c[2];
  *(float *)(&DAT_01d2259c + iVar7) =
       rotation->m[2].z * _DAT_01d2257c[6] +
       rotation->m[0].z * *_DAT_01d2257c + rotation->m[1].z * _DAT_01d2257c[3];
  *(float *)(&DAT_01d225a0 + iVar7) =
       rotation->m[2].z * _DAT_01d2257c[7] +
       rotation->m[1].z * _DAT_01d2257c[4] + rotation->m[0].z * _DAT_01d2257c[1];
  pfVar1 = _DAT_01d2257c + 2;
  pfVar2 = _DAT_01d2257c + 5;
  pfVar3 = _DAT_01d2257c + 8;
  _DAT_01d24ffc = 1;
  _DAT_01d2257c = (float *)(&DAT_01d22584 + iVar7);
  *(float *)(&DAT_01d225a4 + iVar7) =
       rotation->m[2].z * *pfVar3 + rotation->m[1].z * *pfVar2 + rotation->m[0].z * *pfVar1;
  return;
}
