// Name: FUN_00483aa0
// Address: 00483aa0
// Address Range: [[00483aa0, 00483afb]]
// Convention: unknown
// Signature: bool FUN_00483aa0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00483aa0(int *param_1,int param_2)

{
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0x1104;
    FUN_004e4500("CPickList::isItemEnabled - invalid index");
  }
  if (param_1[0x6b] <= param_2) {
    return true;
  }
  return *(int *)(param_1[0x6c] + param_2 * 4) != 0;
}
