// Name: core_xform.cpp_quaternionToMatrix3x4_FUN_005f73e0
// Address: 005f73e0
// Address Range: [[005f73e0, 005f7418]]
// Convention: __stack_esi
// Signature: CMatrix3x4f * core_xform.cpp_quaternionToMatrix3x4_FUN_005f73e0(CQuaternion4f * quat_in, CMatrix3x4f * matrix_out)

#include "nocturne.h"

CMatrix3x4f * __stack_esi
core_xform_cpp_quaternionToMatrix3x4_FUN_005f73e0(CQuaternion4f *quat_in,CMatrix3x4f *matrix_out)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  CMatrix3x4f local_38;
  
  bVar4 = 0;
  core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280((CMatrix3x3f *)&local_38,quat_in);
  core_xform_cpp_clearTranslation_FUN_005f5370(&local_38);
  pCVar2 = &local_38;
  pCVar3 = matrix_out;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = *(float *)pCVar2;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  return matrix_out;
}
