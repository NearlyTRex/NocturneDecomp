// Name: core_netgame.cpp_computeTimeDelta_FUN_004e9570
// Address: 004e9570
// Address Range: [[004e9570, 004e95c8]]
// Convention: __cdecl
// Signature: float __cdecl core_netgame_cpp_computeTimeDelta_FUN_004e9570(int start_time,int end_time)

#include "nocturne.h"

float __cdecl core_netgame_cpp_computeTimeDelta_FUN_004e9570(int start_time,int end_time)

{
  uint local_10;
  
  local_10 = (float)(end_time - start_time) * (float)1.52587890625e-05;
  if (local_10 < (float)-30) {
    local_10 = -30.0;
  }
  if (local_10 <= (float)30) {
    return local_10;
  }
  return 30.0;
}
