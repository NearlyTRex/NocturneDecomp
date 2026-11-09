// Name: wincore_winrun.cpp_initJoystick_FUN_0058ffd0
// Address: 0058ffd0
// Address Range: [[0058ffd0, 0059003f] [00590041, 0059005d]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_initJoystick_FUN_0058ffd0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_initJoystick_FUN_0058ffd0(void)

{
  MMRESULT MVar1;
  tagJOYCAPSA local_194;
  
  _DAT_026656c0 = GetModuleHandleA("winmm.dll");
  if (_DAT_026656c0 != (HMODULE)0x0) {
    _DAT_026656bc = GetProcAddress(_DAT_026656c0,"joyGetPosEx");
  }
  MVar1 = joyGetDevCapsA(0,&local_194,0x194);
  if (MVar1 == 0) {
    _DAT_01c38b14 = (uint)(((byte)local_194.wCaps & 0x10) != 0);
    _DAT_006141d0 = local_194.wMaxButtons;
    if (8 < (int)local_194.wMaxButtons) {
      _DAT_006141d0 = 8;
      return;
    }
  }
  else {
    _DAT_01c38b04 = 0;
  }
  return;
}
