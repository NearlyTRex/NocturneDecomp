// Name: sound_sndmain.cpp_setNextSfxFlags_FUN_005a8b70
// Address: 005a8b70
// Address Range: [[005a8b70, 005a8b89]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_setNextSfxFlags_FUN_005a8b70(uint flags)
// Cross-references:
//   core_game.cpp_CGame_rollCredits_FUN_004e4010 (004e4010) at 004e439b [UNCONDITIONAL_CALL]
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 0051286a [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_process_FUN_005b2fd0 (005b2fd0) at 005b338b [UNCONDITIONAL_CALL]
//   core_sound.cpp_playSfxInternal_FUN_005b1fd0 (005b1fd0) at 005b21d7 [UNCONDITIONAL_CALL]
//   core_sound.cpp_processTrainSounds_FUN_005b2770 (005b2770) at 005b2895 [UNCONDITIONAL_CALL]
// Globals:
//   int g_SfxLastSlot
//   undefined4 g_SfxLastSlot.field_20[76]

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxFlags_FUN_005a8b70(uint flags)

{
  g_SfxOptions[g_SfxLastSlot].flags = flags;
  return;
}


// Assembly code:
// 005a8b70: MOV EAX,[0x03f624a4]
//   Label: sound_sndmain.cpp_setNextSfxFlags_FUN_005a8b70
//   XREF to: 03f624a4 (READ)
// 005a8b75: SHL EAX,0x4
// 005a8b78: MOV EDX,EAX
// 005a8b7a: SHL EAX,0x3
// 005a8b7d: SUB EAX,EDX
// 005a8b7f: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005a8b83: MOV dword ptr [EAX + 0x3f62504],EDX
//   XREF to: 03f62504 (DATA)
// 005a8b89: RET
