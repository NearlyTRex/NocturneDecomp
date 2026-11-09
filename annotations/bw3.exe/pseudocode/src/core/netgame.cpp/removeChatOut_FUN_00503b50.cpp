// Name: core_netgame.cpp_removeChatOut_FUN_00503b50
// Address: 00503b50
// Address Range: [[00503b50, 00503be1]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_removeChatOut_FUN_00503b50(int index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_removeChatOut_FUN_00503b50(int index)

{
  if ((index < 0) || (_DAT_01dc2690 <= index)) {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0x107;
    core_main_c_FUN_004e4330("removeChatOut - invalid index");
  }
  _DAT_01dc2690 = _DAT_01dc2690 + -1;
  memmove
            (&DAT_01dc2694 + index * 0x114,&DAT_01dc2694 + (index + 1) * 0x114,
             (_DAT_01dc2690 - index) * 0x114);
  return;
}
