// Name: core_xform.cpp_inverseInPlace_FUN_005f6190
// Address: 005f6190
// MANUAL RECONSTRUCTION
// Address Range: [[005f6190, 005f61b6]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_inverseInPlace_FUN_005f6190(CMatrix3x4f *matrix)

#include "nocturne.h"

void __cdecl core_xform_cpp_inverseInPlace_FUN_005f6190(CMatrix3x4f *matrix)

{
  CMatrix3x4f local_38;

  core_xform_cpp_inverse_FUN_005f6210(matrix,&local_38);
  *matrix = local_38;
  return;
}
