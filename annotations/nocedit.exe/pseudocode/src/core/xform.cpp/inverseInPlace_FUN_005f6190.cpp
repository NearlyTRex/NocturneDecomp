// Name: core_xform.cpp_inverseInPlace_FUN_005f6190
// Address: 005f6190
// Address Range: [[005f6190, 005f61b6]]
// Convention: __cdecl
// Signature: void core_xform.cpp_inverseInPlace_FUN_005f6190(CMatrix3x4f * matrix)

#include "nocturne.h"

void __cdecl core_xform_cpp_inverseInPlace_FUN_005f6190(CMatrix3x4f *matrix)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  float *pfVar2;
  byte bVar3;
  CMatrix3x4f *in_stack_ffffffc8;
  float afStack_34 [11];
  
  bVar3 = 0;
  core_xform_cpp_inverse_FUN_005f6210(matrix,in_stack_ffffffc8);
  pfVar2 = afStack_34;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    matrix->m[0].w = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar3 * -2 + 1;
    matrix = (CMatrix3x4f *)((int)matrix + ((uint)bVar3 * -2 + 1) * 4);
  }
  return;
}
