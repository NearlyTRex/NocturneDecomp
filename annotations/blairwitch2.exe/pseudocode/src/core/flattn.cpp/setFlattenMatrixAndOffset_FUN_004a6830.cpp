// Name: core_flattn.cpp_setFlattenMatrixAndOffset_FUN_004a6830
// Address: 004a6830
// Address Range: [[004a6830, 004a68b2]]
// Convention: __cdecl
// Signature: void __cdecl core_flattn_cpp_setFlattenMatrixAndOffset_FUN_004a6830(CMatrix3x3f *matrix,CVector3f *offset)

#include "nocturne.h"

void __cdecl core_flattn_cpp_setFlattenMatrixAndOffset_FUN_004a6830(CMatrix3x3f *matrix,CVector3f *offset)

{
  g_FLOAT_01caf5c0 = matrix->m[0].y;
  g_FLOAT_01caf5c4 = matrix->m[0].z;
  g_FLOAT_01caf5c8 = matrix->m[1].x;
  g_FLOAT_01caf5cc = matrix->m[1].y;
  g_FLOAT_01caf5d0 = matrix->m[1].z;
  g_FLOAT_01caf5d4 = matrix->m[2].x;
  g_FLOAT_01caf5d8 = matrix->m[2].y;
  g_FLOAT_01caf5dc = matrix->m[2].z;
  g_FLOAT_01caf5e0 = offset->x;
  g_FLOAT_01caf5e4 = offset->y;
  g_FLOAT_01caf5e8 = offset->z;
  g_FLOAT_01caf5bc = matrix->m[0].x;
  return;
}
