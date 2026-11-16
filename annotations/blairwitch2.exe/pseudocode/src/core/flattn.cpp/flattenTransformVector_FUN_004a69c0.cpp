// Name: core_flattn.cpp_flattenTransformVector_FUN_004a69c0
// Address: 004a69c0
// Address Range: [[004a69c0, 004a6a2a]]
// Convention: __cdecl
// Signature: void __cdecl core_flattn_cpp_flattenTransformVector_FUN_004a69c0(CVector3f *vector_out,CVector3f *vector_in)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_flattn_cpp_flattenTransformVector_FUN_004a69c0(CVector3f *vector_out,CVector3f *vector_in)

{
  vector_out->x =
       vector_in->z * _DAT_01caf5c4 + vector_in->x * _DAT_01caf5bc + vector_in->y * _DAT_01caf5c0;
  vector_out->y =
       vector_in->z * _DAT_01caf5d0 + vector_in->x * _DAT_01caf5c8 + vector_in->y * _DAT_01caf5cc;
  vector_out->z =
       vector_in->z * _DAT_01caf5dc + vector_in->x * _DAT_01caf5d4 + vector_in->y * _DAT_01caf5d8;
  return;
}
