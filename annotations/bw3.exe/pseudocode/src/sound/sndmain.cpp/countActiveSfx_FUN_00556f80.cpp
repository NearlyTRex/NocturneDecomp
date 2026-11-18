// Name: sound_sndmain.cpp_countActiveSfx_FUN_00556f80
// Address: 00556f80
// Address Range: [[00556f80, 00556fa5]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_countActiveSfx_FUN_00556f80(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_countActiveSfx_FUN_00556f80(void)

{
  CSfxSlot *pCVar1;
  int iVar2;
  
  pCVar1 = g_CSfxSlot_ARRAY_02ce721c;
  iVar2 = 0;
  do {
    if ((pCVar1->sample != (CSfxSample *)0x0) && (pCVar1->playback_state != 0)) {
      iVar2 = iVar2 + 1;
    }
    pCVar1 = pCVar1 + 1;
  } while (pCVar1 != g_CSfxSlot_ARRAY_02ce721c + sizeof(g_CSfxSlot_ARRAY_02ce721c) / sizeof(g_CSfxSlot_ARRAY_02ce721c[0]));
  return iVar2;
}
