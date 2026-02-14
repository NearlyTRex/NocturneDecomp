// Name: core_xform.cpp_multiplyQuaternion_FUN_005f7640
// Address: 005f7640
// Address Range: [[005f7640, 005f76f1]]
// Convention: __stack2_esi
// Signature: CQuaternion4f * __stack2_esi core_xform_cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f *quat1_in,CQuaternion4f *quat2_in,CQuaternion4f *quat_out)

#include "nocturne.h"

CQuaternion4f * __stack2_esi core_xform_cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f *quat1_in,CQuaternion4f *quat2_in,CQuaternion4f *quat_out)

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
  
  fVar1 = quat2_in->w;
  fVar2 = quat1_in->x;
  fVar3 = quat2_in->w;
  fVar4 = quat1_in->y;
  fVar5 = quat2_in->w;
  fVar6 = quat1_in->z;
  fVar7 = quat1_in->w;
  fVar8 = quat2_in->x;
  fVar9 = quat1_in->w;
  fVar10 = quat2_in->y;
  fVar11 = quat1_in->w;
  fVar12 = quat2_in->z;
  fVar13 = quat2_in->y;
  fVar14 = quat1_in->z;
  fVar15 = quat2_in->z;
  fVar16 = quat1_in->x;
  fVar17 = quat2_in->z;
  fVar18 = quat1_in->y;
  fVar19 = quat2_in->x;
  fVar20 = quat1_in->y;
  fVar21 = quat2_in->x;
  fVar22 = quat1_in->z;
  fVar23 = quat2_in->y;
  fVar24 = quat1_in->x;
  quat_out->w = quat2_in->w * quat1_in->w -
                (quat2_in->z * quat1_in->z + quat2_in->y * quat1_in->y + quat2_in->x * quat1_in->x);
  quat_out->x = (fVar13 * fVar14 + fVar7 * fVar8 + fVar1 * fVar2) - fVar17 * fVar18;
  quat_out->y = (fVar15 * fVar16 + fVar9 * fVar10 + fVar3 * fVar4) - fVar21 * fVar22;
  quat_out->z = (fVar19 * fVar20 + fVar11 * fVar12 + fVar5 * fVar6) - fVar23 * fVar24;
  return quat_out;
}
