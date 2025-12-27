// Name: wincore_winrun.cpp_initJoystick_FUN_005f4310
// Address: 005f4310
// Address Range: [[005f4310, 005f437f] [005f4381, 005f439d]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_initJoystick_FUN_005f4310(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_initJoystick_FUN_005f4310(void)

{
  MMRESULT MVar1;
  BADSPACEBASE *in_ESP;
  byte bStack_110;
  int iStack_104;
  
  g_WinmmDll = (*GetModuleHandleA)("winmm.dll");
  if (g_WinmmDll != (HMODULE)0x0) {
    g_joyGetPosEx = (joyGetPosEx *)(*GetProcAddress)(g_WinmmDll,"joyGetPosEx");
  }
  MVar1 = (*joyGetDevCapsA)(0,(LPJOYCAPSA)&stack0xfffffe80,0x194);
  if (MVar1 == 0) {
    g_JoystickHasPOV = (int)((bStack_110 & 0x10) != 0);
    g_JoystickNumButtons = iStack_104;
    if (8 < iStack_104) {
      g_JoystickNumButtons = 8;
      return;
    }
  }
  else {
    g_JoystickPresent = 0;
  }
  return;
}
