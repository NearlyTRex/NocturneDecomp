// Name: core_netgame.cpp_removeChatOut_FUN_0052c240
// Address: 0052c240
// Address Range: [[0052c240, 0052c2d1]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_removeChatOut_FUN_0052c240(int index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_removeChatOut_FUN_0052c240(int index)

{
  if ((index < 0) || (_DAT_01d6dfb8 <= index)) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0x107;
    core_main_c_FUN_005030e0("removeChatOut - invalid index");
  }
  _DAT_01d6dfb8 = _DAT_01d6dfb8 + -1;
  memmove
            (&DAT_01d6dfbc + index * 0x114,&DAT_01d6dfbc + (index + 1) * 0x114,
             (_DAT_01d6dfb8 - index) * 0x114);
  return;
}
