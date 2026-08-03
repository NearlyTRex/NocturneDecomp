// Name: core_netgame.cpp_removeChatOut_FUN_004e9640
// Address: 004e9640
// Address Range: [[004e9640, 004e96d1]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_removeChatOut_FUN_004e9640(int index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_removeChatOut_FUN_004e9640(int index)

{
  if ((index < 0) || (_DAT_01d06610 <= index)) {
    g_CHAR_PTR_01cc4800 = "..\\core\\netgame.cpp";
    g_INT_01cc4804 = 0x107;
    core_main_c_FUN_004c8440("removeChatOut - invalid index");
  }
  _DAT_01d06610 = _DAT_01d06610 + -1;
  memmove
            (&DAT_01d06614 + index * 0x114,&DAT_01d06614 + (index + 1) * 0x114,
             (_DAT_01d06610 - index) * 0x114);
  return;
}
