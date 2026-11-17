// Name: sound_sndmain.cpp_countActiveSfx_FUN_005513f0
// Address: 005513f0
// Address Range: [[005513f0, 00551415]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_countActiveSfx_FUN_005513f0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_countActiveSfx_FUN_005513f0(void)

{
  CSfxSlot *pCVar1;
  int iVar2;
  
  pCVar1 = g_CSfxSlot_ARRAY_0263cf1c;
  iVar2 = 0;
  do {
    if ((pCVar1->sample != (CSfxSample *)0x0) && (pCVar1->playback_state != 0)) {
      iVar2 = iVar2 + 1;
    }
    pCVar1 = pCVar1 + 1;
  } while (pCVar1 != g_CSfxSlot_ARRAY_0263cf1c + sizeof(g_CSfxSlot_ARRAY_0263cf1c) / sizeof(g_CSfxSlot_ARRAY_0263cf1c[0]));
  return iVar2;
}
