// Name: FUN_004839d0
// Address: 004839d0
// Address Range: [[004839d0, 00483a9d]]
// Convention: unknown
// Signature: void FUN_004839d0(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004839d0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0x10eb;
    FUN_004e4500("CPickList::enableItem - invalid index");
  }
  if (param_1[0x6b] <= param_2) {
    if (param_3 != 0) {
      return;
    }
    iVar1 = FUN_005b8ce0(param_1[0x6c],*param_1 << 2);
    param_1[0x6c] = iVar1;
    if (iVar1 == 0) {
      _DAT_01d046a0 = "..\\shape\\edittool.cpp";
      _DAT_01d046a4 = 0x10f3;
      FUN_004e4500("Out of memory");
    }
    while (param_1[0x6b] < *param_1) {
      *(uint *)(param_1[0x6c] + param_1[0x6b] * 4) = 1;
      param_1[0x6b] = param_1[0x6b] + 1;
    }
  }
  *(uint *)(param_1[0x6c] + param_2 * 4) = (uint)(param_3 != 0);
  return;
}
