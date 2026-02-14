// Name: core_xform.cpp_eulerToQuaternion_FUN_005f7b20
// Address: 005f7b20
// Address Range: [[005f7b20, 005f7b68]]
// Convention: __stack_esi
// Signature: CQuaternion4f * __stack_esi core_xform_cpp_eulerToQuaternion_FUN_005f7b20(CVector3f *euler_angles,CQuaternion4f *quat_out)

#include "nocturne.h"

CQuaternion4f * __stack_esi core_xform_cpp_eulerToQuaternion_FUN_005f7b20(CVector3f *euler_angles,CQuaternion4f *quat_out)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_1804 [1512];
  CMatrix3x4f local_58;
  CQuaternion4f local_28;
  CVector3f local_18;
  
  bVar4 = 0;
  local_18.x = 0.0;
  local_18.y = 0.0;
  local_18.z = 0.0;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_58,&local_18,euler_angles);
  core_xform_cpp_matrixToQuaternion_FUN_005f7420((CMatrix3x3f *)&local_58,&local_28);
  puVar2 = (uint *)((int)quat_out + (uint)bVar4 * -8 + 4);
  quat_out->w = local_28.w;
  puVar3 = puVar2 + (uint)bVar4 * -2 + 1;
  puVar1 = (uint *)((int)&local_28 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  *puVar2 = *(uint *)((int)&local_28 + (uint)bVar4 * -8 + 4);
  *puVar3 = *puVar1;
  puVar3[(uint)bVar4 * -2 + 1] = puVar1[(uint)bVar4 * -2 + 1];
  return quat_out;
}
