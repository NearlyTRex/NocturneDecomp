// Name: core_cloth.cpp_vectorLengthFast_FUN_0043ffe0
// Address: 0043ffe0
// Address Range: [[0043ffe0, 0044000c]]
// Convention: __cdecl
// Signature: float __cdecl core_cloth_cpp_vectorLengthFast_FUN_0043ffe0(CVector3f *v)

#include "nocturne.h"

float __cdecl core_cloth_cpp_vectorLengthFast_FUN_0043ffe0(CVector3f *v)

{
  return (float)(((int)(v->z * v->z + v->x * v->x + v->y * v->y) >> 1) + g_FastSqrtMagic);
}
