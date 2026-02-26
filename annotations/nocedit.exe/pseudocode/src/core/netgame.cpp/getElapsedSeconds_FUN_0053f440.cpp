// Name: core_netgame.cpp_getElapsedSeconds_FUN_0053f440
// Address: 0053f440
// Address Range: [[0053f440, 0053f496]]
// Convention: __cdecl
// Signature: float __cdecl core_netgame_cpp_getElapsedSeconds_FUN_0053f440(uint timestamp)

#include "nocturne.h"

float __cdecl core_netgame_cpp_getElapsedSeconds_FUN_0053f440(uint timestamp)

{
  uint local_10;
  
  local_10 = (float)(int)(g_CurrentGameTime - timestamp) * (float)1.52587890625e-05;
  if (local_10 < 0.0) {
    local_10 = 0.0;
  }
  if (local_10 <= (float)30) {
    return local_10;
  }
  return 30.0;
}
