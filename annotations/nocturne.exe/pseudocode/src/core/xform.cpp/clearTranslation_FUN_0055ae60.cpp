// Name: core_xform.cpp_clearTranslation_FUN_0055ae60
// Address: 0055ae60
// Address Range: [[0055ae60, 0055ae77]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_clearTranslation_FUN_0055ae60(CMatrix3x4f *matrix)

#include "nocturne.h"

void __cdecl core_xform_cpp_clearTranslation_FUN_0055ae60(CMatrix3x4f *matrix)

{
  matrix->m[2].z = 0.0;
  matrix->m[1].z = matrix->m[2].z;
  matrix->m[0].z = matrix->m[1].z;
  return;
}
