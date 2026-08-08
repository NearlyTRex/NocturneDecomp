// Name: wincore_winrun.cpp_initJoystick_FUN_00559e20
// Address: 00559e20
// Address Range: [[00559e20, 00559e8f] [00559e91, 00559ead]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_initJoystick_FUN_00559e20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_initJoystick_FUN_00559e20(void)

{
  MMRESULT MVar1;
  tagJOYCAPSA local_194;
  
  _DAT_02de3118 = GetModuleHandleA("winmm.dll");
  if (_DAT_02de3118 != (HMODULE)0x0) {
    _DAT_02de3114 = GetProcAddress(_DAT_02de3118,"joyGetPosEx");
  }
  MVar1 = joyGetDevCapsA(0,&local_194,0x194);
  if (MVar1 == 0) {
    _DAT_01c0391c = (uint)(((byte)local_194.wCaps & 0x10) != 0);
    INT_005b7634 = local_194.wMaxButtons;
    if (8 < (int)local_194.wMaxButtons) {
      INT_005b7634 = 8;
      return;
    }
  }
  else {
    _DAT_01c0390c = 0;
  }
  return;
}
