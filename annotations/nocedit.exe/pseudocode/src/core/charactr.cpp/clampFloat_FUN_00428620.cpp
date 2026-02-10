// Name: core_charactr.cpp_clampFloat_FUN_00428620
// Address: 00428620
// Address Range: [[00428620, 00428669]]
// Convention: __cdecl
// Signature: float __cdecl core_charactr_cpp_clampFloat_FUN_00428620(float value,float limit)

#include "nocturne.h"

float __cdecl core_charactr_cpp_clampFloat_FUN_00428620(float value,float limit)

{
  float fVar1;
  
  fVar1 = -limit;
  if ((-limit <= value) && (fVar1 = limit, value <= limit)) {
    return value;
  }
  return fVar1;
}
