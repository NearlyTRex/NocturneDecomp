// Name: FUN_00507f10
// Address: 00507f10
// Address Range: [[00507f10, 00507f82]]
// Convention: unknown
// Signature: int * FUN_00507f10(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00507f10(int *param_1)

{
  if (*param_1 == 0) {
    return (int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0xcdd4);
  }
  if (-1 < param_1[0x49]) {
    return param_1 + param_1[0x49] * 0x20 + 0x1b;
  }
  _DAT_01d71de0 = "..\\core\\netgame.cpp";
  _DAT_01d71de4 = 0xa0f;
  FUN_004e4330("CNetGame::getMyControls - I'm not in the player list!");
  return param_1 + param_1[0x49] * 0x20 + 0x1b;
}
