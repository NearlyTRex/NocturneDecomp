// Name: sound_sndmain.cpp_isSoundBusy_FUN_005ab540
// Address: 005ab540
// Address Range: [[005ab540, 005ab54e]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_isSoundBusy_FUN_005ab540(void)
// Cross-references:
//   core_menu.cpp_configureSoundOptions_FUN_00511e50 (00511e50) at 0051251d [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053eb40 (0053eb40) at 0053eb66 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_init_FUN_005b2dd0 (005b2dd0) at 005b2e38 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0 (005aaef0) at 005aaf0b [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setMaxSwSoundLatency_FUN_005abeb0 (005abeb0) at 005abeb0 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170 (005ab170) at 005ab176 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSfx_FUN_005a8e90 (005a8e90) at 005a8ec3 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0 (005ad5c0) at 005ad6d6 [UNCONDITIONAL_CALL]
// Globals:
//   int g_SoundBusyFlag
// Function calls:
//   sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isSoundBusy_FUN_005ab540(void)

{
  uint uVar1;
  
  uVar1 = sound_sndmain_cpp_isSoundSystemActive_FUN_005ab530();
  if (uVar1 != 0) {
    uVar1 = g_SoundBusyFlag;
  }
  return uVar1;
}


// Assembly code:
// 005ab540: CALL sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530
//   Label: sound_sndmain.cpp_isSoundBusy_FUN_005ab540
//   XREF to: 005ab530 (UNCONDITIONAL_CALL)
// 005ab545: TEST EAX,EAX
// 005ab547: JZ 0x005ab54e
//   XREF to: 005ab54e (CONDITIONAL_JUMP)
// 005ab549: MOV EAX,[0x03f6926c]
//   XREF to: 03f6926c (READ)
// 005ab54e: RET
//   Label: LAB_005ab54e
