// Name: sound_sndmain.cpp_FUN_00527520
// Address: 00527520
// Address Range: [[00527520, 00527566]]
// Convention: __cdecl
// Signature: uint __cdecl sound_sndmain_cpp_FUN_00527520(uint current_sfx_handle)

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_FUN_00527520(uint current_sfx_handle)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (current_sfx_handle & 0x3f) + 1;
  if (uVar3 < 0x40) {
    iVar2 = uVar3 * 0x120;
    do {
      if ((*(int *)((int)g_CSfxSlot_ARRAY_02dbd374[0].distance_to_speakers + iVar2 + -8) != 0) &&
         (iVar1 = *(int *)((int)g_CSfxSlot_ARRAY_02dbd374[0].distance_to_speakers + iVar2 + -0xc),
         iVar1 != 0)) {
        return iVar1 << 6 | uVar3;
      }
      iVar2 = iVar2 + 0x120;
      uVar3 = uVar3 + 1;
    } while (iVar2 < 0x4800);
  }
  return 0;
}
