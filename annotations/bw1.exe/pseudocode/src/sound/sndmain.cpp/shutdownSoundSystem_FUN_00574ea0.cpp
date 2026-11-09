// Name: sound_sndmain.cpp_shutdownSoundSystem_FUN_00574ea0
// Address: 00574ea0
// Address Range: [[00574ea0, 00574ed3]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_shutdownSoundSystem_FUN_00574ea0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_shutdownSoundSystem_FUN_00574ea0(void)

{
  if (0 < _DAT_02c745bc) {
    return;
  }
  _DAT_02c745bc = _DAT_02c745bc + 1;
  sound_sndmain_cpp_resetSoundDevice_FUN_005750e0();
  sound_sndmain_cpp_closeSoundDevice_FUN_00575670();
  sound_sndmain_cpp_stopRecordingDevice_FUN_00575b70();
  sound_sndmain_cpp_releaseRecordingDevice_FUN_00575940();
  sound_sndmain_cpp_FUN_005746a0();
  _DAT_02c745bc = _DAT_02c745bc + -1;
  return;
}
