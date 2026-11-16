// Name: core_flattn.cpp_setFlattenMatrixTransposed_FUN_004ad5e0
// Address: 004ad5e0
// Address Range: [[004ad5e0, 004ad652]]
// Convention: __cdecl
// Signature: void __cdecl core_flattn_cpp_setFlattenMatrixTransposed_FUN_004ad5e0(CMatrix3x3f *matrix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_flattn_cpp_setFlattenMatrixTransposed_FUN_004ad5e0(CMatrix3x3f *matrix)

{
  _DAT_01d1a0b8 = matrix->m[0].y;
  _DAT_01d1a0c4 = matrix->m[0].z;
  _DAT_01d1a0b0 = matrix->m[1].x;
  _DAT_01d1a0bc = matrix->m[1].y;
  _DAT_01d1a0c8 = matrix->m[1].z;
  _DAT_01d1a0b4 = matrix->m[2].x;
  _DAT_01d1a0c0 = matrix->m[2].y;
  _DAT_01d1a0cc = matrix->m[2].z;
  _DAT_01d1a0ac = matrix->m[0].x;
  _DAT_01d1a0d0 = 0;
  _DAT_01d1a0d4 = 0;
  _DAT_01d1a0d8 = 0;
  return;
}
