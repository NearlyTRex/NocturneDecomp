// Name: FUN_00530660
// Address: 00530660
// Address Range: [[00530660, 005306ca]]
// Convention: unknown
// Signature: int * FUN_00530660(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00530660(int *param_1)

{
  if (*param_1 != 0) {
    if (param_1[0x47] < 0) {
      _DAT_01d1d400 = "..\\core\\netgame.cpp";
      _DAT_01d1d404 = 0xa0f;
      FUN_005030e0("CNetGame::getMyControls - I'm not in the player list!");
    }
    return param_1 + param_1[0x47] * 0x1f + 0x1b;
  }
  return (int *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0xc1d8);
}
