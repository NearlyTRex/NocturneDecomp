// Name: sound_sndmain.cpp_getFirstActiveSfx_FUN_00573d20
// Address: 00573d20
// Address Range: [[00573d20, 00573d52]]
// Convention: __cdecl
// Signature: uint __cdecl sound_sndmain_cpp_getFirstActiveSfx_FUN_00573d20(void)

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_getFirstActiveSfx_FUN_00573d20(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  uVar3 = 0;
  while ((*(int *)((int)g_CSfxSlot_ARRAY_02c745ec[0].distance_to_speakers + iVar2 + -8) == 0 ||
         (iVar1 = *(int *)((int)g_CSfxSlot_ARRAY_02c745ec[0].distance_to_speakers + iVar2 + -0xc),
         iVar1 == 0))) {
    iVar2 = iVar2 + 0x11c;
    uVar3 = uVar3 + 1;
    if (0x46ff < iVar2) {
      return 0;
    }
  }
  return iVar1 << 6 | uVar3;
}
