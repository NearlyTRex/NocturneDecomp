// Name: core_water.cpp_calculateWaveHeight_FUN_00585d60
// Address: 00585d60
// Address Range: [[00585d60, 00585da4]]
// Convention: __cdecl
// Signature: float __cdecl core_water_cpp_calculateWaveHeight_FUN_00585d60(int x,int y)

#include "nocturne.h"

float __cdecl core_water_cpp_calculateWaveHeight_FUN_00585d60(int x,int y)

{
  float10 fVar1;
  
  fVar1 = (float10)fsin((float10)y * (float10)3.141593f * (float10)0.5 +
                        (float10)x * (float10)3.141593f + (float10)g_FLOAT_0265b7e8);
  return (float)(fVar1 * (float10)g_FLOAT_0061e524);
}
