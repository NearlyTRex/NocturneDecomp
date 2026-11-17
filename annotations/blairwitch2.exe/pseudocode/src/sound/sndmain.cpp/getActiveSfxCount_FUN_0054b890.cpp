// Name: sound_sndmain.cpp_getActiveSfxCount_FUN_0054b890
// Address: 0054b890
// Address Range: [[0054b890, 0054b8ef]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getActiveSfxCount_FUN_0054b890(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getActiveSfxCount_FUN_0054b890(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (g_INT_0264901c < 1) {
    g_CHAR_PTR_01d046a0 = "..\\sound\\sndmain.cpp";
    g_INT_01d046a4 = 0x249;
    core_main_c_displayErrorAndQuit_FUN_004e4500("SfxSlot::kill - must be locked!");
  }
  iVar3 = 0;
  iVar2 = 0;
  iVar1 = g_CSfxSlot_ARRAY_0263cf1c[0].playback_state;
  while( true ) {
    if (iVar1 == 0) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    if (0x46ff < iVar2 + 0x11c) break;
    iVar1 = *(int *)((int)g_CSfxSlot_ARRAY_0263cf1c[1].distance_to_speakers + iVar2 + -0xc);
    iVar2 = iVar2 + 0x11c;
  }
  return -1;
}
