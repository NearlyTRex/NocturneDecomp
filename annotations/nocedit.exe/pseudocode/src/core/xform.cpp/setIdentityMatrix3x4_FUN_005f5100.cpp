// Name: core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100
// Address: 005f5100
// Address Range: [[005f5100, 005f5157]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100(CMatrix3x4f *matrix)

#include "nocturne.h"

void __cdecl core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100(CMatrix3x4f *matrix)

{
  matrix->m[0].x = 0.0;
  matrix->m[0].y = 0.0;
  matrix->m[0].z = 0.0;
  matrix->m[1].w = 0.0;
  matrix->m[1].x = 1.0;
  matrix->m[1].y = 0.0;
  matrix->m[1].z = 0.0;
  matrix->m[2].w = 0.0;
  matrix->m[2].x = 0.0;
  matrix->m[2].y = 1.0;
  matrix->m[2].z = 0.0;
  matrix->m[0].w = 1.0;
  return;
}
