// Name: core_stranger.cpp_dotProduct1_FUN_00540970
// Address: 00540970
// Address Range: [[00540970, 00540998]]
// Convention: __cdecl
// Signature: float __cdecl core_stranger_cpp_dotProduct1_FUN_00540970(CVector3f *a,CVector3f *b)

#include "nocturne.h"

float __cdecl core_stranger_cpp_dotProduct1_FUN_00540970(CVector3f *a,CVector3f *b)

{
  return a->z * b->z + a->x * b->x + a->y * b->y;
}
