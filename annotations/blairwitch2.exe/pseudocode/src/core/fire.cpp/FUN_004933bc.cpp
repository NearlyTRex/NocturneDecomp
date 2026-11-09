// Name: core_fire.cpp_FUN_004933bc
// Address: 004933bc
// Address Range: [[004933bc, 0049340f]]
// Convention: unknown
// Signature: float core_fire_cpp_FUN_004933bc(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_fire_cpp_FUN_004933bc(float param_1)

{
  float10 fVar1;
  uint uStack_8;
  
  if (param_1 <= (float)_DAT_005d5332) {
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
