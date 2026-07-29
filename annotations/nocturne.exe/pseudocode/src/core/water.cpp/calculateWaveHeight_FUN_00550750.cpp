// Name: core_water.cpp_calculateWaveHeight_FUN_00550750
// Address: 00550750
// Address Range: [[00550750, 00550794]]
// Convention: __cdecl
// Signature: float __cdecl core_water_cpp_calculateWaveHeight_FUN_00550750(int x,int y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_water_cpp_calculateWaveHeight_FUN_00550750(int x,int y)

{
  float10 fVar1;
  
  fVar1 = (float10)fsin((float10)y * (float10)_DAT_00597527 * (float10)_DAT_0059752f +
                        (float10)x * (float10)_DAT_00597527 + (float10)_DAT_02dd9260);
  return (float)(fVar1 * (float10)_DAT_00597537);
}
