// Name: core_xform.cpp_matrixToQuaternion_FUN_005f7420
// Address: 005f7420
// Address Range: [[005f7420, 005f75d5] [0060f46a, 0060f4d2]]
// Convention: __stack_esi
// Signature: CQuaternion4f * __stack_esi core_xform_cpp_matrixToQuaternion_FUN_005f7420(CMatrix3x3f *matrix_in,CQuaternion4f *quat_out)

#include "nocturne.h"

CQuaternion4f * __stack_esi core_xform_cpp_matrixToQuaternion_FUN_005f7420(CMatrix3x3f *matrix_in,CQuaternion4f *quat_out)

{
  float fVar8;
  float fVar9;
  CQuaternion4f *pCVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_48;
  float local_44;
  float fVar7;
  float fVar5;
  float fVar6;
  float fVar3;
  float fVar4;
  float fVar1;
  float fVar2;
  
  fVar8 = matrix_in->m[0].x + matrix_in->m[1].z;
  fVar9 = fVar8 + matrix_in[1].m[0].y;
  if (0.0 < fVar9) {
    fVar8 = SQRT(fVar9 + 1.0);
    fVar9 = (float)0.5 / fVar8;
    local_48 = fVar8 * (float)0.5;
    local_44 = (matrix_in[1].m[0].x - matrix_in->m[2].x) * fVar9;
    fVar8 = (matrix_in->m[0].z - matrix_in->m[2].z) * fVar9;
    pCVar10 = (CQuaternion4f *)((matrix_in->m[1].y - matrix_in->m[0].y) * fVar9);
LAB_005f74ae:
    quat_out->w = local_48;
    quat_out->x = local_44;
    quat_out->y = fVar8;
    quat_out->z = (float)pCVar10;
    return pCVar10;
  }
  if (matrix_in->m[0].x <= matrix_in->m[1].z) {
    if (matrix_in[1].m[0].y < matrix_in->m[1].z) {
      fVar11 = SQRT((matrix_in->m[1].z - (matrix_in[1].m[0].y + matrix_in->m[0].x)) + 1.0);
      fVar13 = (float)0.5;
      fVar12 = fVar13 / fVar11;
      fVar8 = matrix_in->m[0].y;
      fVar9 = matrix_in->m[1].y;
      pCVar10 = (CQuaternion4f *)((matrix_in[1].m[0].x + matrix_in->m[2].x) * fVar12);
      quat_out->w = (matrix_in->m[0].z - matrix_in->m[2].z) * fVar12;
      quat_out->x = (fVar8 + fVar9) * fVar12;
      quat_out->y = fVar11 * fVar13;
      quat_out->z = (float)pCVar10;
      return pCVar10;
    }
  }
  else if (matrix_in[1].m[0].y < matrix_in->m[0].x) {
    fVar8 = SQRT((matrix_in->m[0].x - (matrix_in->m[1].z + matrix_in[1].m[0].y)) + 1.0);
    fVar9 = (float)0.5 / fVar8;
    local_44 = fVar8 * (float)0.5;
    local_48 = (matrix_in[1].m[0].x - matrix_in->m[2].x) * fVar9;
    fVar8 = (matrix_in->m[1].y + matrix_in->m[0].y) * fVar9;
    pCVar10 = (CQuaternion4f *)((matrix_in->m[2].z + matrix_in->m[0].z) * fVar9);
    goto LAB_005f74ae;
  }
  fVar5 = SQRT((matrix_in[1].m[0].y - fVar8) + 1.0);
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
  return (CQuaternion4f *)(fVar5 * fVar7);
}
