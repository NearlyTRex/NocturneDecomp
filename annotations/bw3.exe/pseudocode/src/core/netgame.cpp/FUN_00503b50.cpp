// Name: FUN_00503b50
// Address: 00503b50
// Address Range: [[00503b50, 00503be1]]
// Convention: unknown
// Signature: void FUN_00503b50(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00503b50(int param_1)

{
  if ((param_1 < 0) || (_DAT_01dc2690 <= param_1)) {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0x107;
    FUN_004e4330("removeChatOut - invalid index");
  }
  _DAT_01dc2690 = _DAT_01dc2690 + -1;
  FUN_005a54c0(&DAT_01dc2694 + param_1 * 0x114,&DAT_01dc2694 + (param_1 + 1) * 0x114,
               (_DAT_01dc2690 - param_1) * 0x114);
  return;
}
