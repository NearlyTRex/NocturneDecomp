// Name: core_netgame.cpp_computeTimeDelta_FUN_00503a80
// Address: 00503a80
// Address Range: [[00503a80, 00503ad8]]
// Convention: __cdecl
// Signature: float __cdecl core_netgame_cpp_computeTimeDelta_FUN_00503a80(int start_time,int end_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_netgame_cpp_computeTimeDelta_FUN_00503a80(int start_time,int end_time)

{
  uint uStack_10;
  
  uStack_10 = (float)(end_time - start_time) * (float)_DAT_005ca3e1;
  if (uStack_10 < (float)_DAT_005ca3e9) {
    uStack_10 = -30.0;
  }
  if (uStack_10 <= (float)_DAT_005ca3f1) {
    return uStack_10;
  }
  return 30.0;
}
