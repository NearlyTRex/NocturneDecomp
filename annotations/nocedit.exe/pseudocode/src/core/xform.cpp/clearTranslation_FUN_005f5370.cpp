// Name: core_xform.cpp_clearTranslation_FUN_005f5370
// Address: 005f5370
// Address Range: [[005f5370, 005f5387]]
// Convention: __cdecl
// Signature: void core_xform.cpp_clearTranslation_FUN_005f5370(CMatrix3x4f * matrix)

#include "nocturne.h"

void __cdecl core_xform_cpp_clearTranslation_FUN_005f5370(CMatrix3x4f *matrix)

{
  matrix->m[2].z = 0.0;
  matrix->m[1].z = matrix->m[2].z;
  matrix->m[0].z = matrix->m[1].z;
  return;
}
