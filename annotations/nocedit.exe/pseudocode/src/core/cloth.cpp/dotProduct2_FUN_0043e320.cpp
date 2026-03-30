// Name: core_cloth.cpp_dotProduct2_FUN_0043e320
// Address: 0043e320
// Address Range: [[0043e320, 0043e348]]
// Convention: __cdecl
// Signature: float __cdecl core_cloth_cpp_dotProduct2_FUN_0043e320(CVector3f *a,CVector3f *b)

#include "nocturne.h"

float __cdecl core_cloth_cpp_dotProduct2_FUN_0043e320(CVector3f *a,CVector3f *b)

{
  return a->z * b->z + a->x * b->x + a->y * b->y;
}
