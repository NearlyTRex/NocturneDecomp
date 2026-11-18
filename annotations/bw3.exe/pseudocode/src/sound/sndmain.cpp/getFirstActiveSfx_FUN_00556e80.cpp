// Name: sound_sndmain.cpp_getFirstActiveSfx_FUN_00556e80
// Address: 00556e80
// Address Range: [[00556e80, 00556eb2]]
// Convention: __cdecl
// Signature: uint __cdecl sound_sndmain_cpp_getFirstActiveSfx_FUN_00556e80(void)

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_getFirstActiveSfx_FUN_00556e80(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  uVar3 = 0;
  while ((*(int *)((int)g_CSfxSlot_ARRAY_02ce721c[0].distance_to_speakers + iVar2 + -8) == 0 ||
         (iVar1 = *(int *)((int)g_CSfxSlot_ARRAY_02ce721c[0].distance_to_speakers + iVar2 + -0xc),
         iVar1 == 0))) {
    iVar2 = iVar2 + 0x11c;
    uVar3 = uVar3 + 1;
    if (0x46ff < iVar2) {
      return 0;
    }
  }
  return iVar1 << 6 | uVar3;
}
