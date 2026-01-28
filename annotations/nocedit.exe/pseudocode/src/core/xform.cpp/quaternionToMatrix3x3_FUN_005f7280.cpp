// Name: core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280
// Address: 005f7280
// Address Range: [[005f7280, 005f73d4]]
// Convention: __cdecl
// Signature: CQuaternion4f * __cdecl core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280(CMatrix3x3f *matrix_out,CQuaternion4f *quat_in)

#include "nocturne.h"

CQuaternion4f * __cdecl
core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280(CMatrix3x3f *matrix_out,CQuaternion4f *quat_in)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = quat_in->x;
  fVar4 = (float)2 /
          (quat_in->z * quat_in->z +
          quat_in->y * quat_in->y + quat_in->w * quat_in->w + quat_in->x * quat_in->x);
  fVar2 = quat_in->y;
  fVar5 = fVar2 * fVar4;
  fVar6 = quat_in->z * fVar4;
  fVar3 = quat_in->w;
  fVar7 = fVar3 * fVar1 * fVar4;
  fVar4 = fVar1 * fVar1 * fVar4;
  fVar8 = quat_in->z * fVar6;
  matrix_out->m[1].y = fVar1 * fVar5 + fVar3 * fVar6;
  matrix_out->m[2].z = fVar1 * fVar6 - fVar3 * fVar5;
  matrix_out->m[0].y = fVar1 * fVar5 - fVar3 * fVar6;
  matrix_out[1].m[0].x = fVar2 * fVar6 + fVar7;
  matrix_out->m[0].z = fVar1 * fVar6 + fVar3 * fVar5;
  matrix_out->m[2].x = fVar2 * fVar6 - fVar7;
  matrix_out->m[0].x = 1.0 - (fVar2 * fVar5 + fVar8);
  matrix_out->m[1].z = 1.0 - (fVar4 + fVar8);
  matrix_out[1].m[0].y = 1.0 - (fVar4 + fVar2 * fVar5);
  return quat_in;
}
