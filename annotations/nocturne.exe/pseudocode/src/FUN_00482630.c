// Name: FUN_00482630
// Address: 00482630
// Address Range: [[00482630, 0048267f]]
// Convention: unknown
// Signature: float FUN_00482630(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00482630(float param_1)

{
  float10 fVar1;
  uint uStack_8;
  
  if (param_1 <= (float)_DAT_00581064) {
    uStack_8 = 3.1415927;
  }
  else {
    if (param_1 < 1.0) {
      fVar1 = (float10)param_1;
      FUN_00565ca4();
      return (float)fVar1;
    }
    uStack_8 = 0.0;
  }
  return uStack_8;
}
