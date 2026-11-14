// Name: sound_sndmain.cpp_getFirstActiveSfx_FUN_00573d20
// Address: 00573d20
// Address Range: [[00573d20, 00573d52]]
// Convention: __cdecl
// Signature: uint __cdecl sound_sndmain_cpp_getFirstActiveSfx_FUN_00573d20(void)

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_getFirstActiveSfx_FUN_00573d20(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0;
  while ((*(int *)(&DAT_02c74654 + iVar1) == 0 || (*(int *)(&DAT_02c74650 + iVar1) == 0))) {
    iVar1 = iVar1 + 0x11c;
    uVar2 = uVar2 + 1;
    if (0x46ff < iVar1) {
      return 0;
    }
  }
  return *(int *)(&DAT_02c74650 + iVar1) << 6 | uVar2;
}
