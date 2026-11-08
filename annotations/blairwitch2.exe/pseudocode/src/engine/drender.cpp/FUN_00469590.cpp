// Name: FUN_00469590
// Address: 00469590
// Address Range: [[00469590, 00469667]]
// Convention: unknown
// Signature: void FUN_00469590(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00469590(int param_1,uint param_2,uint param_3)

{
  if (*(int *)(param_1 + 8) != 0) {
    _DAT_01d046a0 = "..\\engine\\drender.cpp";
    _DAT_01d046a4 = 0xad;
    FUN_004e4500("CDemonRenderer::clipAndFillPoly - Bad projection mode");
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    if (((*(int *)(param_1 + 4) == 0) || ((DAT_01c38b54 & 1) != 0)) && ((DAT_01c38b54 & 5) != 0)) {
      FUN_00461f70(param_3,param_2);
    }
    else {
      FUN_004625f0(param_3,param_2);
    }
  }
  else {
    if (((*(int *)(param_1 + 4) == 0) || ((DAT_01c38b54 & 1) != 0)) && ((DAT_01c38b54 & 5) != 0)) {
      if ((DAT_01c38b55 & 2) == 0) {
        FUN_00431d90(param_2,param_3);
        return;
      }
      FUN_00433000(param_2,param_3);
      return;
    }
    FUN_00594f40(param_2,param_3);
    if (2 < DAT_007bee30) {
      FUN_0059a0b0(&DAT_007bee34,DAT_007bee30);
      return;
    }
  }
  return;
}
