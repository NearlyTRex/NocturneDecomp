// Name: core_manpuz.cpp_stepToward_FUN_0050a490
// Address: 0050a490
// Address Range: [[0050a490, 0050a4e2]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_stepToward_FUN_0050a490(float *value,float target,float max_step)

#include "nocturne.h"

int __cdecl core_manpuz_cpp_stepToward_FUN_0050a490(float *value,float target,float max_step)

{
  float fVar1;
  
  if (target - *value < -max_step) {
    fVar1 = *value - max_step;
  }
  else {
    if (target - *value <= max_step) {
      *value = target;
      return 1;
    }
    fVar1 = *value + max_step;
  }
  *value = fVar1;
  return 0;
}
