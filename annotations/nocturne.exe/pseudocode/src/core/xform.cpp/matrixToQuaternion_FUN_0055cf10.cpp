// Name: core_xform.cpp_matrixToQuaternion_FUN_0055cf10
// Address: 0055cf10
// Address Range: [[0055cf10, 0055d0c5]]
// Convention: __stack_esi
// Signature: CQuaternion4f * __stack_esi core_xform_cpp_matrixToQuaternion_FUN_0055cf10(CMatrix3x3f *matrix_in,CQuaternion4f *quat_out)

#include "nocturne.h"

CQuaternion4f * __stack_esi core_xform_cpp_matrixToQuaternion_FUN_0055cf10(CMatrix3x3f *matrix_in,CQuaternion4f *quat_out)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_48;
  float local_44;
  
  fVar1 = matrix_in->m[0].x + matrix_in->m[1].z;
  fVar2 = fVar1 + matrix_in[1].m[0].y;
  if (0.0 < fVar2) {
    local_48 = SQRT(fVar2 + 1.0);
    fVar1 = (float)0.5 / local_48;
    local_48 = local_48 * (float)0.5;
    local_44 = (matrix_in[1].m[0].x - matrix_in->m[2].x) * fVar1;
    fVar2 = (matrix_in->m[0].z - matrix_in->m[2].z) * fVar1;
    fVar1 = (matrix_in->m[1].y - matrix_in->m[0].y) * fVar1;
LAB_0055cf9e:
    quat_out->w = local_48;
    quat_out->x = local_44;
    quat_out->y = fVar2;
    quat_out->z = fVar1;
    return quat_out;
  }
  if (matrix_in->m[0].x <= matrix_in->m[1].z) {
    if (matrix_in[1].m[0].y < matrix_in->m[1].z) {
      fVar5 = SQRT((matrix_in->m[1].z - (matrix_in[1].m[0].y + matrix_in->m[0].x)) + 1.0);
      fVar7 = (float)0.5;
      fVar6 = fVar7 / fVar5;
      fVar1 = matrix_in->m[0].y;
      fVar2 = matrix_in[1].m[0].x;
      fVar3 = matrix_in->m[2].x;
      fVar4 = matrix_in->m[1].y;
      quat_out->w = (matrix_in->m[0].z - matrix_in->m[2].z) * fVar6;
      quat_out->x = (fVar1 + fVar4) * fVar6;
      quat_out->y = fVar5 * fVar7;
      quat_out->z = (fVar2 + fVar3) * fVar6;
      return quat_out;
    }
  }
  else if (matrix_in[1].m[0].y < matrix_in->m[0].x) {
    local_44 = SQRT((matrix_in->m[0].x - (matrix_in->m[1].z + matrix_in[1].m[0].y)) + 1.0);
    fVar1 = (float)0.5 / local_44;
    local_44 = local_44 * (float)0.5;
    local_48 = (matrix_in[1].m[0].x - matrix_in->m[2].x) * fVar1;
    fVar2 = (matrix_in->m[1].y + matrix_in->m[0].y) * fVar1;
    fVar1 = (matrix_in->m[2].z + matrix_in->m[0].z) * fVar1;
    goto LAB_0055cf9e;
  }
  fVar5 = SQRT((matrix_in[1].m[0].y - fVar1) + 1.0);
  fVar7 = (float)0.5;
  fVar6 = fVar7 / fVar5;
  fVar1 = matrix_in->m[2].x;
  fVar2 = matrix_in->m[0].z;
  fVar3 = matrix_in->m[2].z;
  fVar4 = matrix_in[1].m[0].x;
  quat_out->w = (matrix_in->m[1].y - matrix_in->m[0].y) * fVar6;
  quat_out->x = (fVar2 + fVar3) * fVar6;
  quat_out->y = (fVar1 + fVar4) * fVar6;
  quat_out->z = fVar5 * fVar7;
  return quat_out;
}
