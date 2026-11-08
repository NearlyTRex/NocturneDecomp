// Name: FUN_0049c160
// Address: 0049c160
// Address Range: [[0049c160, 0049c226]]
// Convention: unknown
// Signature: void FUN_0049c160(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049c160(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0x1196;
    FUN_005030e0("CPickList::setItemHotKey - invalid index");
  }
  if (param_1[0x6d] <= param_2) {
    if (param_3 == -1) {
      return;
    }
    iVar1 = FUN_005c10d0(param_1[0x6e],*param_1 << 2);
    param_1[0x6e] = iVar1;
    if (iVar1 == 0) {
      _DAT_01d1d400 = "..\\shape\\edittool.cpp";
      _DAT_01d1d404 = 0x119e;
      FUN_005030e0("Out of memory");
    }
    while (param_1[0x6d] < *param_1) {
      *(uint *)(param_1[0x6e] + param_1[0x6d] * 4) = 0xffffffff;
      param_1[0x6d] = param_1[0x6d] + 1;
    }
  }
  *(int *)(param_1[0x6e] + param_2 * 4) = param_3;
  return;
}
