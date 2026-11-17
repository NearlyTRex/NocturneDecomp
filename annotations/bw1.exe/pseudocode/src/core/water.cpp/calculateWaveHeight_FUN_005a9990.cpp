// Name: core_water.cpp_calculateWaveHeight_FUN_005a9990
// Address: 005a9990
// Address Range: [[005a9990, 005a99d4]]
// Convention: __cdecl
// Signature: float __cdecl core_water_cpp_calculateWaveHeight_FUN_005a9990(int x,int y)

#include "nocturne.h"

float __cdecl core_water_cpp_calculateWaveHeight_FUN_005a9990(int x,int y)

{
  float10 fVar1;
  
  fVar1 = (float10)fsin((float10)y * (float10)3.141593f * (float10)0.5 +
                        (float10)x * (float10)3.141593f + (float10)g_FLOAT_02c93008);
  return (float)(fVar1 * (float10)g_FLOAT_00625c94);
}
