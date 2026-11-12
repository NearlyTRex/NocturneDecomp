// Name: core_charactr.cpp_clampFloat_FUN_0042cc30
// Address: 0042cc30
// Address Range: [[0042cc30, 0042cc79]]
// Convention: __cdecl
// Signature: float __cdecl core_charactr_cpp_clampFloat_FUN_0042cc30(float value,float limit)

#include "nocturne.h"

float __cdecl core_charactr_cpp_clampFloat_FUN_0042cc30(float value,float limit)

{
  float fVar1;
  
  fVar1 = -limit;
  if ((-limit <= value) && (fVar1 = limit, value <= limit)) {
    return value;
  }
  return fVar1;
}
