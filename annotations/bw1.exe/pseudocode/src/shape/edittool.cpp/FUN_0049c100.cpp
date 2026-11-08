// Name: FUN_0049c100
// Address: 0049c100
// Address Range: [[0049c100, 0049c15b]]
// Convention: unknown
// Signature: bool FUN_0049c100(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0049c100(int *param_1,int param_2)

{
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0x1185;
    FUN_005030e0("CPickList::isItemEnabled - invalid index");
  }
  if (param_1[0x6b] <= param_2) {
    return true;
  }
  return *(int *)(param_1[0x6c] + param_2 * 4) != 0;
}
