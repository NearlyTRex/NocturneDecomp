// Name: core_water.cpp_calculateWaveHeight_FUN_005e9dc0
// Address: 005e9dc0
// Address Range: [[005e9dc0, 005e9e04]]
// Convention: __cdecl
// Signature: float core_water.cpp_calculateWaveHeight_FUN_005e9dc0(int x, int y)

#include "nocturne.h"

float __cdecl core_water_cpp_calculateWaveHeight_FUN_005e9dc0(int x,int y)

{
  float10 fVar1;
  
  fVar1 = (float10)fsin((float10)y * (float10)3.1415926535000001 * (float10)0.5 +
                        (float10)x * (float10)3.1415926535000001 + (float10)g_WaterAnimationPhase);
  return (float)(fVar1 * (float10)0.25);
}
