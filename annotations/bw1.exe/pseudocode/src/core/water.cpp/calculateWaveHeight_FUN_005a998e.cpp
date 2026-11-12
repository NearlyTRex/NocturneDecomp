// Name: core_water.cpp_calculateWaveHeight_FUN_005a998e
// Address: 005a998e
// Address Range: [[005a998e, 005a99d4]]
// Convention: __cdecl
// Signature: float __cdecl core_water_cpp_calculateWaveHeight_FUN_005a998e(int x,int y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_water_cpp_calculateWaveHeight_FUN_005a998e(int x,int y)

{
  float10 fVar1;
  
  fVar1 = (float10)fsin((float10)y * (float10)_DAT_005f91e2 * (float10)_DAT_005f91ea +
                        (float10)x * (float10)_DAT_005f91e2 + (float10)_DAT_02c93008);
  return (float)(fVar1 * (float10)_DAT_00625c94);
}
