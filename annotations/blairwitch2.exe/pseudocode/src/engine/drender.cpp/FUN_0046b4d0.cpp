// Name: engine_drender.cpp_FUN_0046b4d0
// Address: 0046b4d0
// Address Range: [[0046b4d0, 0046b4e5]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_0046b4d0(undefined4 param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_drender_cpp_FUN_0046b4d0(uint param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)_DAT_005d15b3 / (float10)param_2;
  round();
  DAT_006141e4 = (int)ROUND(fVar1);
  return;
}
