// Name: sound_sndmain.cpp_getActiveSfxCount_FUN_0056df00
// Address: 0056df00
// Address Range: [[0056df00, 0056df5f]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getActiveSfxCount_FUN_0056df00(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_getActiveSfxCount_FUN_0056df00(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_02c807ec < 1) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x249;
    core_main_c_FUN_005030e0("SfxSlot::kill - must be locked!");
  }
  iVar3 = 0;
  iVar2 = 0;
  iVar1 = _DAT_02c74650;
  while( true ) {
    if (iVar1 == 0) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    if (0x46ff < iVar2 + 0x11c) break;
    iVar1 = *(int *)(&DAT_02c7476c + iVar2);
    iVar2 = iVar2 + 0x11c;
  }
  return -1;
}
