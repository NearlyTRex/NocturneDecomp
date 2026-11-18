// Name: sound_sndmain.cpp_getNextActiveSfx_FUN_00556ec0
// Address: 00556ec0
// Address Range: [[00556ec0, 00556f0b]]
// Convention: __cdecl
// Signature: uint __cdecl sound_sndmain_cpp_getNextActiveSfx_FUN_00556ec0(uint current_sfx_handle)

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_getNextActiveSfx_FUN_00556ec0(uint current_sfx_handle)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (current_sfx_handle & 0x3f) + 1;
  if (uVar3 < 0x40) {
    iVar2 = uVar3 * 0x11c;
    do {
      if ((*(int *)((int)g_CSfxSlot_ARRAY_02ce721c[0].distance_to_speakers + iVar2 + -8) != 0) &&
         (iVar1 = *(int *)((int)g_CSfxSlot_ARRAY_02ce721c[0].distance_to_speakers + iVar2 + -0xc),
         iVar1 != 0)) {
        return iVar1 << 6 | uVar3;
      }
      iVar2 = iVar2 + 0x11c;
      uVar3 = uVar3 + 1;
    } while (iVar2 < 0x4700);
  }
  return 0;
}
