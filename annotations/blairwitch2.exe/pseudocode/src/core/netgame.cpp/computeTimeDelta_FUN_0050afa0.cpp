// Name: core_netgame.cpp_computeTimeDelta_FUN_0050afa0
// Address: 0050afa0
// Address Range: [[0050afa0, 0050aff8]]
// Convention: __cdecl
// Signature: float __cdecl core_netgame_cpp_computeTimeDelta_FUN_0050afa0(int start_time,int end_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_netgame_cpp_computeTimeDelta_FUN_0050afa0(int start_time,int end_time)

{
  uint uStack_10;
  
  uStack_10 = (float)(end_time - start_time) * (float)_DAT_005e0375;
  if (uStack_10 < (float)_DAT_005e037d) {
    uStack_10 = -30.0;
  }
  if (uStack_10 <= (float)_DAT_005e0385) {
    return uStack_10;
  }
  return 30.0;
}
