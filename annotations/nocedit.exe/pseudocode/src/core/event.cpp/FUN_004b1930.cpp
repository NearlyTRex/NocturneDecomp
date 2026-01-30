// Name: core_event.cpp_FUN_004b1930
// Address: 004b1930
// Address Range: [[004b1930, 004b1964]]
// Convention: __cdecl
// Signature: float __cdecl core_event_cpp_FUN_004b1930(float *param_1,float *param_2)

#include "nocturne.h"

float __cdecl core_event_cpp_FUN_004b1930(float *param_1,float *param_2)

{
  return SQRT((param_1[2] - param_2[2]) * (param_1[2] - param_2[2]) +
              (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
              (*param_1 - *param_2) * (*param_1 - *param_2));
}
