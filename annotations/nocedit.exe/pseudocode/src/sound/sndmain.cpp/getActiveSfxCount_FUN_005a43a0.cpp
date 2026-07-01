// Name: sound_sndmain.cpp_getActiveSfxCount_FUN_005a43a0
// Address: 005a43a0
// Address Range: [[005a43a0, 005a43ff]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getActiveSfxCount_FUN_005a43a0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getActiveSfxCount_FUN_005a43a0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 502;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::kill - must be locked!");
  }
  iVar3 = 0;
  iVar2 = 0;
  iVar1 = g_SfxSlots[0].playback_state;
  while( true ) {
    if (iVar1 == 0) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    if (0x49ff < iVar2 + 0x128) break;
    iVar1 = *(int *)((int)g_SfxSlots[1].distance_to_speakers + iVar2 + -0xc);
    iVar2 = iVar2 + 0x128;
  }
  return -1;
}
