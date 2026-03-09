// Name: core_conveyor.cpp_floatModulo_FUN_00442400
// Address: 00442400
// Address Range: [[00442400, 00442490]]
// Convention: __cdecl
// Signature: float __cdecl core_conveyor_cpp_floatModulo_FUN_00442400(float value,float divisor)

#include "nocturne.h"

float __cdecl core_conveyor_cpp_floatModulo_FUN_00442400(float value,float divisor)

{
  double dVar1;
  
  if (value < 0.0) {
    dVar1 = floor((double)(-value / divisor));
    value = (float)dVar1 * divisor + value;
    if (value < 0.0) {
      value = value + divisor;
    }
    return value;
  }
  dVar1 = floor((double)(value / divisor));
  return value - (float)dVar1 * divisor;
}
