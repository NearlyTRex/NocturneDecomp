// Name: sound_sndmain.cpp_getActiveSfxCount_FUN_0056df00
// Address: 0056df00
// Address Range: [[0056df00, 0056df5f]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getActiveSfxCount_FUN_0056df00(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getActiveSfxCount_FUN_0056df00(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (g_INT_02c807ec < 1) {
    g_CHAR_PTR_01d1d400 = "..\\sound\\sndmain.cpp";
    g_INT_01d1d404 = 0x249;
    core_main_c_displayErrorAndQuit_FUN_005030e0("SfxSlot::kill - must be locked!");
  }
  iVar3 = 0;
  iVar2 = 0;
  iVar1 = g_CSfxSlot_ARRAY_02c745ec[0].playback_state;
  while( true ) {
    if (iVar1 == 0) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    if (0x46ff < iVar2 + 0x11c) break;
    iVar1 = *(int *)((int)g_CSfxSlot_ARRAY_02c745ec[1].distance_to_speakers + iVar2 + -0xc);
    iVar2 = iVar2 + 0x11c;
  }
  return -1;
}
