// Name: core_water.cpp_calculateWaveHeight_FUN_00585d5e
// Address: 00585d5e
// Address Range: [[00585d5e, 00585da4]]
// Convention: __cdecl
// Signature: float __cdecl core_water_cpp_calculateWaveHeight_FUN_00585d5e(int x,int y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_water_cpp_calculateWaveHeight_FUN_00585d5e(int x,int y)

{
  float10 fVar1;
  
  fVar1 = (float10)fsin((float10)y * (float10)_DAT_005ede86 * (float10)_DAT_005ede8e +
                        (float10)x * (float10)_DAT_005ede86 + (float10)_DAT_0265b7e8);
  return (float)(fVar1 * (float10)_DAT_0061e524);
}
