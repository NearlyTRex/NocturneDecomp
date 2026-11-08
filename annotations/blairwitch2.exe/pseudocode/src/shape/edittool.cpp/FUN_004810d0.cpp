// Name: FUN_004810d0
// Address: 004810d0
// Address Range: [[004810d0, 00481181]]
// Convention: unknown
// Signature: void FUN_004810d0(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004810d0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (((param_2 < 0) || (*param_1 <= param_3)) || (param_3 < param_2)) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xbfb;
    FUN_004e4500("CStrList::remove - invalid range");
  }
  if (param_2 <= param_3) {
    iVar1 = param_2 * 4;
    do {
      if (*(int *)(param_1[2] + iVar1) != 0) {
        FUN_005b86a0(*(int *)(param_1[2] + iVar1));
      }
      iVar1 = iVar1 + 4;
    } while (iVar1 <= param_3 * 4);
  }
  iVar1 = *param_1 - ((param_3 - param_2) + 1);
  *param_1 = iVar1;
  FUN_005ba1f0(param_1[2] + param_2 * 4,param_3 * 4 + 4 + param_1[2],(iVar1 - param_2) * 4);
  return;
}
