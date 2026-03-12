// Name: core_bat.cpp_fmodfPositive_FUN_004146f0
// Address: 004146f0
// Address Range: [[004146f0, 00414780]]
// Convention: __cdecl
// Signature: float __cdecl core_bat_cpp_fmodfPositive_FUN_004146f0(float value,float modulus)

#include "nocturne.h"

float __cdecl core_bat_cpp_fmodfPositive_FUN_004146f0(float value,float modulus)

{
  double dVar1;
  double dVar2;
  
  if (value < 0.0) {
    dVar1 = floor((double)(-value / modulus));
    value = (float)dVar1 * modulus + value;
    if (value < 0.0) {
      value = value + modulus;
    }
    return value;
  }
  dVar2 = floor((double)(value / modulus));
  return value - (float)dVar2 * modulus;
}
