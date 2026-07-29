// Name: core_cloth.cpp_fastInvSqrt_FUN_00438880
// Address: 00438880
// Address Range: [[00438880, 00438890]]
// Convention: __cdecl
// Signature: float __cdecl core_cloth_cpp_fastInvSqrt_FUN_00438880(float dist_sq)

#include "nocturne.h"

float __cdecl core_cloth_cpp_fastInvSqrt_FUN_00438880(float dist_sq)

{
  return (float)((int)CVector3f_01c70708.z - ((int)dist_sq >> 1));
}
