// Name: core_xform.cpp_invertAndGetTranslation_FUN_005f6140
// Address: 005f6140
// Address Range: [[005f6140, 005f6180]]
// Convention: __cdecl
// Signature: CVector3f * core_xform.cpp_invertAndGetTranslation_FUN_005f6140(CVector3f * output_vector, CMatrix3x4f * input_matrix)

#include "nocturne.h"

CVector3f * __cdecl
core_xform_cpp_invertAndGetTranslation_FUN_005f6140
          (CVector3f *output_vector,CMatrix3x4f *input_matrix)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  CMatrix3x4f *in_stack_ffffff94;
  uint auStack_68 [11];
  uint local_3c;
  CVector3f aCStack_38 [3];
  
  bVar4 = 0;
  core_xform_cpp_inverse_FUN_005f6210((CMatrix3x4f *)output_vector,in_stack_ffffff94);
  puVar2 = auStack_68;
  puVar3 = &local_3c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  core_xform_cpp_getTranslation_FUN_005f6110(aCStack_38,input_matrix);
  return (CVector3f *)input_matrix;
}
