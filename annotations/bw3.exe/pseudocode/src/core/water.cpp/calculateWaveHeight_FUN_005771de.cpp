// Name: core_water.cpp_calculateWaveHeight_FUN_005771de
// Address: 005771de
// Address Range: [[005771de, 00577224]]
// Convention: unknown
// Signature: float core_water_cpp_calculateWaveHeight_FUN_005771de(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_water_cpp_calculateWaveHeight_FUN_005771de(int param_1,int param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)fsin((float10)param_2 * (float10)_DAT_005d714b * (float10)_DAT_005d7153 +
                        (float10)param_1 * (float10)_DAT_005d714b + (float10)_DAT_02d059a8);
  return (float)(fVar1 * (float10)_DAT_00606b24);
}
