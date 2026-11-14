// Name: sound_sndmain.cpp_getFirstActiveSfx_FUN_005512f0
// Address: 005512f0
// Address Range: [[005512f0, 00551322]]
// Convention: __cdecl
// Signature: uint __cdecl sound_sndmain_cpp_getFirstActiveSfx_FUN_005512f0(void)

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_getFirstActiveSfx_FUN_005512f0(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0;
  while ((*(int *)(&DAT_0263cf84 + iVar1) == 0 || (*(int *)(&DAT_0263cf80 + iVar1) == 0))) {
    iVar1 = iVar1 + 0x11c;
    uVar2 = uVar2 + 1;
    if (0x46ff < iVar1) {
      return 0;
    }
  }
  return *(int *)(&DAT_0263cf80 + iVar1) << 6 | uVar2;
}
