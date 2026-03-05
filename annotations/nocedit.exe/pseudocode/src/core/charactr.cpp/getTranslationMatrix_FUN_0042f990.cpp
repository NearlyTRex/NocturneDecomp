// Name: core_charactr.cpp_getTranslationMatrix_FUN_0042f990
// Address: 0042f990
// Address Range: [[0042f990, 0042f9bd]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_getTranslationMatrix_FUN_0042f990(CMatrix3x4f *matrix,CVector3f *out_translation)

#include "nocturne.h"

void __cdecl core_charactr_cpp_getTranslationMatrix_FUN_0042f990(CMatrix3x4f *matrix,CVector3f *out_translation)

{
  float fVar1;
  float fVar2;
  
  fVar1 = matrix->m[0].z;
  fVar2 = matrix->m[2].z;
  out_translation->y = matrix->m[1].z;
  out_translation->x = fVar1;
  out_translation->z = fVar2;
  return;
}
