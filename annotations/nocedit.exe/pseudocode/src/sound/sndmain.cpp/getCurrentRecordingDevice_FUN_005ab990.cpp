// Name: sound_sndmain.cpp_getCurrentRecordingDevice_FUN_005ab990
// Address: 005ab990
// Address Range: [[005ab990, 005ab995]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_getCurrentRecordingDevice_FUN_005ab990(void)
// Cross-references:
//   sound_sndmain.cpp_FUN_005aae00 (005aae00) at 005aae9c [UNCONDITIONAL_CALL]
// Globals:
//   int g_CurrentRecordingDevice = -0x1

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getCurrentRecordingDevice_FUN_005ab990(void)

{
  return g_CurrentRecordingDevice;
}


// Assembly code:
// 005ab990: MOV EAX,[0x00681b50]
//   Label: sound_sndmain.cpp_getCurrentRecordingDevice_FUN_005ab990
//   XREF to: 00681b50 (READ)
// 005ab995: RET
