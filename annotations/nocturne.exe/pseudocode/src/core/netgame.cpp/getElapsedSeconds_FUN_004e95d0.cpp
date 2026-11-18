// Name: core_netgame.cpp_getElapsedSeconds_FUN_004e95d0
// Address: 004e95d0
// Address Range: [[004e95d0, 004e9626]]
// Convention: __cdecl
// Signature: float __cdecl core_netgame_cpp_getElapsedSeconds_FUN_004e95d0(uint timestamp)

#include "nocturne.h"

float __cdecl core_netgame_cpp_getElapsedSeconds_FUN_004e95d0(uint timestamp)

{
  uint uStack_10;
  
  uStack_10 = (float)(int)(g_CurrentGameTime - timestamp) * (float)1.52587890625e-05;
  if (uStack_10 < 0.0) {
    uStack_10 = 0.0;
  }
  if (uStack_10 <= (float)30) {
    return uStack_10;
  }
  return 30.0;
}
