// Name: sound_sndmain.cpp_getHardwareMixingEnabled_FUN_005ab590
// Address: 005ab590
// Address Range: [[005ab590, 005ab595]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_getHardwareMixingEnabled_FUN_005ab590(void)
// Cross-references:
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 005124b1 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_CreatePrimaryBufferMaybe_FUN_005b0440 (005b0440) at 005b0568 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_readIni_FUN_005abf20 (005abf20) at 005ac012 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_writeIni_FUN_005ac220 (005ac220) at 005ac304 [UNCONDITIONAL_CALL]
// Globals:
//   int g_HardwareMixingEnabled = 0x1

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getHardwareMixingEnabled_FUN_005ab590(void)

{
  return g_HardwareMixingEnabled;
}


// Assembly code:
// 005ab590: MOV EAX,[0x00681b28]
//   Label: sound_sndmain.cpp_getHardwareMixingEnabled_FUN_005ab590
//   XREF to: 00681b28 (READ)
// 005ab595: RET
