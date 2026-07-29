// Name: core_cloth.cpp_addVector_FUN_004388a0
// Address: 004388a0
// Address Range: [[004388a0, 004388c0]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_addVector_FUN_004388a0(CVector3f *a,CVector3f *b)

#include "nocturne.h"

void __cdecl core_cloth_cpp_addVector_FUN_004388a0(CVector3f *a,CVector3f *b)

{
  a->x = b->x + a->x;
  a->y = b->y + a->y;
  a->z = b->z + a->z;
  return;
}
