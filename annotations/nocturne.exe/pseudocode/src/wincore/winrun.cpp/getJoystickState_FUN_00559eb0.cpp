// Name: wincore_winrun.cpp_getJoystickState_FUN_00559eb0
// Address: 00559eb0
// Address Range: [[00559eb0, 0055a005]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_getJoystickState_FUN_00559eb0(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_getJoystickState_FUN_00559eb0(void)

{
  DWORD local_50;
  uint local_4c;
  DWORD DStack_48;
  DWORD DStack_44;
  DWORD DStack_38;
  uint uStack_30;
  joyinfo_tag local_1c;
  
  if (g_INT_01c0390c != 0) {
    if (g_PTR_02de3114 == (byte *)0x0) {
      joyGetPos(0,&local_1c);
      g_DWORD_01c03908 = local_1c.wButtons;
      g_DWORD_01c038f8 = local_1c.wXpos;
      g_DWORD_01c038fc = local_1c.wYpos;
      g_DWORD_01c03904 = local_1c.wZpos;
      return;
    }
    local_4c = 0x83;
    local_50 = 0x34;
    if (g_INT_01c0391c != 0) {
      local_4c = 0xc3;
    }
    if (g_INT_01c03914 != 0) {
      local_4c = local_4c | 4;
    }
    if (g_INT_01c03910 != 0) {
      local_4c = local_4c | 8;
    }
    (*(code *)g_PTR_02de3114)(0,&local_50);
    g_DWORD_01c03908 = DStack_38;
    g_DWORD_01c038f8 = local_50;
    g_DWORD_01c038fc = local_4c;
    g_DWORD_01c03900 = DStack_44;
    g_DWORD_01c03904 = DStack_48;
    if (g_INT_01c0391c != 0) {
      if (uStack_30 < 18000) {
        if (uStack_30 == 0) {
          g_INT_01c03920 = 1;
          return;
        }
        if (uStack_30 == 9000) {
          g_INT_01c03920 = 4;
          return;
        }
      }
      else {
        if (uStack_30 < 0x4651) {
          g_INT_01c03920 = 2;
          return;
        }
        if (26999 < uStack_30) {
          if (27000 < uStack_30) {
            g_INT_01c03920 = 0;
            return;
          }
          g_INT_01c03920 = 3;
          return;
        }
      }
      g_INT_01c03920 = 0;
    }
  }
  return;
}
