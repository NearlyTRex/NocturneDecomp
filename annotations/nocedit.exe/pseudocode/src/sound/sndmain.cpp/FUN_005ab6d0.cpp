// Name: sound_sndmain.cpp_FUN_005ab6d0
// Address: 005ab6d0
// Address Range: [[005ab6d0, 005ab6d5]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005ab6d0()
// Cross-references:
//   sound_sndmain.cpp_FUN_005ac400 (005ac400) at 005ac450 [UNCONDITIONAL_CALL]
// Globals:
//   int g_MixBufferCount

#include "nocturne.h"

int sound_sndmain_cpp_FUN_005ab6d0(void)

{
  return g_MixBufferCount;
}


// Assembly code:
// 005ab6d0: MOV EAX,[0x03f69320]
//   Label: sound_sndmain.cpp_FUN_005ab6d0
//   XREF to: 03f69320 (READ)
// 005ab6d5: RET
