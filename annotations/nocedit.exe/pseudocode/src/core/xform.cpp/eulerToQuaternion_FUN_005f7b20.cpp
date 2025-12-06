// Name: core_xform.cpp_eulerToQuaternion_FUN_005f7b20
// Address: 005f7b20
// Address Range: [[005f7b20, 005f7b68]]
// Convention: __cdecl
// Signature: CQuaternion4f * core_xform.cpp_eulerToQuaternion_FUN_005f7b20(CQuaternion4f * quat_out, CVector3f * euler_angles)

#include "nocturne.h"

CQuaternion4f * __cdecl
core_xform_cpp_eulerToQuaternion_FUN_005f7b20(CQuaternion4f *quat_out,CVector3f *euler_angles)

{
  BADSPACEBASE *in_ESP;
  CQuaternion4f *unaff_ESI;
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  float afStackY_1804 [1512];
  CMatrix3x3f *in_stack_ffffffac;
  float local_28;
  CVector3f local_18;
  
  bVar3 = 0;
  local_18.x = 0.0;
  local_18.y = 0.0;
  local_18.z = 0.0;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            ((CMatrix3x4f *)&stack0xffffffa8,&local_18,(CVector3f *)quat_out);
  core_xform_cpp_matrixToQuaternion_FUN_005f7420
            ((CQuaternion4f *)&stack0xffffffa8,in_stack_ffffffac);
  puVar1 = (uint *)((int)unaff_ESI + (uint)bVar3 * -8 + 4);
  unaff_ESI->w = local_28;
  puVar2 = puVar1 + (uint)bVar3 * -2 + 1;
  *puVar1 = *(uint *)(&stack0xffffffdc + (uint)bVar3 * -8);
  *puVar2 = *(uint *)(&stack0xffffffe0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  puVar2[(uint)bVar3 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffffe0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4)
  ;
  return unaff_ESI;
}
