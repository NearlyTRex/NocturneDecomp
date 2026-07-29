// Name: core_stranger.cpp_setMatrixTranslation_FUN_005409f0
// Address: 005409f0
// Address Range: [[005409f0, 00540a09]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_setMatrixTranslation_FUN_005409f0(CMatrix3x4f *matrix,CVector3f *translation)

#include "nocturne.h"

void __cdecl core_stranger_cpp_setMatrixTranslation_FUN_005409f0(CMatrix3x4f *matrix,CVector3f *translation)

{
  matrix->m[0].z = translation->x;
  matrix->m[1].z = translation->y;
  matrix->m[2].z = translation->z;
  return;
}
