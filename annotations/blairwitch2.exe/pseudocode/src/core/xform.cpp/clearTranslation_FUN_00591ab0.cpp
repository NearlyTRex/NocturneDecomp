// Name: core_xform.cpp_clearTranslation_FUN_00591ab0
// Address: 00591ab0
// Address Range: [[00591ab0, 00591ac7]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_clearTranslation_FUN_00591ab0(CMatrix3x4f *matrix)

#include "nocturne.h"

void __cdecl core_xform_cpp_clearTranslation_FUN_00591ab0(CMatrix3x4f *matrix)

{
  matrix->m[2].z = 0.0;
  matrix->m[1].z = matrix->m[2].z;
  matrix->m[0].z = matrix->m[1].z;
  return;
}
