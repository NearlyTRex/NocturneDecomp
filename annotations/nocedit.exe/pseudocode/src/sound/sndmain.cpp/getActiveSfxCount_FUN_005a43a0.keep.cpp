// Name: sound_sndmain.cpp_getActiveSfxCount_FUN_005a43a0
// Address: 005a43a0
// MANUAL RECONSTRUCTION
// Address Range: [[005a43a0, 005a43ff]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getActiveSfxCount_FUN_005a43a0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getActiveSfxCount_FUN_005a43a0(void)

{
  int i;

  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 502;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::kill - must be locked!");
  }
  for (i = 0; i < 64; i = i + 1) {
    if (g_SfxSlots[i].playback_state == 0) {
      return i;
    }
  }
  return -1;
}
