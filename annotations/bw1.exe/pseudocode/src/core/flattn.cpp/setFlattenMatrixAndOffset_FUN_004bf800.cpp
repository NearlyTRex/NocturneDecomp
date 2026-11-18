// Name: core_flattn.cpp_setFlattenMatrixAndOffset_FUN_004bf800
// Address: 004bf800
// Address Range: [[004bf800, 004bf882]]
// Convention: __cdecl
// Signature: void __cdecl core_flattn_cpp_setFlattenMatrixAndOffset_FUN_004bf800(CMatrix3x3f *matrix,CVector3f *offset)

#include "nocturne.h"

void __cdecl core_flattn_cpp_setFlattenMatrixAndOffset_FUN_004bf800(CMatrix3x3f *matrix,CVector3f *offset)

{
  g_FLOAT_01cc8058 = matrix->m[0].y;
  g_FLOAT_01cc805c = matrix->m[0].z;
  g_FLOAT_01cc8060 = matrix->m[1].x;
  g_FLOAT_01cc8064 = matrix->m[1].y;
  g_FLOAT_01cc8068 = matrix->m[1].z;
  g_FLOAT_01cc806c = matrix->m[2].x;
  g_FLOAT_01cc8070 = matrix->m[2].y;
  g_FLOAT_01cc8074 = matrix->m[2].z;
  g_FLOAT_01cc8078 = offset->x;
  g_FLOAT_01cc807c = offset->y;
  g_FLOAT_01cc8080 = offset->z;
  g_FLOAT_01cc8054 = matrix->m[0].x;
  return;
}
