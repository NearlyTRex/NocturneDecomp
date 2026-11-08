// Name: FUN_00483bd0
// Address: 00483bd0
// Address Range: [[00483bd0, 00483c29]]
// Convention: unknown
// Signature: undefined4 FUN_00483bd0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00483bd0(int *param_1,int param_2)

{
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0x112e;
    FUN_004e4500("CPickList::getItemHotKey - invalid index");
  }
  if (param_1[0x6d] <= param_2) {
    return 0xffffffff;
  }
  return *(uint *)(param_1[0x6e] + param_2 * 4);
}
