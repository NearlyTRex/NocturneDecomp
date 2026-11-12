// Name: core_water.cpp_calculateWaveHeight_FUN_005771de
// Address: 005771de
// Address Range: [[005771de, 00577224]]
// Convention: __cdecl
// Signature: float __cdecl core_water_cpp_calculateWaveHeight_FUN_005771de(int x,int y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_water_cpp_calculateWaveHeight_FUN_005771de(int x,int y)

{
  float10 fVar1;
  
  fVar1 = (float10)fsin((float10)y * (float10)_DAT_005d714b * (float10)_DAT_005d7153 +
                        (float10)x * (float10)_DAT_005d714b + (float10)_DAT_02d059a8);
  return (float)(fVar1 * (float10)_DAT_00606b24);
}
