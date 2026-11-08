// Name: FUN_00506390
// Address: 00506390
// Address Range: [[00506390, 0050641f]]
// Convention: unknown
// Signature: undefined4 FUN_00506390(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00506390(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0) || (0xb < param_2)) {
    _DAT_01d1d400 = "..\\core\\manpuz.cpp";
    _DAT_01d1d404 = 0x5e6;
    FUN_005030e0("CMansionPuzzleCircle::panelOccupied - invalid index: %d",param_2);
  }
  if (*(int *)(param_1 + 0x5f0 + param_2 * 100) == 0) {
    iVar1 = FUN_00506210(param_1,param_2);
    param_1 = iVar1 * 100 + param_1;
    if ((*(int *)(param_1 + 0x5f0) == 0) || ((*(uint *)(param_1 + 0x5f8) & 0x7fffffff) == 0)) {
      return 0;
    }
  }
  return 1;
}
