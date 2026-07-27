// Name: core_netgame.cpp_removeChatOut_FUN_004e9640
// Address: 004e9640
// Address Range: [[004e9640, 004e96d1]]
// Convention: unknown
// Signature: void core_netgame_cpp_removeChatOut_FUN_004e9640(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_netgame_cpp_removeChatOut_FUN_004e9640(int param_1)

{
  if ((param_1 < 0) || (_DAT_01d06610 <= param_1)) {
    PTR_01cc4800 = "..\\core\\netgame.cpp";
    INT_01cc4804 = 0x107;
    core_main_c_FUN_004c8440("removeChatOut - invalid index");
  }
  _DAT_01d06610 = _DAT_01d06610 + -1;
  memmove
            (&DAT_01d06614 + param_1 * 0x114,&DAT_01d06614 + (param_1 + 1) * 0x114,
             (_DAT_01d06610 - param_1) * 0x114);
  return;
}
