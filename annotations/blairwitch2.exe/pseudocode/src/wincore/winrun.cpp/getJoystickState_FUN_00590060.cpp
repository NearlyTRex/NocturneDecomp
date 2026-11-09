// Name: wincore_winrun.cpp_getJoystickState_FUN_00590060
// Address: 00590060
// Address Range: [[00590060, 005901b5]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_getJoystickState_FUN_00590060(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_getJoystickState_FUN_00590060(void)

{
  uint local_50;
  uint local_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_38;
  uint uStack_30;
  joyinfo_tag local_1c;
  
  if (_DAT_01c38b04 != 0) {
    if (_DAT_026656bc == (code *)0x0) {
      joyGetPos(0,&local_1c);
      _DAT_01c38b00 = local_1c.wButtons;
      _DAT_01c38af0 = local_1c.wXpos;
      _DAT_01c38af4 = local_1c.wYpos;
      _DAT_01c38afc = local_1c.wZpos;
      return;
    }
    local_4c = 0x83;
    local_50 = 0x34;
    if (_DAT_01c38b14 != 0) {
      local_4c = 0xc3;
    }
    if (_DAT_01c38b0c != 0) {
      local_4c = local_4c | 4;
    }
    if (_DAT_01c38b08 != 0) {
      local_4c = local_4c | 8;
    }
    (*_DAT_026656bc)(0,&local_50);
    _DAT_01c38b00 = uStack_38;
    _DAT_01c38af0 = local_50;
    _DAT_01c38af4 = local_4c;
    _DAT_01c38af8 = uStack_44;
    _DAT_01c38afc = uStack_48;
    if (_DAT_01c38b14 != 0) {
      if (uStack_30 < 18000) {
        if (uStack_30 == 0) {
          _DAT_01c38b18 = 1;
          return;
        }
        if (uStack_30 == 9000) {
          _DAT_01c38b18 = 4;
          return;
        }
      }
      else {
        if (uStack_30 < 0x4651) {
          _DAT_01c38b18 = 2;
          return;
        }
        if (26999 < uStack_30) {
          if (27000 < uStack_30) {
            _DAT_01c38b18 = 0;
            return;
          }
          _DAT_01c38b18 = 3;
          return;
        }
      }
      _DAT_01c38b18 = 0;
    }
  }
  return;
}
