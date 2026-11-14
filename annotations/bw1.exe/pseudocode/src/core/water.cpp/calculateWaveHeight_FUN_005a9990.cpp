// Name: core_water.cpp_calculateWaveHeight_FUN_005a9990
// Address: 005a9990
// Address Range: [[005a9990, 005a99d4]]
// Convention: __cdecl
// Signature: float __cdecl core_water_cpp_calculateWaveHeight_FUN_005a9990(int x,int y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_water_cpp_calculateWaveHeight_FUN_005a9990(int x,int y)

{
  float10 fVar1;
  
  fVar1 = (float10)fsin((float10)y * (float10)_DAT_005f91e2 * (float10)_DAT_005f91ea +
                        (float10)x * (float10)_DAT_005f91e2 + (float10)_DAT_02c93008);
  return (float)(fVar1 * (float10)_DAT_00625c94);
}
