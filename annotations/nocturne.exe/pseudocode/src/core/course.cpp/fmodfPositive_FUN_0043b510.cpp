// Name: core_course.cpp_fmodfPositive_FUN_0043b510
// Address: 0043b510
// Address Range: [[0043b510, 0043b5a0]]
// Convention: __cdecl
// Signature: float __cdecl core_course_cpp_fmodfPositive_FUN_0043b510(float value,float modulus)

#include "nocturne.h"

float __cdecl core_course_cpp_fmodfPositive_FUN_0043b510(float value,float modulus)

{
  double dVar1;
  
  if (value < 0.0) {
    dVar1 = floor((double)(-value / modulus));
    value = (float)dVar1 * modulus + value;
    if (value < 0.0) {
      value = value + modulus;
    }
    return value;
  }
  dVar1 = floor((double)(value / modulus));
  return value - (float)dVar1 * modulus;
}
