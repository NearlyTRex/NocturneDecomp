// Name: core_netgame.cpp_removeChatOut_FUN_0050b070
// Address: 0050b070
// Address Range: [[0050b070, 0050b101]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_removeChatOut_FUN_0050b070(int index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_removeChatOut_FUN_0050b070(int index)

{
  if ((index < 0) || (_DAT_01d51050 <= index)) {
    _DAT_01d046a0 = "..\\core\\netgame.cpp";
    _DAT_01d046a4 = 0x107;
    core_main_c_FUN_004e4500("removeChatOut - invalid index");
  }
  _DAT_01d51050 = _DAT_01d51050 + -1;
  memmove
            (&DAT_01d51054 + index * 0x114,&DAT_01d51054 + (index + 1) * 0x114,
             (_DAT_01d51050 - index) * 0x114);
  return;
}
