// Name: core_bat.cpp_fmodfPositive_FUN_00411940
// Address: 00411940
// Address Range: [[00411940, 004119d0]]
// Convention: __cdecl
// Signature: float __cdecl core_bat_cpp_fmodfPositive_FUN_00411940(float value,float modulus)

#include "nocturne.h"

float __cdecl core_bat_cpp_fmodfPositive_FUN_00411940(float value,float modulus)

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
