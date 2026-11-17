// Name: wincore_winrun.cpp_getJoystickState_FUN_00590060
// Address: 00590060
// Address Range: [[00590060, 005901b5]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_getJoystickState_FUN_00590060(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_getJoystickState_FUN_00590060(void)

{
  int local_50;
  uint local_4c;
  int iStack_48;
  uint uStack_44;
  uint uStack_38;
  uint uStack_30;
  joyinfo_tag local_1c;
  
  if (g_INT_01c38b04 != 0) {
    if (g_PTR_026656bc == (byte *)0x0) {
      joyGetPos(0,&local_1c);
      _g_BYTE_01c38b00 = local_1c.wButtons;
      g_INT_01c38af0 = local_1c.wXpos;
      g_INT_01c38af4 = local_1c.wYpos;
      g_INT_01c38afc = local_1c.wZpos;
      return;
    }
    local_4c = 0x83;
    local_50 = 0x34;
    if (g_INT_01c38b14 != 0) {
      local_4c = 0xc3;
    }
    if (g_INT_01c38b0c != 0) {
      local_4c = local_4c | 4;
    }
    if (g_INT_01c38b08 != 0) {
      local_4c = local_4c | 8;
    }
    (*(code *)g_PTR_026656bc)(0,&local_50);
    _g_BYTE_01c38b00 = uStack_38;
    g_INT_01c38af0 = local_50;
    g_INT_01c38af4 = local_4c;
    _DAT_01c38af8 = uStack_44;
    g_INT_01c38afc = iStack_48;
    if (g_INT_01c38b14 != 0) {
      if (uStack_30 < 18000) {
        if (uStack_30 == 0) {
          g_INT_01c38b18 = 1;
          return;
        }
        if (uStack_30 == 9000) {
          g_INT_01c38b18 = 4;
          return;
        }
      }
      else {
        if (uStack_30 < 0x4651) {
          g_INT_01c38b18 = 2;
          return;
        }
        if (26999 < uStack_30) {
          if (27000 < uStack_30) {
            g_INT_01c38b18 = 0;
            return;
          }
          g_INT_01c38b18 = 3;
          return;
        }
      }
      g_INT_01c38b18 = 0;
    }
  }
  return;
}
