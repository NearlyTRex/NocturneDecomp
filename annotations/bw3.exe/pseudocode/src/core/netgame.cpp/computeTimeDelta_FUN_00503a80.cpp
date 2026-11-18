// Name: core_netgame.cpp_computeTimeDelta_FUN_00503a80
// Address: 00503a80
// Address Range: [[00503a80, 00503ad8]]
// Convention: __cdecl
// Signature: float __cdecl core_netgame_cpp_computeTimeDelta_FUN_00503a80(int start_time,int end_time)

#include "nocturne.h"

float __cdecl core_netgame_cpp_computeTimeDelta_FUN_00503a80(int start_time,int end_time)

{
  uint uStack_10;
  
  uStack_10 = (float)(end_time - start_time) * (float)1.52587890625e-05;
  if (uStack_10 < (float)-30) {
    uStack_10 = -30.0;
  }
  if (uStack_10 <= (float)30) {
    return uStack_10;
  }
  return 30.0;
}
