// Name: sound_sndmain.cpp_shutdownSoundSystem_FUN_005aaeb0
// Address: 005aaeb0
// Address Range: [[005aaeb0, 005aaee3]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_shutdownSoundSystem_FUN_005aaeb0(void)
// Cross-references:
//   core_sound.cpp_CSound_dtor_FUN_005aaeb0 (005b2d60) at 005b2d60 [UNCONDITIONAL_JUMP]
// Globals:
//   int g_ShutdownInProgress
// Function calls:
//   sound_sndmain.cpp_closeSoundDevice_FUN_005ab660
//   sound_sndmain.cpp_freeAllSamples_FUN_005aa660
//   sound_sndmain.cpp_releaseRecordingDevice_FUN_005ab930
//   sound_sndmain.cpp_resetSoundDevice_FUN_005ab130
//   sound_sndmain.cpp_stopRecordingDevice_FUN_005abb60

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_shutdownSoundSystem_FUN_005aaeb0(void)

{
  undefined4 uStack00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  if (0 < g_ShutdownInProgress) {
    return;
  }
  g_ShutdownInProgress = g_ShutdownInProgress + 1;
  sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
  sound_sndmain_cpp_closeSoundDevice_FUN_005ab660();
  uStack00000004 = 0x5aaed3;
  sound_sndmain_cpp_stopRecordingDevice_FUN_005abb60();
  uStack00000008 = 0x5aaed8;
  sound_sndmain_cpp_releaseRecordingDevice_FUN_005ab930();
  uStack0000000c = 0x5aaedd;
  sound_sndmain_cpp_freeAllSamples_FUN_005aa660();
  g_ShutdownInProgress = g_ShutdownInProgress + -1;
  return;
}


// Assembly code:
// 005aaeb0: MOV EDX,dword ptr [0x03f5d87c]
//   Label: sound_sndmain.cpp_shutdownSoundSystem_FUN_005aaeb0
//   XREF to: 03f5d87c (READ)
// 005aaeb6: TEST EDX,EDX
// 005aaeb8: JLE 0x005aaebb
//   XREF to: 005aaebb (CONDITIONAL_JUMP)
// 005aaeba: RET
// 005aaebb: LEA ECX,[EDX + 0x1]
//   Label: LAB_005aaebb
// 005aaebe: MOV dword ptr [0x03f5d87c],ECX
//   XREF to: 03f5d87c (WRITE)
// 005aaec4: CALL sound_sndmain.cpp_resetSoundDevice_FUN_005ab130
//   XREF to: 005ab130 (UNCONDITIONAL_CALL)
// 005aaec9: CALL sound_sndmain.cpp_closeSoundDevice_FUN_005ab660
//   XREF to: 005ab660 (UNCONDITIONAL_CALL)
// 005aaece: CALL sound_sndmain.cpp_stopRecordingDevice_FUN_005abb60
//   XREF to: 005abb60 (UNCONDITIONAL_CALL)
// 005aaed3: CALL sound_sndmain.cpp_releaseRecordingDevice_FUN_005ab930
//   XREF to: 005ab930 (UNCONDITIONAL_CALL)
// 005aaed8: CALL sound_sndmain.cpp_freeAllSamples_FUN_005aa660
//   XREF to: 005aa660 (UNCONDITIONAL_CALL)
// 005aaedd: DEC dword ptr [0x03f5d87c]
//   XREF to: 03f5d87c (READ_WRITE)
// 005aaee3: RET
