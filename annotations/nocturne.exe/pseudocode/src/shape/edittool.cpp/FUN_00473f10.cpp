// Name: FUN_00473f10
// Address: 00473f10
// Address Range: [[00473f10, 00473fc1]]
// Convention: unknown
// Signature: void FUN_00473f10(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00473f10(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (((param_2 < 0) || (*param_1 <= param_3)) || (param_3 < param_2)) {
    _DAT_01cc4800 = "..\\shape\\edittool.cpp";
    _DAT_01cc4804 = 0xa03;
    FUN_004c8440("CStrList::remove - invalid range");
  }
  if (param_2 <= param_3) {
    iVar1 = param_2 * 4;
    do {
      if (*(int *)(param_1[2] + iVar1) != 0) {
        FUN_005638d0(*(int *)(param_1[2] + iVar1));
      }
      iVar1 = iVar1 + 4;
    } while (iVar1 <= param_3 * 4);
  }
  iVar1 = *param_1 - ((param_3 - param_2) + 1);
  *param_1 = iVar1;
  FUN_00566170(param_1[2] + param_2 * 4,param_3 * 4 + 4 + param_1[2],(iVar1 - param_2) * 4);
  return;
}
