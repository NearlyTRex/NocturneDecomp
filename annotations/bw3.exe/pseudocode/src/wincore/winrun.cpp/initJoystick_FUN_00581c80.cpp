// Name: wincore_winrun.cpp_initJoystick_FUN_00581c80
// Address: 00581c80
// Address Range: [[00581c80, 00581cef] [00581cf1, 00581d0d]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_initJoystick_FUN_00581c80(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_initJoystick_FUN_00581c80(void)

{
  MMRESULT MVar1;
  tagJOYCAPSA local_194;
  
  _DAT_02d22c20 = GetModuleHandleA("winmm.dll");
  if (_DAT_02d22c20 != (HMODULE)0x0) {
    _DAT_02d22c1c = GetProcAddress(_DAT_02d22c20,"joyGetPosEx");
  }
  MVar1 = joyGetDevCapsA(0,&local_194,0x194);
  if (MVar1 == 0) {
    _DAT_01c6e274 = (uint)(((byte)local_194.wCaps & 0x10) != 0);
    _DAT_005fba30 = local_194.wMaxButtons;
    if (8 < (int)local_194.wMaxButtons) {
      _DAT_005fba30 = 8;
      return;
    }
  }
  else {
    _DAT_01c6e264 = 0;
  }
  return;
}
