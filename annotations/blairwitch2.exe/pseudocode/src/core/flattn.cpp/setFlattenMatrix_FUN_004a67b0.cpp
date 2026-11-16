// Name: core_flattn.cpp_setFlattenMatrix_FUN_004a67b0
// Address: 004a67b0
// Address Range: [[004a67b0, 004a6822]]
// Convention: __cdecl
// Signature: void __cdecl core_flattn_cpp_setFlattenMatrix_FUN_004a67b0(CMatrix3x3f *matrix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_flattn_cpp_setFlattenMatrix_FUN_004a67b0(CMatrix3x3f *matrix)

{
  _DAT_01caf5c0 = matrix->m[0].y;
  _DAT_01caf5c4 = matrix->m[0].z;
  _DAT_01caf5c8 = matrix->m[1].x;
  _DAT_01caf5cc = matrix->m[1].y;
  _DAT_01caf5d0 = matrix->m[1].z;
  _DAT_01caf5d4 = matrix->m[2].x;
  _DAT_01caf5d8 = matrix->m[2].y;
  _DAT_01caf5dc = matrix->m[2].z;
  _DAT_01caf5bc = matrix->m[0].x;
  _DAT_01caf5e0 = 0;
  _DAT_01caf5e4 = 0;
  _DAT_01caf5e8 = 0;
  return;
}
