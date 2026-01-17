// Name: core_netgame.cpp_FUN_0053f440
// Address: 0053f440
// Address Range: [[0053f440, 0053f496]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_FUN_0053f440()

#include "nocturne.h"

float core_netgame_cpp_FUN_0053f440(void)

{
  int in_stack_00000004;
  uint local_10;
  
  local_10 = (float)(int)(g_CurrentGameTime - in_stack_00000004) * (float)1.52587890625e-05;
  if (local_10 < 0.0) {
    local_10 = 0.0;
  }
  if (local_10 <= (float)30) {
    return local_10;
  }
  return 30.0;
}
