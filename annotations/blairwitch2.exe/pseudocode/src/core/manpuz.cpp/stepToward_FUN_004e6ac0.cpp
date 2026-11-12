// Name: core_manpuz.cpp_stepToward_FUN_004e6ac0
// Address: 004e6ac0
// Address Range: [[004e6ac0, 004e6b12]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_stepToward_FUN_004e6ac0(float *value,float target,float max_step)

#include "nocturne.h"

int __cdecl core_manpuz_cpp_stepToward_FUN_004e6ac0(float *value,float target,float max_step)

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
