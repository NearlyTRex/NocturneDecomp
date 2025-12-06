// Name: core_xform.cpp_hasNegativeDeterminant_FUN_005f6be0
// Address: 005f6be0
// Address Range: [[005f6be0, 005f6c39]]
// Convention: __cdecl
// Signature: int core_xform.cpp_hasNegativeDeterminant_FUN_005f6be0(CMatrix3x4f * matrix)

#include "nocturne.h"

int __cdecl core_xform_cpp_hasNegativeDeterminant_FUN_005f6be0(CMatrix3x4f *matrix)

{
  return (uint)(matrix->m[0].w * (matrix->m[1].x * matrix->m[2].y - matrix->m[1].y * matrix->m[2].x)
                + matrix->m[0].x *
                  (matrix->m[1].y * matrix->m[2].w - matrix->m[1].w * matrix->m[2].y) +
                matrix->m[0].y * (matrix->m[1].w * matrix->m[2].x - matrix->m[2].w * matrix->m[1].x)
               < 0.0);
}
