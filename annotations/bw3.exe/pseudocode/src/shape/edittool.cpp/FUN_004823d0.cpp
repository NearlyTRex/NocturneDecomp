// Name: FUN_004823d0
// Address: 004823d0
// Address Range: [[004823d0, 00482433]]
// Convention: unknown
// Signature: void FUN_004823d0(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004823d0(int *param_1,int param_2,int param_3)

{
  if (param_2 < param_3) {
    if ((param_2 < 0) || (*param_1 <= param_3)) {
      _DAT_01d71de0 = "..\\shape\\edittool.cpp";
      _DAT_01d71de4 = 0xca6;
      FUN_004e4330("CStrList::sort - invalid range!");
    }
    FUN_005a29e8(param_1[2] + param_2 * 4,(param_3 - param_2) + 1,4,&LAB_004823b0);
  }
  return;
}
