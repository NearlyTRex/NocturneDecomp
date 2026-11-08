// Name: FUN_0049c230
// Address: 0049c230
// Address Range: [[0049c230, 0049c289]]
// Convention: unknown
// Signature: undefined4 FUN_0049c230(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0049c230(int *param_1,int param_2)

{
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0x11af;
    FUN_005030e0("CPickList::getItemHotKey - invalid index");
  }
  if (param_1[0x6d] <= param_2) {
    return 0xffffffff;
  }
  return *(uint *)(param_1[0x6e] + param_2 * 4);
}
