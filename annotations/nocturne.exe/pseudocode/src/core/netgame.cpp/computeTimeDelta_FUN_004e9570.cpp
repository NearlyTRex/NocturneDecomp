// Name: core_netgame.cpp_computeTimeDelta_FUN_004e9570
// Address: 004e9570
// Address Range: [[004e9570, 004e95c8]]
// Convention: unknown
// Signature: float core_netgame_cpp_computeTimeDelta_FUN_004e9570(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float core_netgame_cpp_computeTimeDelta_FUN_004e9570(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  uint local_10;
  
  local_10 = (float)(in_stack_00000008 - in_stack_00000004) * (float)_DAT_0058b9fa;
  if (local_10 < (float)_DAT_0058ba02) {
    local_10 = -30.0;
  }
  if (local_10 <= (float)_DAT_0058ba0a) {
    return local_10;
  }
  return 30.0;
}
