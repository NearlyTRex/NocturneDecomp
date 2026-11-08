// Name: FUN_00481aa0
// Address: 00481aa0
// Address Range: [[00481aa0, 00481b77]]
// Convention: unknown
// Signature: void FUN_00481aa0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00481aa0(int param_1,uint param_2,uint param_3)

{
  if (*(int *)(param_1 + 8) != 0) {
    _DAT_01d1d400 = "..\\engine\\drender.cpp";
    _DAT_01d1d404 = 0xad;
    FUN_005030e0("CDemonRenderer::clipAndFillPoly - Bad projection mode");
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    if (((*(int *)(param_1 + 4) == 0) || ((DAT_01c51d14 & 1) != 0)) && ((DAT_01c51d14 & 5) != 0)) {
      FUN_0047a480(param_3,param_2);
    }
    else {
      FUN_0047ab00(param_3,param_2);
    }
  }
  else {
    if (((*(int *)(param_1 + 4) == 0) || ((DAT_01c51d14 & 1) != 0)) && ((DAT_01c51d14 & 5) != 0)) {
      if ((DAT_01c51d15 & 2) == 0) {
        FUN_0043cbf0(param_2,param_3);
        return;
      }
      FUN_0043de60(param_2,param_3);
      return;
    }
    FUN_005b9fc0(param_2,param_3);
    if (2 < DAT_007c7554) {
      FUN_005bf120(&DAT_007c7558,DAT_007c7554);
      return;
    }
  }
  return;
}
