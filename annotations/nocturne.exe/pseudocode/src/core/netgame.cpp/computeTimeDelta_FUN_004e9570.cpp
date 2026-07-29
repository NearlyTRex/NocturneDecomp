// Name: core_netgame.cpp_computeTimeDelta_FUN_004e9570
// Address: 004e9570
// Address Range: [[004e9570, 004e95c8]]
// Convention: __cdecl
// Signature: float __cdecl core_netgame_cpp_computeTimeDelta_FUN_004e9570(int start_time,int end_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_netgame_cpp_computeTimeDelta_FUN_004e9570(int start_time,int end_time)

{
  uint local_10;
  
  local_10 = (float)(end_time - start_time) * (float)_DAT_0058b9fa;
  if (local_10 < (float)_DAT_0058ba02) {
    local_10 = -30.0;
  }
  if (local_10 <= (float)_DAT_0058ba0a) {
    return local_10;
  }
  return 30.0;
}
