// Name: core_netgame.cpp_getElapsedSeconds_FUN_0050b000
// Address: 0050b000
// Address Range: [[0050b000, 0050b056]]
// Convention: __cdecl
// Signature: float __cdecl core_netgame_cpp_getElapsedSeconds_FUN_0050b000(uint timestamp)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_netgame_cpp_getElapsedSeconds_FUN_0050b000(uint timestamp)

{
  uint uStack_10;
  
  uStack_10 = (float)(int)(_DAT_01d34e38 - timestamp) * (float)_DAT_005e038d;
  if (uStack_10 < 0.0) {
    uStack_10 = 0.0;
  }
  if (uStack_10 <= (float)_DAT_005e0395) {
    return uStack_10;
  }
  return 30.0;
}
