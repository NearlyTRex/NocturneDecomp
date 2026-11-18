// Name: core_bugs.cpp_normalizeVector_FUN_00421fe0
// Address: 00421fe0
// Address Range: [[00421fe0, 0042204c]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_normalizeVector_FUN_00421fe0(CVector3f *dest)

#include "nocturne.h"

void __cdecl core_bugs_cpp_normalizeVector_FUN_00421fe0(CVector3f *dest)

{
  float fVar1;
  
  fVar1 = SQRT(dest->z * dest->z + dest->x * dest->x + dest->y * dest->y);
  if (0.0 < fVar1) {
    fVar1 = 1.0 / fVar1;
    dest->x = dest->x * fVar1;
    dest->y = dest->y * fVar1;
    dest->z = dest->z * fVar1;
    return;
  }
  dest->z = 0.0;
  dest->y = dest->z;
  dest->x = dest->y;
  return;
}
