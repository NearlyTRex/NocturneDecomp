// Name: FUN_0049c030
// Address: 0049c030
// Address Range: [[0049c030, 0049c0fd]]
// Convention: unknown
// Signature: void FUN_0049c030(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049c030(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0x116c;
    FUN_005030e0("CPickList::enableItem - invalid index");
  }
  if (param_1[0x6b] <= param_2) {
    if (param_3 != 0) {
      return;
    }
    iVar1 = FUN_005c10d0(param_1[0x6c],*param_1 << 2);
    param_1[0x6c] = iVar1;
    if (iVar1 == 0) {
      _DAT_01d1d400 = "..\\shape\\edittool.cpp";
      _DAT_01d1d404 = 0x1174;
      FUN_005030e0("Out of memory");
    }
    while (param_1[0x6b] < *param_1) {
      *(uint *)(param_1[0x6c] + param_1[0x6b] * 4) = 1;
      param_1[0x6b] = param_1[0x6b] + 1;
    }
  }
  *(uint *)(param_1[0x6c] + param_2 * 4) = (uint)(param_3 != 0);
  return;
}
