// Name: FUN_0050b070
// Address: 0050b070
// Address Range: [[0050b070, 0050b101]]
// Convention: unknown
// Signature: void FUN_0050b070(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050b070(int param_1)

{
  if ((param_1 < 0) || (_DAT_01d51050 <= param_1)) {
    _DAT_01d046a0 = "..\\core\\netgame.cpp";
    _DAT_01d046a4 = 0x107;
    FUN_004e4500("removeChatOut - invalid index");
  }
  _DAT_01d51050 = _DAT_01d51050 + -1;
  FUN_005ba1f0(&DAT_01d51054 + param_1 * 0x114,&DAT_01d51054 + (param_1 + 1) * 0x114,
               (_DAT_01d51050 - param_1) * 0x114);
  return;
}
