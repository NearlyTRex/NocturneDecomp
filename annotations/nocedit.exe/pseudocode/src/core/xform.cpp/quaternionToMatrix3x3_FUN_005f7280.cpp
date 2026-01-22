// Name: core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280
// Address: 005f7280
// Address Range: [[005f7280, 005f73d4]]
// Convention: __cdecl
// Signature: CQuaternion4f * core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280(CMatrix3x3f * matrix_in, CQuaternion4f * quat_out)

#include "nocturne.h"

CQuaternion4f * __cdecl
core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280(CMatrix3x3f *matrix_in,CQuaternion4f *quat_out)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = quat_out->x;
  fVar4 = (float)2 /
          (quat_out->z * quat_out->z +
          quat_out->y * quat_out->y + quat_out->w * quat_out->w + quat_out->x * quat_out->x);
  fVar2 = quat_out->y;
  fVar5 = fVar2 * fVar4;
  fVar6 = quat_out->z * fVar4;
  fVar3 = quat_out->w;
  fVar7 = fVar3 * fVar1 * fVar4;
  fVar4 = fVar1 * fVar1 * fVar4;
  fVar8 = quat_out->z * fVar6;
  matrix_in->m[1].y = fVar1 * fVar5 + fVar3 * fVar6;
  matrix_in->m[2].z = fVar1 * fVar6 - fVar3 * fVar5;
  matrix_in->m[0].y = fVar1 * fVar5 - fVar3 * fVar6;
  matrix_in[1].m[0].x = fVar2 * fVar6 + fVar7;
  matrix_in->m[0].z = fVar1 * fVar6 + fVar3 * fVar5;
  matrix_in->m[2].x = fVar2 * fVar6 - fVar7;
  matrix_in->m[0].x = 1.0 - (fVar2 * fVar5 + fVar8);
  matrix_in->m[1].z = 1.0 - (fVar4 + fVar8);
  matrix_in[1].m[0].y = 1.0 - (fVar4 + fVar2 * fVar5);
  return quat_out;
}
