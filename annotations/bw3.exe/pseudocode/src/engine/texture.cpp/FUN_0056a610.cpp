// Name: FUN_0056a610
// Address: 0056a610
// Address Range: [[0056a610, 0056a683]]
// Convention: unknown
// Signature: void FUN_0056a610(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056a610(int param_1,int param_2)

{
  if ((*(int *)(param_2 + 4) < 0) || (*(int *)(param_1 + 0x18004) <= *(int *)(param_2 + 4))) {
    _DAT_01d71de0 = "..\\engine\\texture.cpp";
    _DAT_01d71de4 = 0x2e9;
    FUN_004e4330("CTextureCache::selectTextureByHandle - Out of range : %d,%s",*(uint *)(param_2 + 4),param_2 + 8);
  }
  (*_DAT_02cf60e4)(*(uint *)(*(int *)(param_2 + 4) * 0x60 + 0x60 + param_1),0);
  return;
}
