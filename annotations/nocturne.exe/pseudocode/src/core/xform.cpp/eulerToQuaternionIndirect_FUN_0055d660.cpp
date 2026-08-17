// Name: core_xform.cpp_eulerToQuaternionIndirect_FUN_0055d660
// Address: 0055d660
// Address Range: [[0055d660, 0055d6a8]]
// Convention: __stack_esi
// Signature: CQuaternion4f * __stack_esi core_xform_cpp_eulerToQuaternionIndirect_FUN_0055d660(CVector3f *euler_angles,CQuaternion4f *quat_out)

#include "nocturne.h"

CQuaternion4f * __stack_esi core_xform_cpp_eulerToQuaternionIndirect_FUN_0055d660(CVector3f *euler_angles,CQuaternion4f *quat_out)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_1804 [1512];
  CMatrix3x4f CStack_58;
  CQuaternion4f CStack_28;
  CVector3f CStack_18;
  
  bVar4 = 0;
  CStack_18.x = 0.0;
  CStack_18.y = 0.0;
  CStack_18.z = 0.0;
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80(&CStack_58,&CStack_18,euler_angles);
  core_xform_cpp_matrixToQuaternion_FUN_0055cf10((CMatrix3x3f *)&CStack_58,&CStack_28);
  puVar2 = (uint *)((int)quat_out + (uint)bVar4 * -8 + 4);
  quat_out->w = CStack_28.w;
  puVar3 = puVar2 + (uint)bVar4 * -2 + 1;
  puVar1 = (uint *)((int)&CStack_28 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  *puVar2 = *(uint *)((int)&CStack_28 + (uint)bVar4 * -8 + 4);
  *puVar3 = *puVar1;
  puVar3[(uint)bVar4 * -2 + 1] = puVar1[(uint)bVar4 * -2 + 1];
  return quat_out;
}
