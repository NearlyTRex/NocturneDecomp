// Name: core_manpuz.cpp_stepToward_FUN_004cae90
// Address: 004cae90
// Address Range: [[004cae90, 004caee2]]
// Convention: unknown
// Signature: undefined4 core_manpuz_cpp_stepToward_FUN_004cae90(float *param_1,float param_2,float param_3)

#include "nocturne.h"

uint core_manpuz_cpp_stepToward_FUN_004cae90(float *param_1,float param_2,float param_3)

{
  if (param_2 - *param_1 < -param_3) {
    param_3 = *param_1 - param_3;
  }
  else {
    if (param_2 - *param_1 <= param_3) {
      *param_1 = param_2;
      return 1;
    }
    param_3 = *param_1 + param_3;
  }
  *param_1 = param_3;
  return 0;
}
