// Name: core_xform.cpp_multiplyQuaternion_FUN_005f7640
// Address: 005f7640
// Address Range: [[005f7640, 005f76f1]]
// Convention: __stack2_esi
// Signature: CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * result_out, CQuaternion4f * quat1_ptr, CQuaternion4f * quat2_ptr)

#include "nocturne.h"

CQuaternion4f * __stack2_esi
core_xform_cpp_multiplyQuaternion_FUN_005f7640
          (CQuaternion4f *result_out,CQuaternion4f *quat1_ptr,CQuaternion4f *quat2_ptr)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar1 = quat1_ptr->w;
  fVar2 = result_out->x;
  fVar3 = quat1_ptr->w;
  fVar4 = result_out->y;
  fVar5 = quat1_ptr->w;
  fVar6 = result_out->z;
  fVar7 = result_out->w;
  fVar8 = quat1_ptr->x;
  fVar9 = result_out->w;
  fVar10 = quat1_ptr->y;
  fVar11 = result_out->w;
  fVar12 = quat1_ptr->z;
  fVar13 = quat1_ptr->y;
  fVar14 = result_out->z;
  fVar15 = quat1_ptr->z;
  fVar16 = result_out->x;
  fVar17 = quat1_ptr->z;
  fVar18 = result_out->y;
  fVar19 = quat1_ptr->x;
  fVar20 = result_out->y;
  fVar21 = quat1_ptr->x;
  fVar22 = result_out->z;
  fVar23 = quat1_ptr->y;
  fVar24 = result_out->x;
  quat2_ptr->w = quat1_ptr->w * result_out->w -
                 (quat1_ptr->z * result_out->z +
                 quat1_ptr->y * result_out->y + quat1_ptr->x * result_out->x);
  quat2_ptr->x = (fVar13 * fVar14 + fVar7 * fVar8 + fVar1 * fVar2) - fVar17 * fVar18;
  quat2_ptr->y = (fVar15 * fVar16 + fVar9 * fVar10 + fVar3 * fVar4) - fVar21 * fVar22;
  quat2_ptr->z = (fVar19 * fVar20 + fVar11 * fVar12 + fVar5 * fVar6) - fVar23 * fVar24;
  return quat2_ptr;
}
