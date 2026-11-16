// Name: core_flattn.cpp_setFlattenMatrixAndOffset_FUN_004bf800
// Address: 004bf800
// Address Range: [[004bf800, 004bf882]]
// Convention: __cdecl
// Signature: void __cdecl core_flattn_cpp_setFlattenMatrixAndOffset_FUN_004bf800(CMatrix3x3f *matrix,CVector3f *offset)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_flattn_cpp_setFlattenMatrixAndOffset_FUN_004bf800(CMatrix3x3f *matrix,CVector3f *offset)

{
  _DAT_01cc8058 = matrix->m[0].y;
  _DAT_01cc805c = matrix->m[0].z;
  _DAT_01cc8060 = matrix->m[1].x;
  _DAT_01cc8064 = matrix->m[1].y;
  _DAT_01cc8068 = matrix->m[1].z;
  _DAT_01cc806c = matrix->m[2].x;
  _DAT_01cc8070 = matrix->m[2].y;
  _DAT_01cc8074 = matrix->m[2].z;
  _DAT_01cc8078 = offset->x;
  _DAT_01cc807c = offset->y;
  _DAT_01cc8080 = offset->z;
  _DAT_01cc8054 = matrix->m[0].x;
  return;
}
