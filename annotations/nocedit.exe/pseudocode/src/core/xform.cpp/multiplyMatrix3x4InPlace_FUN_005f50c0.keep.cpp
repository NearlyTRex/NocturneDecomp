// Name: core_xform.cpp_multiplyMatrix3x4InPlace_FUN_005f50c0
// Address: 005f50c0
// MANUAL RECONSTRUCTION
// Address Range: [[005f50c0, 005f50f1] [03fc3a05, 03fc3a65]]
// Convention: __cdecl
// Signature: CMatrix3x4f * __cdecl core_xform_cpp_multiplyMatrix3x4InPlace_FUN_005f50c0(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b)

#include "nocturne.h"

CMatrix3x4f * __cdecl core_xform_cpp_multiplyMatrix3x4InPlace_FUN_005f50c0(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b)

{
  CMatrix3x4f local_3c;

  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(matrix_a,matrix_b,&local_3c);
  *matrix_a = local_3c;
  return matrix_a;
}
