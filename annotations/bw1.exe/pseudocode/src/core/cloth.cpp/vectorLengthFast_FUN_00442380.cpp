// Name: core_cloth.cpp_vectorLengthFast_FUN_00442380
// Address: 00442380
// Address Range: [[00442380, 004423ac]]
// Convention: __cdecl
// Signature: float __cdecl core_cloth_cpp_vectorLengthFast_FUN_00442380(CVector3f *v)

#include "nocturne.h"

float __cdecl core_cloth_cpp_vectorLengthFast_FUN_00442380(CVector3f *v)

{
  return (float)(((int)(v->z * v->z + v->x * v->x + v->y * v->y) >> 1) + g_FastSqrtMagic);
}
