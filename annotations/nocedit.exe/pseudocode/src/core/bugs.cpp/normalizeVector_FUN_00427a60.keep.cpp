// Name: core_bugs.cpp_normalizeVector_FUN_00427a60
// Address: 00427a60
// MANUAL RECONSTRUCTION
// Address Range: [[00427a60, 00427ac6]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_normalizeVector_FUN_00427a60(CVector3f *dest)

#include "nocturne.h"

void __cdecl core_bugs_cpp_normalizeVector_FUN_00427a60(CVector3f *dest)

{
  float fVar2;
  float fVar1;
  
  fVar1 = SQRT(dest->z * dest->z + dest->x * dest->x + dest->y * dest->y);
  if (0.0 < fVar1) {
    fVar2 = 1.0 / fVar1;
    dest->x = dest->x * fVar2;
    dest->y = dest->y * fVar2;
    dest->z = dest->z * fVar2;
    return;
  }
  memset(dest, 0, sizeof(CVector3f));
  return;
}
