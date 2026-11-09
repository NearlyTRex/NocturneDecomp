// Name: core_fire.cpp_FUN_004abd5e
// Address: 004abd5e
// Address Range: [[004abd5e, 004abdaf]]
// Convention: unknown
// Signature: float core_fire_cpp_FUN_004abd5e(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_fire_cpp_FUN_004abd5e(float param_1)

{
  float10 fVar1;
  uint uStack_8;
  
  if (param_1 <= (float)_DAT_005df174) {
    uStack_8 = 3.1415927;
  }
  else {
    if (param_1 < 1.0) {
      fVar1 = (float10)param_1;
      acos();
      return (float)fVar1;
    }
    uStack_8 = 0.0;
  }
  return uStack_8;
}
