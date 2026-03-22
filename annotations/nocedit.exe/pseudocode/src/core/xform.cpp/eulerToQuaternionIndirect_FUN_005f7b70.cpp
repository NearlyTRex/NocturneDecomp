// Name: core_xform.cpp_eulerToQuaternionIndirect_FUN_005f7b70
// Address: 005f7b70
// Address Range: [[005f7b70, 005f7bb8] [00604bf5, 00604c17]]
// Convention: __stack_esi
// Signature: CQuaternion4f * __stack_esi core_xform_cpp_eulerToQuaternionIndirect_FUN_005f7b70(CVector3f *euler_angles,CQuaternion4f *quat_out)

#include "nocturne.h"

CQuaternion4f * __stack_esi core_xform_cpp_eulerToQuaternionIndirect_FUN_005f7b70(CVector3f *euler_angles,CQuaternion4f *quat_out)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  CMatrix3x4f local_58;
  CQuaternion4f local_28;
  CVector3f local_18;
  
  local_18.x = 0.0;
  local_18.y = 0.0;
  local_18.z = 0.0;
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(&local_58,&local_18,euler_angles);
  core_xform_cpp_matrixToQuaternion_FUN_005f7420((CMatrix3x3f *)&local_58,&local_28);
  quat_out->w = local_28.w;
  quat_out->x = local_28.x;
  quat_out->y = local_28.y;
  quat_out->z = local_28.z;
  return quat_out;
}
