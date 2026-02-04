// Name: wincore_winrun.cpp_initJoystick_FUN_005f4310
// Address: 005f4310
// Address Range: [[005f4310, 005f437f] [005f4381, 005f439d]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_initJoystick_FUN_005f4310(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_initJoystick_FUN_005f4310(void)

{
  MMRESULT MVar1;
  tagJOYCAPSA tStack_194;
  
  g_WinmmDll = (*g_GetModuleHandleAFunc)("winmm.dll");
  if (g_WinmmDll != (HMODULE)0x0) {
    g_joyGetPosEx =
         (JOY_GET_POS_EX_FUNC *)(*g_GetProcAddressFunc)(g_WinmmDll,"joyGetPosEx");
  }
  MVar1 = (*g_joyGetDevCapsAFunc)(0,&tStack_194,0x194);
  if (MVar1 == 0) {
    g_JoystickHasPOV = (int)(((byte)tStack_194.wCaps & 0x10) != 0);
    g_JoystickNumButtons = tStack_194.wMaxButtons;
    if (8 < (int)tStack_194.wMaxButtons) {
      g_JoystickNumButtons = 8;
      return;
    }
  }
  else {
    g_JoystickPresent = 0;
  }
  return;
}
