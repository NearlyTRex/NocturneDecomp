// Name: core_stranger.cpp_dotProduct2_FUN_005409c0
// Address: 005409c0
// Address Range: [[005409c0, 005409e8]]
// Convention: __cdecl
// Signature: float __cdecl core_stranger_cpp_dotProduct2_FUN_005409c0(CVector3f *a,CVector3f *b)

#include "nocturne.h"

float __cdecl core_stranger_cpp_dotProduct2_FUN_005409c0(CVector3f *a,CVector3f *b)

{
  return a->z * b->z + a->x * b->x + a->y * b->y;
}
