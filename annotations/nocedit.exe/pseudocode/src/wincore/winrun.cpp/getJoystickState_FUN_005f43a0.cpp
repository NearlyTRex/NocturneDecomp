// Name: wincore_winrun.cpp_getJoystickState_FUN_005f43a0
// Address: 005f43a0
// Address Range: [[005f43a0, 005f44f5]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_getJoystickState_FUN_005f43a0(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_getJoystickState_FUN_005f43a0(void)

{
  JOYINFOEX local_50;
  joyinfo_tag local_1c;
  
  if (g_JoystickPresent != 0) {
    if (g_joyGetPosEx == (JOY_GET_POS_EX_FUNC *)0x0) {
      (*g_joyGetPosFunc)(0,&local_1c);
      g_JoyButtons = local_1c.wButtons;
      g_JoyXPos = local_1c.wXpos;
      g_JoyYPos = local_1c.wYpos;
      g_JoyZPos = local_1c.wZpos;
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
    g_JoyButtons = local_50.dwButtons;
    g_JoyXPos = local_50.dwXpos;
    g_JoyYPos = local_50.dwYpos;
    g_JoyRPos = local_50.dwRpos;
    g_JoyZPos = local_50.dwZpos;
    if (g_JoystickHasPOV != 0) {
      if (local_50.dwPOV < 18000) {
        if (local_50.dwPOV == 0) {
          g_JoyPOVDirection = 1;
          return;
        }
        if (local_50.dwPOV == 9000) {
          g_JoyPOVDirection = 4;
          return;
        }
      }
      else {
        if (local_50.dwPOV < 0x4651) {
          g_JoyPOVDirection = 2;
          return;
        }
        if (26999 < local_50.dwPOV) {
          if (27000 < local_50.dwPOV) {
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
