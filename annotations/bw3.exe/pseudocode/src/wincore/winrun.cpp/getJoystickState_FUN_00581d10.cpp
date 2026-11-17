// Name: wincore_winrun.cpp_getJoystickState_FUN_00581d10
// Address: 00581d10
// Address Range: [[00581d10, 00581e65]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_getJoystickState_FUN_00581d10(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_getJoystickState_FUN_00581d10(void)

{
  int local_50;
  uint local_4c;
  int iStack_48;
  DWORD DStack_44;
  DWORD DStack_38;
  uint uStack_30;
  joyinfo_tag local_1c;
  
  if (g_INT_01c6e264 != 0) {
    if (g_PTR_02d22c1c == (byte *)0x0) {
      joyGetPos(0,&local_1c);
      g_DWORD_01c6e260 = local_1c.wButtons;
      g_INT_01c6e250 = local_1c.wXpos;
      g_INT_01c6e254 = local_1c.wYpos;
      g_INT_01c6e25c = local_1c.wZpos;
      return;
    }
    local_4c = 0x83;
    local_50 = 0x34;
    if (g_INT_01c6e274 != 0) {
      local_4c = 0xc3;
    }
    if (g_INT_01c6e26c != 0) {
      local_4c = local_4c | 4;
    }
    if (g_INT_01c6e268 != 0) {
      local_4c = local_4c | 8;
    }
    (*(code *)g_PTR_02d22c1c)(0,&local_50);
    g_DWORD_01c6e260 = DStack_38;
    g_INT_01c6e250 = local_50;
    g_INT_01c6e254 = local_4c;
    g_DWORD_01c6e258 = DStack_44;
    g_INT_01c6e25c = iStack_48;
    if (g_INT_01c6e274 != 0) {
      if (uStack_30 < 18000) {
        if (uStack_30 == 0) {
          g_INT_01c6e278 = 1;
          return;
        }
        if (uStack_30 == 9000) {
          g_INT_01c6e278 = 4;
          return;
        }
      }
      else {
        if (uStack_30 < 0x4651) {
          g_INT_01c6e278 = 2;
          return;
        }
        if (26999 < uStack_30) {
          if (27000 < uStack_30) {
            g_INT_01c6e278 = 0;
            return;
          }
          g_INT_01c6e278 = 3;
          return;
        }
      }
      g_INT_01c6e278 = 0;
    }
  }
  return;
}
