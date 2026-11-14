// Name: sound_sndmain.cpp_getActiveSfxCount_FUN_0054b890
// Address: 0054b890
// Address Range: [[0054b890, 0054b8ef]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getActiveSfxCount_FUN_0054b890(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_getActiveSfxCount_FUN_0054b890(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_0264901c < 1) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x249;
    core_main_c_FUN_004e4500("SfxSlot::kill - must be locked!");
  }
  iVar3 = 0;
  iVar2 = 0;
  iVar1 = _DAT_0263cf80;
  while( true ) {
    if (iVar1 == 0) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    if (0x46ff < iVar2 + 0x11c) break;
    iVar1 = *(int *)(&DAT_0263d09c + iVar2);
    iVar2 = iVar2 + 0x11c;
  }
  return -1;
}
