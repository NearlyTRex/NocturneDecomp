// Name: core_stranger.cpp_FUN_0056bcbe
// Address: 0056bcbe
// Address Range: [[0056bcbe, 0056bd4a]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_0056bcbe(float *param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_stranger_cpp_FUN_0056bcbe(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float10 fVar2;
  
  if ((((float)_DAT_005ebc55 <= param_2) &&
      (param_2 = SQRT(param_2 * param_2 - param_3 * param_3) / param_2, param_2 < 1.0)) &&
     (0.0 <= param_2)) {
    fVar2 = (float10)param_2;
    acos();
    if (param_3 < 0.0) {
      fVar1 = *param_1 - (float)fVar2;
    }
    else {
      fVar1 = *param_1 + (float)fVar2;
    }
    *param_1 = fVar1;
    fVar1 = (float)core_actor_cpp_FUN_0040d0c0(*param_1);
    *param_1 = fVar1;
  }
  return;
}
