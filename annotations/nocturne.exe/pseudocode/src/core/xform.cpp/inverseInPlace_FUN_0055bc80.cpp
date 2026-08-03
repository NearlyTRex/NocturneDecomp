// Name: core_xform.cpp_inverseInPlace_FUN_0055bc80
// Address: 0055bc80
// Address Range: [[0055bc80, 0055bca6]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_inverseInPlace_FUN_0055bc80(CMatrix3x4f *matrix)

#include "nocturne.h"

void __cdecl core_xform_cpp_inverseInPlace_FUN_0055bc80(CMatrix3x4f *matrix)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  byte bVar3;
  CMatrix3x4f local_38;
  
  bVar3 = 0;
  core_xform_cpp_inverse_FUN_0055bd00(matrix,&local_38);
  pCVar2 = &local_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    matrix->m[0].w = pCVar2->m[0].w;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar3 * -2 + 1) * 4);
    matrix = (CMatrix3x4f *)((int)matrix + ((uint)bVar3 * -2 + 1) * 4);
  }
  return;
}
