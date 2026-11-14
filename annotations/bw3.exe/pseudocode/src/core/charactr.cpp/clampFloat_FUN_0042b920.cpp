// Name: core_charactr.cpp_clampFloat_FUN_0042b920
// Address: 0042b920
// Address Range: [[0042b920, 0042b969]]
// Convention: __cdecl
// Signature: float __cdecl core_charactr_cpp_clampFloat_FUN_0042b920(float value,float limit)

#include "nocturne.h"

float __cdecl core_charactr_cpp_clampFloat_FUN_0042b920(float value,float limit)

{
  float fVar1;
  
  fVar1 = -limit;
  if ((-limit <= value) && (fVar1 = limit, value <= limit)) {
    return value;
  }
  return fVar1;
}
