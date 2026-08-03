// Name: sound_sndmain.cpp_countActiveSfx_FUN_005275e0
// Address: 005275e0
// Address Range: [[005275e0, 00527605]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_countActiveSfx_FUN_005275e0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_countActiveSfx_FUN_005275e0(void)

{
  CSfxSlot *pCVar1;
  int iVar2;
  
  pCVar1 = g_CSfxSlot_ARRAY_02dbd374;
  iVar2 = 0;
  do {
    if ((pCVar1->sample != (CSfxSample *)0x0) && (pCVar1->playback_state != 0)) {
      iVar2 = iVar2 + 1;
    }
    pCVar1 = pCVar1 + 1;
  } while (pCVar1 != (CSfxSlot *)&DAT_02dc1b74);
  return iVar2;
}
