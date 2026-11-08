// Name: FUN_0058ffd0
// Address: 0058ffd0
// Address Range: [[0058ffd0, 0059003f] [00590041, 0059005d]]
// Convention: unknown
// Signature: MMRESULT FUN_0058ffd0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

MMRESULT FUN_0058ffd0(void)

{
  UINT UVar1;
  tagJOYCAPSA local_194;
  
  _DAT_026656c0 = GetModuleHandleA("winmm.dll");
  if (_DAT_026656c0 != (HMODULE)0x0) {
    _DAT_026656bc = GetProcAddress(_DAT_026656c0,"joyGetPosEx");
  }
  UVar1 = joyGetDevCapsA(0,&local_194,0x194);
  if (UVar1 == 0) {
    _DAT_01c38b14 = (uint)(((byte)local_194.wCaps & 0x10) != 0);
    _DAT_006141d0 = local_194.wMaxButtons;
    UVar1 = local_194.wMaxButtons;
    if (8 < (int)local_194.wMaxButtons) {
      _DAT_006141d0 = 8;
      return local_194.wMaxButtons;
    }
  }
  else {
    _DAT_01c38b04 = 0;
  }
  return UVar1;
}
