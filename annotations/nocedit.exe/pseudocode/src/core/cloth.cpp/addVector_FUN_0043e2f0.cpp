// Name: core_cloth.cpp_addVector_FUN_0043e2f0
// Address: 0043e2f0
// Address Range: [[0043e2f0, 0043e310]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_addVector_FUN_0043e2f0(CVector3f *a,CVector3f *b)

#include "nocturne.h"

void __cdecl core_cloth_cpp_addVector_FUN_0043e2f0(CVector3f *a,CVector3f *b)

{
  a->x = b->x + a->x;
  a->y = b->y + a->y;
  a->z = b->z + a->z;
  return;
}
