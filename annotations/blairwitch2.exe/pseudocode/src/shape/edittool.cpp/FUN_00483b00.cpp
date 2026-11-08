// Name: FUN_00483b00
// Address: 00483b00
// Address Range: [[00483b00, 00483bc6]]
// Convention: unknown
// Signature: void FUN_00483b00(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00483b00(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0x1115;
    FUN_004e4500("CPickList::setItemHotKey - invalid index");
  }
  if (param_1[0x6d] <= param_2) {
    if (param_3 == -1) {
      return;
    }
    iVar1 = FUN_005b8ce0(param_1[0x6e],*param_1 << 2);
    param_1[0x6e] = iVar1;
    if (iVar1 == 0) {
      _DAT_01d046a0 = "..\\shape\\edittool.cpp";
      _DAT_01d046a4 = 0x111d;
      FUN_004e4500("Out of memory");
    }
    while (param_1[0x6d] < *param_1) {
      *(uint *)(param_1[0x6e] + param_1[0x6d] * 4) = 0xffffffff;
      param_1[0x6d] = param_1[0x6d] + 1;
    }
  }
  *(int *)(param_1[0x6e] + param_2 * 4) = param_3;
  return;
}
