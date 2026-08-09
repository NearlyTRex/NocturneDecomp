// Name: core_cloth.cpp_vectorLengthFast_FUN_004388d0
// Address: 004388d0
// Address Range: [[004388d0, 004388fc]]
// Convention: __cdecl
// Signature: float __cdecl core_cloth_cpp_vectorLengthFast_FUN_004388d0(CVector3f *v)

#include "nocturne.h"

float __cdecl core_cloth_cpp_vectorLengthFast_FUN_004388d0(CVector3f *v)

{
  return (float)(((int)(v->z * v->z + v->x * v->x + v->y * v->y) >> 1) + g_FastSqrtMagic);
}
