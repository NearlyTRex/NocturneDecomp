// Name: core_water.cpp_calculateWaveHeight_FUN_005771e0
// Address: 005771e0
// Address Range: [[005771e0, 00577224]]
// Convention: __cdecl
// Signature: float __cdecl core_water_cpp_calculateWaveHeight_FUN_005771e0(int x,int y)

#include "nocturne.h"

float __cdecl core_water_cpp_calculateWaveHeight_FUN_005771e0(int x,int y)

{
  float10 fVar1;
  
  fVar1 = (float10)fsin((float10)y * (float10)3.141593f * (float10)0.5 +
                        (float10)x * (float10)3.141593f + (float10)g_WaterAnimationPhase);
  return (float)(fVar1 * (float10)g_FLOAT_00606b24);
}
