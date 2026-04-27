// Name: core_cloth.cpp_vectorLengthFast_FUN_0043e350
// Address: 0043e350
// Address Range: [[0043e350, 0043e37c]]
// Convention: __cdecl
// Signature: float __cdecl core_cloth_cpp_vectorLengthFast_FUN_0043e350(CVector3f *v)

#include "nocturne.h"

float __cdecl core_cloth_cpp_vectorLengthFast_FUN_0043e350(CVector3f *v)

{
  return (float)(((int)(v->z * v->z + v->x * v->x + v->y * v->y) >> 1) + g_FastSqrtMagic);
}
