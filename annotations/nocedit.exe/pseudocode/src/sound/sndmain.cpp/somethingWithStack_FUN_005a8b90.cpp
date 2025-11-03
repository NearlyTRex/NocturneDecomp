// Name: sound_sndmain.cpp_somethingWithStack_FUN_005a8b90
// Address: 005a8b90
// Address Range: [[005a8b90, 005a8ba9]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_somethingWithStack_FUN_005a8b90()
// Cross-references:
//   core_event.cpp_CEventList_FUN_004b0f00 (004b0f00) at 004b0f50 [UNCONDITIONAL_CALL]
//   core_sound.cpp_GetChannelVolumesPlaySplashSfx_FUN_005b3830 (005b3830) at 005b3949 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bdc6e [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a9550 (005a9550) at 005a9558 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_SfxLastSlot
//   undefined4 g_SfxLastSlot.field_20[76]

#include "nocturne.h"

/* Signature: undefined1 sound_sndmain.cpp_somethingWithStack(undefined4 param_1) */

void sound_sndmain_cpp_somethingWithStack_FUN_005a8b90(void)

{
  uint in_stack_00000004;
  
  *(uint *)(DAT_03f624a8[g_SfxLastSlot].field0_0x0 + 0x5c) =
       *(uint *)(DAT_03f624a8[g_SfxLastSlot].field0_0x0 + 0x5c) | in_stack_00000004;
  return;
}


// Assembly code:
// 005a8b90: MOV EAX,[0x03f624a4]
//   Label: sound_sndmain.cpp_somethingWithStack_FUN_005a8b90
//   XREF to: 03f624a4 (READ)
// 005a8b95: SHL EAX,0x4
// 005a8b98: MOV EDX,EAX
// 005a8b9a: SHL EAX,0x3
// 005a8b9d: SUB EAX,EDX
// 005a8b9f: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005a8ba3: OR dword ptr [EAX + 0x3f62504],EDX
//   XREF to: 03f62504 (DATA)
// 005a8ba9: RET
