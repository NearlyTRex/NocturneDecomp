// Name: sound_sndmain.cpp_shutdownSoundSystem_FUN_00558010
// Address: 00558010
// Address Range: [[00558010, 00558043]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_shutdownSoundSystem_FUN_00558010(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_shutdownSoundSystem_FUN_00558010(void)

{
  if (0 < _DAT_02ce71ec) {
    return;
  }
  _DAT_02ce71ec = _DAT_02ce71ec + 1;
  sound_sndmain_cpp_resetSoundDevice_FUN_00558250();
  sound_sndmain_cpp_closeSoundDevice_FUN_005587e0();
  sound_sndmain_cpp_stopRecordingDevice_FUN_00558ce0();
  sound_sndmain_cpp_releaseRecordingDevice_FUN_00558ab0();
  sound_sndmain_cpp_FUN_00557800();
  _DAT_02ce71ec = _DAT_02ce71ec + -1;
  return;
}
