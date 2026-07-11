// Name: FUN_0045ed80
// Address: 0045ed80
// Address Range: [[0045ed80, 0045ee57]]
// Convention: unknown
// Signature: void FUN_0045ed80(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045ed80(int param_1,uint param_2,uint param_3)

{
  if (*(int *)(param_1 + 8) != 0) {
    _DAT_01cc4800 = "..\\engine\\drender.cpp";
    _DAT_01cc4804 = 0xac;
    FUN_004c8440("CDemonRenderer::clipAndFillPoly - Bad projection mode");
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    if (((*(int *)(param_1 + 4) == 0) || ((DAT_01c039a0 & 1) != 0)) && ((DAT_01c039a0 & 5) != 0)) {
      FUN_00457a00(param_3,param_2);
    }
    else {
      FUN_00458080(param_3,param_2);
    }
  }
  else {
    if (((*(int *)(param_1 + 4) == 0) || ((DAT_01c039a0 & 1) != 0)) && ((DAT_01c039a0 & 5) != 0)) {
      if ((DAT_01c039a1 & 2) == 0) {
        FUN_00432cd0(param_2,param_3);
        return;
      }
      FUN_004349a0(param_2,param_3);
      return;
    }
    FUN_0055e040(param_2,param_3);
    if (2 < DAT_00766c70) {
      FUN_005628c0(&DAT_00766c74,DAT_00766c70);
      return;
    }
  }
  return;
}
