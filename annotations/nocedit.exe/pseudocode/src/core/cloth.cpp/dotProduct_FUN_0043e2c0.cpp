// Name: core_cloth.cpp_dotProduct_FUN_0043e2c0
// Address: 0043e2c0
// Address Range: [[0043e2c0, 0043e2e8]]
// Convention: __cdecl
// Signature: float __cdecl core_cloth_cpp_dotProduct_FUN_0043e2c0(CVector3f *a,CVector3f *b)

#include "nocturne.h"

float __cdecl core_cloth_cpp_dotProduct_FUN_0043e2c0(CVector3f *a,CVector3f *b)

{
  return a->z * b->z + a->x * b->x + a->y * b->y;
}
