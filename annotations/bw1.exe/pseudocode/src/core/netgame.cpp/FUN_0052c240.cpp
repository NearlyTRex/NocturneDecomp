// Name: FUN_0052c240
// Address: 0052c240
// Address Range: [[0052c240, 0052c2d1]]
// Convention: unknown
// Signature: void FUN_0052c240(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052c240(int param_1)

{
  if ((param_1 < 0) || (_DAT_01d6dfb8 <= param_1)) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0x107;
    FUN_005030e0("removeChatOut - invalid index");
  }
  _DAT_01d6dfb8 = _DAT_01d6dfb8 + -1;
  FUN_005c25d0(&DAT_01d6dfbc + param_1 * 0x114,&DAT_01d6dfbc + (param_1 + 1) * 0x114,
               (_DAT_01d6dfb8 - param_1) * 0x114);
  return;
}
