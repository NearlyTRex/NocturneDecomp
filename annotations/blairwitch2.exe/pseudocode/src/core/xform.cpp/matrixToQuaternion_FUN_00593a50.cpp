// Name: core_xform.cpp_matrixToQuaternion_FUN_00593a50
// Address: 00593a50
// Address Range: [[00593a50, 00593bf9]]
// Convention: __stack_esi
// Signature: CQuaternion4f * __stack_esi core_xform_cpp_matrixToQuaternion_FUN_00593a50(CMatrix3x3f *matrix_in,CQuaternion4f *quat_out)

#include "nocturne.h"

CQuaternion4f * __stack_esi core_xform_cpp_matrixToQuaternion_FUN_00593a50(CMatrix3x3f *matrix_in,CQuaternion4f *quat_out)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_30;
  float local_2c;
  
  fVar1 = matrix_in->m[0].x + matrix_in->m[1].z;
  fVar2 = fVar1 + matrix_in[1].m[0].y;
  if (0.0 < fVar2) {
    local_30 = SQRT(fVar2 + 1.0);
    fVar1 = 0.5f / local_30;
    local_30 = local_30 * 0.5f;
    local_2c = (matrix_in[1].m[0].x - matrix_in->m[2].x) * fVar1;
    fVar2 = (matrix_in->m[0].z - matrix_in->m[2].z) * fVar1;
    fVar1 = (matrix_in->m[1].y - matrix_in->m[0].y) * fVar1;
LAB_00593ada:
    quat_out->w = local_30;
    quat_out->x = local_2c;
    quat_out->y = fVar2;
    quat_out->z = fVar1;
    return quat_out;
  }
  if (matrix_in->m[0].x <= matrix_in->m[1].z) {
    if (matrix_in[1].m[0].y < matrix_in->m[1].z) {
      fVar5 = SQRT((matrix_in->m[1].z - (matrix_in[1].m[0].y + matrix_in->m[0].x)) + 1.0);
      fVar6 = 0.5f / fVar5;
      fVar5 = fVar5 * 0.5f;
      fVar1 = matrix_in->m[0].y;
      fVar2 = matrix_in[1].m[0].x;
      fVar3 = matrix_in->m[2].x;
      fVar4 = matrix_in->m[1].y;
      quat_out->w = (matrix_in->m[0].z - matrix_in->m[2].z) * fVar6;
      quat_out->x = (fVar1 + fVar4) * fVar6;
      quat_out->y = fVar5;
      quat_out->z = (fVar2 + fVar3) * fVar6;
      return quat_out;
    }
  }
  else if (matrix_in[1].m[0].y < matrix_in->m[0].x) {
    local_2c = SQRT((matrix_in->m[0].x - (matrix_in->m[1].z + matrix_in[1].m[0].y)) + 1.0);
    fVar1 = 0.5f / local_2c;
    local_2c = local_2c * 0.5f;
    local_30 = (matrix_in[1].m[0].x - matrix_in->m[2].x) * fVar1;
    fVar2 = (matrix_in->m[1].y + matrix_in->m[0].y) * fVar1;
    fVar1 = (matrix_in->m[2].z + matrix_in->m[0].z) * fVar1;
    goto LAB_00593ada;
  }
  fVar5 = SQRT((matrix_in[1].m[0].y - fVar1) + 1.0);
  fVar6 = 0.5f / fVar5;
  fVar5 = fVar5 * 0.5f;
  fVar1 = matrix_in->m[2].x;
  fVar2 = matrix_in->m[0].z;
  fVar3 = matrix_in->m[2].z;
  fVar4 = matrix_in[1].m[0].x;
  quat_out->w = (matrix_in->m[1].y - matrix_in->m[0].y) * fVar6;
  quat_out->x = (fVar2 + fVar3) * fVar6;
  quat_out->y = (fVar1 + fVar4) * fVar6;
  quat_out->z = fVar5;
  return quat_out;
}
