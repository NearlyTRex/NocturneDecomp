// Name: FUN_0050f430
// Address: 0050f430
// Address Range: [[0050f430, 0050f4a2]]
// Convention: unknown
// Signature: int * FUN_0050f430(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0050f430(int *param_1)

{
  if (*param_1 == 0) {
    return (int *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x10a68);
  }
  if (-1 < param_1[0x49]) {
    return param_1 + param_1[0x49] * 0x20 + 0x1b;
  }
  _DAT_01d046a0 = "..\\core\\netgame.cpp";
  _DAT_01d046a4 = 0xa0f;
  FUN_004e4500("CNetGame::getMyControls - I'm not in the player list!");
  return param_1 + param_1[0x49] * 0x20 + 0x1b;
}
