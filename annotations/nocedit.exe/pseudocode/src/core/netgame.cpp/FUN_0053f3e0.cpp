// Name: core_netgame.cpp_FUN_0053f3e0
// Address: 0053f3e0
// Address Range: [[0053f3e0, 0053f438]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_FUN_0053f3e0()

#include "nocturne.h"

float core_netgame_cpp_FUN_0053f3e0(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  uint local_c;
  
  local_c = (float)(in_stack_00000008 - in_stack_00000004) * (float)1.52587890625e-05;
  if (local_c < (float)-30) {
    local_c = -30.0;
  }
  if (local_c <= (float)30) {
    return local_c;
  }
  return 30.0;
}
