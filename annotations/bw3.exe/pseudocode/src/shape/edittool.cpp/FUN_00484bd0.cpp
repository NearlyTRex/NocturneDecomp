// Name: FUN_00484bd0
// Address: 00484bd0
// Address Range: [[00484bd0, 00484c9d]]
// Convention: unknown
// Signature: void FUN_00484bd0(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484bd0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0x116f;
    FUN_004e4330("CPickList::enableItem - invalid index");
  }
  if (param_1[0x6b] <= param_2) {
    if (param_3 != 0) {
      return;
    }
    iVar1 = FUN_005a3e50(param_1[0x6c],*param_1 << 2);
    param_1[0x6c] = iVar1;
    if (iVar1 == 0) {
      _DAT_01d71de0 = "..\\shape\\edittool.cpp";
      _DAT_01d71de4 = 0x1177;
      FUN_004e4330("Out of memory");
    }
    while (param_1[0x6b] < *param_1) {
      *(uint *)(param_1[0x6c] + param_1[0x6b] * 4) = 1;
      param_1[0x6b] = param_1[0x6b] + 1;
    }
  }
  *(uint *)(param_1[0x6c] + param_2 * 4) = (uint)(param_3 != 0);
  return;
}
