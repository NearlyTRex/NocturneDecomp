// Name: core_xform.cpp_FUN_005b7410
// Address: 005b7410
// Address Range: [[005b7410, 005b7550]]
// Convention: __cdecl
// Signature: CQuaternion4f * __cdecl core_xform_cpp_FUN_005b7410(CMatrix3x4f *matrix_out,CQuaternion4f *quat_in)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CQuaternion4f * __cdecl core_xform_cpp_FUN_005b7410(CMatrix3x4f *matrix_out,CQuaternion4f *quat_in)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar7 = _DAT_005fa164 /
          (quat_in->z * quat_in->z +
          quat_in->y * quat_in->y + quat_in->w * quat_in->w + quat_in->x * quat_in->x);
  fVar8 = quat_in->x * fVar7;
  fVar5 = quat_in->y * fVar7;
  fVar7 = quat_in->z * fVar7;
  fVar9 = quat_in->w * fVar8;
  fVar1 = quat_in->w * fVar5;
  fVar2 = quat_in->w * fVar7;
  fVar8 = quat_in->x * fVar8;
  fVar3 = quat_in->x * fVar5;
  fVar4 = quat_in->x * fVar7;
  fVar5 = quat_in->y * fVar5;
  fVar6 = quat_in->y * fVar7;
  fVar7 = quat_in->z * fVar7;
  matrix_out->m[1].w = fVar3 + fVar2;
  matrix_out->m[2].w = fVar4 - fVar1;
  matrix_out->m[0].x = fVar3 - fVar2;
  matrix_out->m[2].x = fVar6 + fVar9;
  matrix_out->m[0].y = fVar4 + fVar1;
  matrix_out->m[1].y = fVar6 - fVar9;
  matrix_out->m[0].w = 1.0 - (fVar5 + fVar7);
  matrix_out->m[1].x = 1.0 - (fVar8 + fVar7);
  matrix_out->m[2].y = 1.0 - (fVar8 + fVar5);
  return quat_in;
}
