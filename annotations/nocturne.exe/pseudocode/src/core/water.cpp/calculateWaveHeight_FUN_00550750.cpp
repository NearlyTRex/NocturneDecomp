// Name: core_water.cpp_calculateWaveHeight_FUN_00550750
// Address: 00550750
// Address Range: [[00550750, 00550794]]
// Convention: __cdecl
// Signature: float __cdecl core_water_cpp_calculateWaveHeight_FUN_00550750(int x,int y)

#include "nocturne.h"

float __cdecl core_water_cpp_calculateWaveHeight_FUN_00550750(int x,int y)

{
  float10 fVar1;
  
  fVar1 = (float10)fsin((float10)y * (float10)3.1415926535000001 * (float10)0.5 +
                        (float10)x * (float10)3.1415926535000001 + (float10)g_WaterAnimationPhase);
  return (float)(fVar1 * (float10)0.25);
}
