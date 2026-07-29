// Name: core_charactr.cpp_clampFloat_FUN_00424730
// Address: 00424730
// Address Range: [[00424730, 00424779]]
// Convention: __cdecl
// Signature: float __cdecl core_charactr_cpp_clampFloat_FUN_00424730(float value,float limit)

#include "nocturne.h"

float __cdecl core_charactr_cpp_clampFloat_FUN_00424730(float value,float limit)

{
  float fVar1;
  
  fVar1 = -limit;
  if ((-limit <= value) && (fVar1 = limit, value <= limit)) {
    return value;
  }
  return fVar1;
}
