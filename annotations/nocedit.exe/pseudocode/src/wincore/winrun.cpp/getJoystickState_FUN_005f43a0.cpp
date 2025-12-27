// Name: wincore_winrun.cpp_getJoystickState_FUN_005f43a0
// Address: 005f43a0
// Address Range: [[005f43a0, 005f44f5]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_getJoystickState_FUN_005f43a0(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_getJoystickState_FUN_005f43a0(void)

{
  DWORD unaff_EBX;
  BADSPACEBASE *in_ESP;
  DWORD unaff_ESI;
  DWORD unaff_EDI;
  JOYINFOEX local_50;
  joyinfo_tag local_1c;
  
  if (g_JoystickPresent != 0) {
    if (g_joyGetPosEx == (joyGetPosEx *)0x0) {
      (*joyGetPos)(0,&local_1c);
      g_JoyButtons = unaff_EBX;
      g_JoyXPos = local_1c.wButtons;
      g_JoyYPos = unaff_EDI;
      g_JoyZPos = unaff_ESI;
      return;
    }
    local_50.dwFlags = 0x83;
    local_50.dwSize = 0x34;
    if (g_JoystickHasPOV != 0) {
      local_50.dwFlags = 0xc3;
    }
    if (g_JoyWantRAxis != 0) {
      local_50.dwFlags = local_50.dwFlags | 4;
    }
    if (g_JoyWantUAxis != 0) {
      local_50.dwFlags = local_50.dwFlags | 8;
    }
    (*g_joyGetPosEx)(0,&local_50);
    g_JoyButtons = local_50.dwReserved1;
    g_JoyXPos = local_50.dwRpos;
    g_JoyYPos = local_50.dwUpos;
    g_JoyRPos = local_50.dwButtons;
    g_JoyZPos = local_50.dwVpos;
    if (g_JoystickHasPOV != 0) {
      if (local_1c.wXpos < 18000) {
        if (local_1c.wXpos == 0) {
          g_JoyPOVDirection = 1;
          return;
        }
        if (local_1c.wXpos == 9000) {
          g_JoyPOVDirection = 4;
          return;
        }
      }
      else {
        if (local_1c.wXpos < 0x4651) {
          g_JoyPOVDirection = 2;
          return;
        }
        if (26999 < local_1c.wXpos) {
          if (27000 < local_1c.wXpos) {
            g_JoyPOVDirection = 0;
            return;
          }
          g_JoyPOVDirection = 3;
          return;
        }
      }
      g_JoyPOVDirection = 0;
    }
  }
  return;
}
