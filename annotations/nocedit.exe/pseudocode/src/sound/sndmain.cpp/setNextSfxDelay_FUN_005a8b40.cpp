// Name: sound_sndmain.cpp_setNextSfxDelay_FUN_005a8b40
// Address: 005a8b40
// Address Range: [[005a8b40, 005a8b63]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_setNextSfxDelay_FUN_005a8b40(double delay_seconds)
// Cross-references:
//   core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_005b3aa0 (005b3aa0) at 005b3ab0 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_005b3ae0 (005b3ae0) at 005b3af4 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_005b3b30 (005b3b30) at 005b3b40 [UNCONDITIONAL_CALL]
// Globals:
//   int g_SfxLastSlot
//   undefined4 g_SfxLastSlot.field_20[60]
//   undefined4 g_SfxLastSlot.field_20[64]

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxDelay_FUN_005a8b40(double delay_seconds)

{
  g_SfxOptions[g_SfxLastSlot].delay_remaining = delay_seconds;
  return;
}


// Assembly code:
// 005a8b40: MOV EAX,[0x03f624a4]
//   Label: sound_sndmain.cpp_setNextSfxDelay_FUN_005a8b40
//   XREF to: 03f624a4 (READ)
// 005a8b45: SHL EAX,0x4
// 005a8b48: MOV EDX,EAX
// 005a8b4a: SHL EAX,0x3
// 005a8b4d: SUB EAX,EDX
// 005a8b4f: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005a8b53: MOV dword ptr [EAX + 0x3f624f4],EDX
//   XREF to: 03f624f4 (DATA)
// 005a8b59: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005a8b5d: MOV dword ptr [EAX + 0x3f624f8],EDX
//   XREF to: 03f624f8 (DATA)
// 005a8b63: RET
