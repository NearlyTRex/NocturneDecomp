// Name: core_xform.cpp_setRotationScaleIdentity_FUN_005f5190
// Address: 005f5190
// Address Range: [[005f5190, 005f51d2]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_setRotationScaleIdentity_FUN_005f5190(CMatrix3x4f *matrix)

#include "nocturne.h"

void __cdecl core_xform_cpp_setRotationScaleIdentity_FUN_005f5190(CMatrix3x4f *matrix)

{
  matrix->m[0].x = 0.0;
  matrix->m[0].y = 0.0;
  matrix->m[1].w = 0.0;
  matrix->m[1].x = 1.0;
  matrix->m[1].y = 0.0;
  matrix->m[2].w = 0.0;
  matrix->m[2].x = 0.0;
  matrix->m[2].y = 1.0;
  matrix->m[0].w = 1.0;
  return;
}
