// Name: sound_sndmain.cpp_clearNextSfxFlagBits_FUN_005a8bb0
// Address: 005a8bb0
// Address Range: [[005a8bb0, 005a8bd3]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_clearNextSfxFlagBits_FUN_005a8bb0(uint flag_mask)
// Cross-references:
//   sound_sndmain.cpp_startSfxAtStaticPosition_FUN_005a9580 (005a9580) at 005a958b [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSfxTrackedDoublePosition_FUN_005a9620 (005a9620) at 005a9628 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSfxTrackedFloatPosition_FUN_005a95e0 (005a95e0) at 005a95e8 [UNCONDITIONAL_CALL]
// Globals:
//   int g_SfxLastSlot
//   undefined4 g_SfxLastSlot.field_20[76]

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_clearNextSfxFlagBits_FUN_005a8bb0(uint flag_mask)

{
  g_SfxOptions[g_SfxLastSlot].flags = g_SfxOptions[g_SfxLastSlot].flags & ~flag_mask;
  return;
}


// Assembly code:
// 005a8bb0: MOV EAX,[0x03f624a4]
//   Label: sound_sndmain.cpp_clearNextSfxFlagBits_FUN_005a8bb0
//   XREF to: 03f624a4 (READ)
// 005a8bb5: SHL EAX,0x4
// 005a8bb8: MOV EDX,EAX
// 005a8bba: SHL EAX,0x3
// 005a8bbd: SUB EAX,EDX
// 005a8bbf: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005a8bc3: MOV ECX,dword ptr [EAX + 0x3f62504]
//   XREF to: 03f62504 (DATA)
// 005a8bc9: NOT EDX
// 005a8bcb: AND ECX,EDX
// 005a8bcd: MOV dword ptr [EAX + 0x3f62504],ECX
//   XREF to: 03f62504 (DATA)
// 005a8bd3: RET
