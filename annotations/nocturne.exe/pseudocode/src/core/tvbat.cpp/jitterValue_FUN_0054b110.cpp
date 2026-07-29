// Name: core_tvbat.cpp_jitterValue_FUN_0054b110
// Address: 0054b110
// Address Range: [[0054b110, 0054b13a]]
// Convention: __cdecl
// Signature: float __cdecl core_tvbat_cpp_jitterValue_FUN_0054b110(float value)

#include "nocturne.h"

float __cdecl core_tvbat_cpp_jitterValue_FUN_0054b110(float value)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.9,1.1);
  return fVar1 * value;
}
