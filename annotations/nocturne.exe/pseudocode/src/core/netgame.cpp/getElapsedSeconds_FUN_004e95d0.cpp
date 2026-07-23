// Name: core_netgame.cpp_getElapsedSeconds_FUN_004e95d0
// Address: 004e95d0
// Address Range: [[004e95d0, 004e9626]]
// Convention: unknown
// Signature: float core_netgame_cpp_getElapsedSeconds_FUN_004e95d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_netgame_cpp_getElapsedSeconds_FUN_004e95d0(int param_1)

{
  uint uStack_10;
  
  uStack_10 = (float)(_DAT_01cea3f8 - param_1) * (float)1.52587890625e-05;
  if (uStack_10 < 0.0) {
    uStack_10 = 0.0;
  }
  if (uStack_10 <= (float)30) {
    return uStack_10;
  }
  return 30.0;
}
