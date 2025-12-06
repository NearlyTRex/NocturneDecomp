// Name: core_xform.cpp_quaternionToMatrix3x4_FUN_005f73e0
// Address: 005f73e0
// Address Range: [[005f73e0, 005f7418]]
// Convention: __cdecl
// Signature: CMatrix3x4f * core_xform.cpp_quaternionToMatrix3x4_FUN_005f73e0(CMatrix3x4f * matrix_out, CQuaternion4f * quat_ptr)

#include "nocturne.h"

CMatrix3x4f * __cdecl
core_xform_cpp_quaternionToMatrix3x4_FUN_005f73e0(CMatrix3x4f *matrix_out,CQuaternion4f *quat_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  CMatrix3x4f *unaff_ESI;
  float *pfVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  float afStack_34 [11];
  
  bVar4 = 0;
  core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280((CMatrix3x3f *)&stack0xffffffc8,matrix_out->m);
  core_xform_cpp_clearTranslation_FUN_005f5370((CMatrix3x4f *)afStack_34);
  pfVar2 = afStack_34;
  pCVar3 = unaff_ESI;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  return unaff_ESI;
}
