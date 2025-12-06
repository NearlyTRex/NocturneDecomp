// Name: sound_sndmain.cpp_getNextActiveSfx_FUN_005a9f30
// Address: 005a9f30
// Address Range: [[005a9f30, 005a9f7b]]
// Convention: __cdecl
// Signature: uint sound_sndmain.cpp_getNextActiveSfx_FUN_005a9f30(uint current_sfx_handle)

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_getNextActiveSfx_FUN_005a9f30(uint current_sfx_handle)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (current_sfx_handle & 0x3f) + 1;
  if (uVar3 < 0x40) {
    iVar2 = uVar3 * 0x128;
    do {
      if ((*(int *)((int)g_SfxSlots[0].distance_to_speakers + iVar2 + -8) != 0) &&
         (iVar1 = *(int *)((int)g_SfxSlots[0].distance_to_speakers + iVar2 + -0xc), iVar1 != 0)) {
        return iVar1 << 6 | uVar3;
      }
      iVar2 = iVar2 + 0x128;
      uVar3 = uVar3 + 1;
    } while (iVar2 < 0x4a00);
  }
  return 0;
}
