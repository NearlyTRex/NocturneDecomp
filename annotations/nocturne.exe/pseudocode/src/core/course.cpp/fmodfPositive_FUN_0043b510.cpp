// Name: core_course.cpp_fmodfPositive_FUN_0043b510
// Address: 0043b510
// Address Range: [[0043b510, 0043b5a0]]
// Convention: unknown
// Signature: float core_course_cpp_fmodfPositive_FUN_0043b510(float param_1,float param_2)

#include "nocturne.h"

float core_course_cpp_fmodfPositive_FUN_0043b510(float param_1,float param_2)

{
  double dVar1;
  
  if (param_1 < 0.0) {
    dVar1 = (double)floor((double)(-param_1 / param_2));
    param_1 = (float)dVar1 * param_2 + param_1;
    if (param_1 < 0.0) {
      param_1 = param_1 + param_2;
    }
    return param_1;
  }
  dVar1 = (double)floor((double)(param_1 / param_2));
  return param_1 - (float)dVar1 * param_2;
}
