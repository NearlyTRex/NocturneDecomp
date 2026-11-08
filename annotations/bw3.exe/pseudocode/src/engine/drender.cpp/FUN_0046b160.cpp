// Name: FUN_0046b160
// Address: 0046b160
// Address Range: [[0046b160, 0046b237]]
// Convention: unknown
// Signature: void FUN_0046b160(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046b160(int param_1,uint param_2,uint param_3)

{
  if (*(int *)(param_1 + 8) != 0) {
    _DAT_01d71de0 = "..\\engine\\drender.cpp";
    _DAT_01d71de4 = 0xad;
    FUN_004e4330("CDemonRenderer::clipAndFillPoly - Bad projection mode");
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    if (((*(int *)(param_1 + 4) == 0) || ((DAT_01c6e2b4 & 1) != 0)) && ((DAT_01c6e2b4 & 5) != 0)) {
      FUN_00466d50(param_3,param_2);
    }
    else {
      FUN_004673d0(param_3,param_2);
    }
  }
  else {
    if (((*(int *)(param_1 + 4) == 0) || ((DAT_01c6e2b4 & 1) != 0)) && ((DAT_01c6e2b4 & 5) != 0)) {
      if ((DAT_01c6e2b5 & 2) == 0) {
        FUN_0043a840(param_2,param_3);
        return;
      }
      FUN_0043bac0(param_2,param_3);
      return;
    }
    FUN_00587cd0(param_2,param_3);
    if (2 < DAT_007e3e88) {
      FUN_005a1ea0(&DAT_007e3e8c,DAT_007e3e88);
      return;
    }
  }
  return;
}
