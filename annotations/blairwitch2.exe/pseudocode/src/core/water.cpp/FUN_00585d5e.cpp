// Name: core_water.cpp_FUN_00585d5e
// Address: 00585d5e
// Address Range: [[00585d5e, 00585da4]]
// Convention: unknown
// Signature: float core_water_cpp_FUN_00585d5e(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_water_cpp_FUN_00585d5e(int param_1,int param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)fsin((float10)param_2 * (float10)_DAT_005ede86 * (float10)_DAT_005ede8e +
                        (float10)param_1 * (float10)_DAT_005ede86 + (float10)_DAT_0265b7e8);
  return (float)(fVar1 * (float10)_DAT_0061e524);
}
