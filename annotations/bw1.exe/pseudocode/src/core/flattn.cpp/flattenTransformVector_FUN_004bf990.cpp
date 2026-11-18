// Name: core_flattn.cpp_flattenTransformVector_FUN_004bf990
// Address: 004bf990
// Address Range: [[004bf990, 004bf9fa]]
// Convention: __cdecl
// Signature: void __cdecl core_flattn_cpp_flattenTransformVector_FUN_004bf990(CVector3f *vector_out,CVector3f *vector_in)

#include "nocturne.h"

void __cdecl core_flattn_cpp_flattenTransformVector_FUN_004bf990(CVector3f *vector_out,CVector3f *vector_in)

{
  vector_out->x =
       vector_in->z * g_FLOAT_01cc805c +
       vector_in->x * g_FLOAT_01cc8054 + vector_in->y * g_FLOAT_01cc8058;
  vector_out->y =
       vector_in->z * g_FLOAT_01cc8068 +
       vector_in->x * g_FLOAT_01cc8060 + vector_in->y * g_FLOAT_01cc8064;
  vector_out->z =
       vector_in->z * g_FLOAT_01cc8074 +
       vector_in->x * g_FLOAT_01cc806c + vector_in->y * g_FLOAT_01cc8070;
  return;
}
