// Name: sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0
// Address: 005ab5a0
// Address Range: [[005ab5a0, 005ab5ae]]
// Convention: __cdecl
// Signature: uint sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0(void)
// Cross-references:
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 00512bc0 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_findAllSoundFiles_FUN_005b2d00 (005b2d00) at 005b2d3c [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170 (005a6170) at 005a6191 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 (005a9660) at 005a9660 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_pollAllSfxSlots_FUN_005acdb0 (005acdb0) at 005acdde [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0 (005a9cf0) at 005a9d3b [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSfx_FUN_005a8e90 (005a8e90) at 005a9105 [UNCONDITIONAL_CALL]
// Globals:
//   int g_HasHardware3DSound
// Function calls:
//   sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0(void)

{
  uint uVar1;
  
  uVar1 = sound_sndmain_cpp_isSoundSystemActive_FUN_005ab530();
  if (uVar1 != 0) {
    uVar1 = g_HasHardware3DSound;
  }
  return uVar1;
}


// Assembly code:
// 005ab5a0: CALL sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530
//   Label: sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0
//   XREF to: 005ab530 (UNCONDITIONAL_CALL)
// 005ab5a5: TEST EAX,EAX
// 005ab5a7: JZ 0x005ab5ae
//   XREF to: 005ab5ae (CONDITIONAL_JUMP)
// 005ab5a9: MOV EAX,[0x03f69270]
//   XREF to: 03f69270 (READ)
// 005ab5ae: RET
//   Label: LAB_005ab5ae
