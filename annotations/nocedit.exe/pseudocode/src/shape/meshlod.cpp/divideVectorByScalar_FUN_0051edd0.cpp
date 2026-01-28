// Name: shape_meshlod.cpp_divideVectorByScalar_FUN_0051edd0
// Address: 0051edd0
// Address Range: [[0051edd0, 0051edee]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_divideVectorByScalar_FUN_0051edd0(CVector3f *vector,float *divisor)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_divideVectorByScalar_FUN_0051edd0(CVector3f *vector,float *divisor)

{
  vector->x = vector->x / *divisor;
  vector->y = vector->y / *divisor;
  vector->z = vector->z / *divisor;
  return;
}
