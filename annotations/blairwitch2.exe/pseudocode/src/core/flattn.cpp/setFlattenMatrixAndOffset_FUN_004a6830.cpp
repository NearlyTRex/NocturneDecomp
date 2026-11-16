// Name: core_flattn.cpp_setFlattenMatrixAndOffset_FUN_004a6830
// Address: 004a6830
// Address Range: [[004a6830, 004a68b2]]
// Convention: __cdecl
// Signature: void __cdecl core_flattn_cpp_setFlattenMatrixAndOffset_FUN_004a6830(CMatrix3x3f *matrix,CVector3f *offset)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_flattn_cpp_setFlattenMatrixAndOffset_FUN_004a6830(CMatrix3x3f *matrix,CVector3f *offset)

{
  _DAT_01caf5c0 = matrix->m[0].y;
  _DAT_01caf5c4 = matrix->m[0].z;
  _DAT_01caf5c8 = matrix->m[1].x;
  _DAT_01caf5cc = matrix->m[1].y;
  _DAT_01caf5d0 = matrix->m[1].z;
  _DAT_01caf5d4 = matrix->m[2].x;
  _DAT_01caf5d8 = matrix->m[2].y;
  _DAT_01caf5dc = matrix->m[2].z;
  _DAT_01caf5e0 = offset->x;
  _DAT_01caf5e4 = offset->y;
  _DAT_01caf5e8 = offset->z;
  _DAT_01caf5bc = matrix->m[0].x;
  return;
}
