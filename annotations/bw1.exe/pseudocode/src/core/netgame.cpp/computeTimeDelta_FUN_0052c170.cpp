// Name: core_netgame.cpp_computeTimeDelta_FUN_0052c170
// Address: 0052c170
// Address Range: [[0052c170, 0052c1c8]]
// Convention: __cdecl
// Signature: float __cdecl core_netgame_cpp_computeTimeDelta_FUN_0052c170(int start_time,int end_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_netgame_cpp_computeTimeDelta_FUN_0052c170(int start_time,int end_time)

{
  uint uStack_10;
  
  uStack_10 = (float)(end_time - start_time) * (float)_DAT_005eb5d0;
  if (uStack_10 < (float)_DAT_005eb5d8) {
    uStack_10 = -30.0;
  }
  if (uStack_10 <= (float)_DAT_005eb5e0) {
    return uStack_10;
  }
  return 30.0;
}
