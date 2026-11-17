// Name: wincore_winrun.cpp_initJoystick_FUN_0058ffd0
// Address: 0058ffd0
// Address Range: [[0058ffd0, 0059003f] [00590041, 0059005d]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_initJoystick_FUN_0058ffd0(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_initJoystick_FUN_0058ffd0(void)

{
  MMRESULT MVar1;
  tagJOYCAPSA local_194;
  
  g_WinmmDll = GetModuleHandleA("winmm.dll");
  if (g_WinmmDll != (HMODULE)0x0) {
    g_joyGetPosEx = GetProcAddress(g_WinmmDll,"joyGetPosEx");
  }
  MVar1 = joyGetDevCapsA(0,&local_194,0x194);
  if (MVar1 == 0) {
    g_JoystickHasPOV = (int)(((byte)local_194.wCaps & 0x10) != 0);
    g_JoystickNumButtons = local_194.wMaxButtons;
    if (8 < (int)local_194.wMaxButtons) {
      g_JoystickNumButtons = 8;
      return;
    }
  }
  else {
    g_JoystickPresent = 0;
  }
  return;
}
