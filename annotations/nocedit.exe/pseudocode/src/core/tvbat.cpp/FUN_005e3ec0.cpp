// Name: core_tvbat.cpp_FUN_005e3ec0
// Address: 005e3ec0
// Address Range: [[005e3ec0, 005e3ed1]]
// Convention: __cdecl
// Signature: float core_tvbat.cpp_FUN_005e3ec0(float param_1)

#include "nocturne.h"

float __cdecl core_tvbat_cpp_FUN_005e3ec0(float param_1)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9,1.1);
  return fVar1 * param_1;
}
