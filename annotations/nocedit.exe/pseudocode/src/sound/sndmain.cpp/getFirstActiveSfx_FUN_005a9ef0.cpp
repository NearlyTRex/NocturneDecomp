// Name: sound_sndmain.cpp_getFirstActiveSfx_FUN_005a9ef0
// Address: 005a9ef0
// Address Range: [[005a9ef0, 005a9f22]]
// Convention: __cdecl
// Signature: uint sound_sndmain.cpp_getFirstActiveSfx_FUN_005a9ef0(void)

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_getFirstActiveSfx_FUN_005a9ef0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  uVar3 = 0;
  while ((*(int *)((int)g_SfxSlots[0].distance_to_speakers + iVar2 + -8) == 0 ||
         (iVar1 = *(int *)((int)g_SfxSlots[0].distance_to_speakers + iVar2 + -0xc), iVar1 == 0))) {
    iVar2 = iVar2 + 0x128;
    uVar3 = uVar3 + 1;
    if (0x49ff < iVar2) {
      return 0;
    }
  }
  return iVar1 << 6 | uVar3;
}
