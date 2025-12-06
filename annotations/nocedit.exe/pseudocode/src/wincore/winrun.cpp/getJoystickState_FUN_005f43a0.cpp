// Name: wincore_winrun.cpp_getJoystickState_FUN_005f43a0
// Address: 005f43a0
// Address Range: [[005f43a0, 005f44f5]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_getJoystickState_FUN_005f43a0(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_getJoystickState_FUN_005f43a0(void)

{
  BADSPACEBASE *in_ESP;
  DWORD local_50;
  uint local_4c;
  DWORD DStack_48;
  DWORD DStack_44;
  DWORD DStack_38;
  uint uStack_30;
  joyinfo_tag local_1c;
  
  if (g_JoystickPresent != 0) {
    if (g_joyGetPosEx == (FARPROC)0x0) {
      (*joyGetPos)(0,&local_1c);
      g_JoyButtons = local_1c.wButtons;
      g_JoyXPos = local_1c.wXpos;
      g_JoyYPos = local_1c.wYpos;
      g_JoyZPos = local_1c.wZpos;
      return;
    }
    local_4c = 0x83;
    local_50 = 0x34;
    if (g_JoystickHasPOV != 0) {
      local_4c = 0xc3;
    }
    if (g_JoyWantRAxis != 0) {
      local_4c = local_4c | 4;
    }
    if (g_JoyWantUAxis != 0) {
      local_4c = local_4c | 8;
    }
    (*g_joyGetPosEx)(0,&local_50);
    g_JoyButtons = DStack_38;
    g_JoyXPos = local_50;
    g_JoyYPos = local_4c;
    g_JoyRPos = DStack_44;
    g_JoyZPos = DStack_48;
    if (g_JoystickHasPOV != 0) {
      if (uStack_30 < 18000) {
        if (uStack_30 == 0) {
          g_JoyPOVDirection = 1;
          return;
        }
        if (uStack_30 == 9000) {
          g_JoyPOVDirection = 4;
          return;
        }
      }
      else {
        if (uStack_30 < 0x4651) {
          g_JoyPOVDirection = 2;
          return;
        }
        if (26999 < uStack_30) {
          if (27000 < uStack_30) {
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
