// Name: core_xform.cpp_eulerToQuaternion_FUN_005f7b20
// Address: 005f7b20
// Address Range: [[005f7b20, 005f7b68] [00604c18, 00604c3a]]
// Convention: __stack_esi
// Signature: CQuaternion4f * __stack_esi core_xform_cpp_eulerToQuaternion_FUN_005f7b20(CVector3f *euler_angles,CQuaternion4f *quat_out)

#include "nocturne.h"

CQuaternion4f * __stack_esi core_xform_cpp_eulerToQuaternion_FUN_005f7b20(CVector3f *euler_angles,CQuaternion4f *quat_out)

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
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_58,&local_18,euler_angles);
  core_xform_cpp_matrixToQuaternion_FUN_005f7420((CMatrix3x3f *)&local_58,&local_28);
  quat_out->w = local_28.w;
  quat_out->x = local_28.x;
  quat_out->y = local_28.y;
  quat_out->z = local_28.z;
  return quat_out;
}
