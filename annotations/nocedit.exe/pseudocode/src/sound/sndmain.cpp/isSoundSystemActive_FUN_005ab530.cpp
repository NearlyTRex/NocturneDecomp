// Name: sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530
// Address: 005ab530
// Address Range: [[005ab530, 005ab53f]]
// Convention: __cdecl
// Signature: uint sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530(void)
// Cross-references:
//   sound_sndmain.cpp_FUN_005aaef0 (005aaef0) at 005aaef4 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005ab5a0 (005ab5a0) at 005ab5a0 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_enableHwSoundMixing_FUN_005ab550 (005ab550) at 005ab550 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_isSoundBusy_FUN_005ab540 (005ab540) at 005ab540 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0 (005ab4c0) at 005ab4c5 [UNCONDITIONAL_CALL]
// Globals:
//   CSound* g_CSoundInstance

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_isSoundSystemActive_FUN_005ab530(void)

{
  return (uint)(g_CSoundInstance != (CSound *)0x0);
}


// Assembly code:
// 005ab530: CMP dword ptr [0x03f69268],0x0
//   Label: sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530
//   XREF to: 03f69268 (READ)
// 005ab537: SETNZ AL
// 005ab53a: AND EAX,0xff
// 005ab53f: RET
