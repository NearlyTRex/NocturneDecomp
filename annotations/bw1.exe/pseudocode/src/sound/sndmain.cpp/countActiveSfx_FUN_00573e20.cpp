// Name: sound_sndmain.cpp_countActiveSfx_FUN_00573e20
// Address: 00573e20
// Address Range: [[00573e20, 00573e45]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_countActiveSfx_FUN_00573e20(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_countActiveSfx_FUN_00573e20(void)

{
  CSfxSlot *pCVar1;
  int iVar2;
  
  pCVar1 = g_CSfxSlot_ARRAY_02c745ec;
  iVar2 = 0;
  do {
    if ((pCVar1->sample != (CSfxSample *)0x0) && (pCVar1->playback_state != 0)) {
      iVar2 = iVar2 + 1;
    }
    pCVar1 = pCVar1 + 1;
  } while (pCVar1 != g_CSfxSlot_ARRAY_02c745ec + sizeof(g_CSfxSlot_ARRAY_02c745ec) / sizeof(g_CSfxSlot_ARRAY_02c745ec[0]));
  return iVar2;
}
