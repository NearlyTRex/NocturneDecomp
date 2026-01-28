// Name: core_fire.cpp_FUN_004bf1a0
// Address: 004bf1a0
// Address Range: [[004bf1a0, 004bf1ef]]
// Convention: unknown
// Signature: float core_fire_cpp_FUN_004bf1a0(void)

#include "nocturne.h"

float core_fire_cpp_FUN_004bf1a0(void)

{
  double dVar1;
  float in_stack_00000004;
  uint local_8;
  
  if (in_stack_00000004 <= (float)-1) {
    local_8 = 3.1415927;
  }
  else {
    if ((double)in_stack_00000004 < 1.0) {
      dVar1 = crt_math_c_acos_FUN_00600162((double)in_stack_00000004);
      return (float)dVar1;
    }
    local_8 = 0.0;
  }
  return local_8;
}
