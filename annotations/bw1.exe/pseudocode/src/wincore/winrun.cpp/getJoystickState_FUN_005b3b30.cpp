// Name: wincore_winrun.cpp_getJoystickState_FUN_005b3b30
// Address: 005b3b30
// Address Range: [[005b3b30, 005b3c85]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_getJoystickState_FUN_005b3b30(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_getJoystickState_FUN_005b3b30(void)

{
  uint local_50;
  uint local_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_38;
  uint uStack_30;
  joyinfo_tag local_1c;
  
  if (_DAT_01c51cc4 != 0) {
    if (_DAT_02c9cf0c == (code *)0x0) {
      joyGetPos(0,&local_1c);
      _DAT_01c51cc0 = local_1c.wButtons;
      _DAT_01c51cb0 = local_1c.wXpos;
      _DAT_01c51cb4 = local_1c.wYpos;
      _DAT_01c51cbc = local_1c.wZpos;
      return;
    }
    local_4c = 0x83;
    local_50 = 0x34;
    if (_DAT_01c51cd4 != 0) {
      local_4c = 0xc3;
    }
    if (_DAT_01c51ccc != 0) {
      local_4c = local_4c | 4;
    }
    if (_DAT_01c51cc8 != 0) {
      local_4c = local_4c | 8;
    }
    (*_DAT_02c9cf0c)(0,&local_50);
    _DAT_01c51cc0 = uStack_38;
    _DAT_01c51cb0 = local_50;
    _DAT_01c51cb4 = local_4c;
    _DAT_01c51cb8 = uStack_44;
    _DAT_01c51cbc = uStack_48;
    if (_DAT_01c51cd4 != 0) {
      if (uStack_30 < 18000) {
        if (uStack_30 == 0) {
          _DAT_01c51cd8 = 1;
          return;
        }
        if (uStack_30 == 9000) {
          _DAT_01c51cd8 = 4;
          return;
        }
      }
      else {
        if (uStack_30 < 0x4651) {
          _DAT_01c51cd8 = 2;
          return;
        }
        if (26999 < uStack_30) {
          if (27000 < uStack_30) {
            _DAT_01c51cd8 = 0;
            return;
          }
          _DAT_01c51cd8 = 3;
          return;
        }
      }
      _DAT_01c51cd8 = 0;
    }
  }
  return;
}
