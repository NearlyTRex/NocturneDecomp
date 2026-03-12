// Name: core_xform.cpp_multiplyMatrix3x4InPlace_FUN_005f50c0
// Address: 005f50c0
// Address Range: [[005f50c0, 005f50f1]]
// Convention: __cdecl
// Signature: CMatrix3x4f * __cdecl core_xform_cpp_multiplyMatrix3x4InPlace_FUN_005f50c0(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b)

#include "nocturne.h"

CMatrix3x4f * __cdecl core_xform_cpp_multiplyMatrix3x4InPlace_FUN_005f50c0(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  CMatrix3x4f local_3c;
  
  bVar4 = 0;
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(matrix_a,matrix_b,&local_3c);
  pCVar2 = &local_3c;
  pCVar3 = matrix_a;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + (uint)bVar4 * -8 + 4);
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + (uint)bVar4 * -8 + 4);
    pCVar3->m[0].w = pCVar2->m[0].w;
    pCVar2 = pCVar2;
    pCVar3 = pCVar3;
  }
  return matrix_a;
}
