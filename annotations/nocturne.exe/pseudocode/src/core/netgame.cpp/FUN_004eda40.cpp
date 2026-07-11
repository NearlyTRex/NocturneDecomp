// Name: FUN_004eda40
// Address: 004eda40
// Address Range: [[004eda40, 004edaaa]]
// Convention: unknown
// Signature: int * FUN_004eda40(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_004eda40(int *param_1)

{
  if (*param_1 != 0) {
    if (param_1[0x45] < 0) {
      _DAT_01cc4800 = "..\\core\\netgame.cpp";
      _DAT_01cc4804 = 0xa0f;
      FUN_004c8440("CNetGame::getMyControls - I'm not in the player list!");
    }
    return param_1 + param_1[0x45] * 0x1e + 0x1b;
  }
  return (int *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0xbc94);
}
