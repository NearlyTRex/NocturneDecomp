// Name: core_flattn.cpp_flattenTransformVector_FUN_004ad6e0
// Address: 004ad6e0
// Address Range: [[004ad6e0, 004ad74a]]
// Convention: __cdecl
// Signature: void __cdecl core_flattn_cpp_flattenTransformVector_FUN_004ad6e0(CVector3f *vector_out,CVector3f *vector_in)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_flattn_cpp_flattenTransformVector_FUN_004ad6e0(CVector3f *vector_out,CVector3f *vector_in)

{
  vector_out->x =
       vector_in->z * _DAT_01d1a0b4 + vector_in->x * _DAT_01d1a0ac + vector_in->y * _DAT_01d1a0b0;
  vector_out->y =
       vector_in->z * _DAT_01d1a0c0 + vector_in->x * _DAT_01d1a0b8 + vector_in->y * _DAT_01d1a0bc;
  vector_out->z =
       vector_in->z * _DAT_01d1a0cc + vector_in->x * _DAT_01d1a0c4 + vector_in->y * _DAT_01d1a0c8;
  return;
}
