// Name: sound_sndmain.cpp_countActiveSfx_FUN_005a9ff0
// Address: 005a9ff0
// Address Range: [[005a9ff0, 005aa015]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_countActiveSfx_FUN_005a9ff0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_countActiveSfx_FUN_005a9ff0(void)

{
  CSfxSlot *pCVar1;
  int iVar2;
  
  pCVar1 = g_SfxSlots;
  iVar2 = 0;
  do {
    if ((pCVar1->sample != (CSfxSample *)0x0) && (pCVar1->playback_state != 0)) {
      iVar2 = iVar2 + 1;
    }
    pCVar1 = pCVar1 + 1;
  } while (pCVar1 != g_SfxSlots + 64);
  return iVar2;
}
