// Name: wincore_winrun.cpp_initJoystick_FUN_005b3aa0
// Address: 005b3aa0
// Address Range: [[005b3aa0, 005b3b0f] [005b3b11, 005b3b2d]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_initJoystick_FUN_005b3aa0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_initJoystick_FUN_005b3aa0(void)

{
  MMRESULT MVar1;
  tagJOYCAPSA local_194;
  
  _DAT_02c9cf10 = GetModuleHandleA("winmm.dll");
  if (_DAT_02c9cf10 != (HMODULE)0x0) {
    _DAT_02c9cf0c = GetProcAddress(_DAT_02c9cf10,"joyGetPosEx");
  }
  MVar1 = joyGetDevCapsA(0,&local_194,0x194);
  if (MVar1 == 0) {
    _DAT_01c51cd4 = (uint)(((byte)local_194.wCaps & 0x10) != 0);
    _DAT_0061b4b0 = local_194.wMaxButtons;
    if (8 < (int)local_194.wMaxButtons) {
      _DAT_0061b4b0 = 8;
      return;
    }
  }
  else {
    _DAT_01c51cc4 = 0;
  }
  return;
}
