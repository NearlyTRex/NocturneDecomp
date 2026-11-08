// Name: FUN_004811d0
// Address: 004811d0
// Address Range: [[004811d0, 00481233]]
// Convention: unknown
// Signature: void FUN_004811d0(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004811d0(int *param_1,int param_2,int param_3)

{
  if (param_2 < param_3) {
    if ((param_2 < 0) || (*param_1 <= param_3)) {
      _DAT_01d046a0 = "..\\shape\\edittool.cpp";
      _DAT_01d046a4 = 0xc2a;
      FUN_004e4500("CStrList::sort - invalid range!");
    }
    FUN_005b78b8(param_1[2] + param_2 * 4,(param_3 - param_2) + 1,4,&LAB_004811b0);
  }
  return;
}
