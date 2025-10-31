// Name: sound_sndmain.cpp_getMaxSwLatency_FUN_005abea0
// Address: 005abea0
// Address Range: [[005abea0, 005abea5]]
// Convention: __cdecl
// Signature: float sound_sndmain.cpp_getMaxSwLatency_FUN_005abea0(void)
// Cross-references:
//   sound_snddx.cpp_FUN_005ae830 (005ae830) at 005aeaf3 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_waveOutOpen_FUN_005b0a30 (005b0a30) at 005b0a75 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_readIni_FUN_005abf20 (005abf20) at 005ac044 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_writeIni_FUN_005ac220 (005ac220) at 005ac318 [UNCONDITIONAL_CALL]
// Globals:
//   float g_MaxSoftwareLatency = 0.5

#include "nocturne.h"

float __cdecl sound_sndmain_cpp_getMaxSwLatency_FUN_005abea0(void)

{
  return g_MaxSoftwareLatency;
}


// Assembly code:
// 005abea0: MOV EAX,[0x00681b48]
//   Label: sound_sndmain.cpp_getMaxSwLatency_FUN_005abea0
//   XREF to: 00681b48 (READ)
// 005abea5: RET
