// Name: core_xform.cpp_determinant_FUN_0055bcb0
// Address: 0055bcb0
// Address Range: [[0055bcb0, 0055bcfa]]
// Convention: __cdecl
// Signature: double __cdecl core_xform_cpp_determinant_FUN_0055bcb0(CMatrix3x4f *matrix)

#include "nocturne.h"

double __cdecl core_xform_cpp_determinant_FUN_0055bcb0(CMatrix3x4f *matrix)

{
  return (double)((matrix->m[1].w * matrix->m[2].x - matrix->m[1].x * matrix->m[2].w) *
                  matrix->m[0].y +
                 ((matrix->m[1].x * matrix->m[2].y - matrix->m[1].y * matrix->m[2].x) *
                  matrix->m[0].w -
                 (matrix->m[1].w * matrix->m[2].y - matrix->m[1].y * matrix->m[2].w) *
                 matrix->m[0].x));
}
