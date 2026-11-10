// Name: core_water.cpp_calculateWaveHeight_FUN_005a998e
// Address: 005a998e
// Address Range: [[005a998e, 005a99d4]]
// Convention: unknown
// Signature: float core_water_cpp_calculateWaveHeight_FUN_005a998e(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_water_cpp_calculateWaveHeight_FUN_005a998e(int param_1,int param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)fsin((float10)param_2 * (float10)_DAT_005f91e2 * (float10)_DAT_005f91ea +
                        (float10)param_1 * (float10)_DAT_005f91e2 + (float10)_DAT_02c93008);
  return (float)(fVar1 * (float10)_DAT_00625c94);
}
