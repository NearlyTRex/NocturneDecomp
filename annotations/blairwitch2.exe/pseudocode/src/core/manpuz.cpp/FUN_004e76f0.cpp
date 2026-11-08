// Name: FUN_004e76f0
// Address: 004e76f0
// Address Range: [[004e76f0, 004e777f]]
// Convention: unknown
// Signature: undefined4 FUN_004e76f0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004e76f0(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0) || (0xb < param_2)) {
    _DAT_01d046a0 = "..\\core\\manpuz.cpp";
    _DAT_01d046a4 = 0x5e6;
    FUN_004e4500("CMansionPuzzleCircle::panelOccupied - invalid index: %d",param_2);
  }
  if (*(int *)(param_1 + 0x74c + param_2 * 100) == 0) {
    iVar1 = FUN_004e7570(param_1,param_2);
    param_1 = iVar1 * 100 + param_1;
    if ((*(int *)(param_1 + 0x74c) == 0) || ((*(uint *)(param_1 + 0x754) & 0x7fffffff) == 0)) {
      return 0;
    }
  }
  return 1;
}
