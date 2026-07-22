// Name: core_actor.cpp_normalizeAngleToPi_FUN_0040df00
// Address: 0040df00
// Address Range: [[0040df00, 0040dfb4]]
// Convention: unknown
// Signature: float core_actor_cpp_normalizeAngleToPi_FUN_0040df00(float param_1)

#include "nocturne.h"

float core_actor_cpp_normalizeAngleToPi_FUN_0040df00(float param_1)

{
  double dVar1;
  uint local_8;
  
  dVar1 = (double)param_1;
  if (param_1 < (float)-3.1415926535000001) {
    dVar1 = (double)floor((dVar1 + 3.1415926535000001) * -0.15915494309644401);
    local_8 = ((float)dVar1 + 1.0) * (float)6.2831853070000001 + param_1;
  }
  else {
    if (3.1415926535000001 < dVar1) {
      dVar1 = (double)floor((dVar1 + -3.1415926535000001) * 0.15915494309644401);
      return ((float)dVar1 + 1.0) * (float)-6.2831853070000001 + param_1;
    }
    local_8 = param_1;
  }
  return local_8;
}
