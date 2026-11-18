// Name: core_flattn.cpp_setFlattenMatrixAndOffset_FUN_004ad550
// Address: 004ad550
// Address Range: [[004ad550, 004ad5d2]]
// Convention: __cdecl
// Signature: void __cdecl core_flattn_cpp_setFlattenMatrixAndOffset_FUN_004ad550(CMatrix3x3f *matrix,CVector3f *offset)

#include "nocturne.h"

void __cdecl core_flattn_cpp_setFlattenMatrixAndOffset_FUN_004ad550(CMatrix3x3f *matrix,CVector3f *offset)

{
  g_FLOAT_01d1a0b0 = matrix->m[0].y;
  g_FLOAT_01d1a0b4 = matrix->m[0].z;
  g_FLOAT_01d1a0b8 = matrix->m[1].x;
  g_FLOAT_01d1a0bc = matrix->m[1].y;
  g_FLOAT_01d1a0c0 = matrix->m[1].z;
  g_FLOAT_01d1a0c4 = matrix->m[2].x;
  g_FLOAT_01d1a0c8 = matrix->m[2].y;
  g_FLOAT_01d1a0cc = matrix->m[2].z;
  g_FLOAT_01d1a0d0 = offset->x;
  g_FLOAT_01d1a0d4 = offset->y;
  g_FLOAT_01d1a0d8 = offset->z;
  g_FLOAT_01d1a0ac = matrix->m[0].x;
  return;
}
