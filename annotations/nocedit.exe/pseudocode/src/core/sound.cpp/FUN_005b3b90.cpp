// Name: core_sound.cpp_FUN_005b3b90
// Address: 005b3b90
// Address Range: [[005b3b90, 005b3b9d]]
// Convention: unknown
// Signature: undefined core_sound.cpp_FUN_005b3b90()
// Cross-references:
//   core_dynamite.cpp_FUN_0049cfb0 (0049cfb0) at 0049d039 [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004c9c00 (004c9c00) at 004c9fad [UNCONDITIONAL_CALL]
//   core_flamegun.cpp_FUN_004cb9b0 (004cb9b0) at 004cba8b [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e8037 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054cc30 (0054cc30) at 0054d1d2 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CallToCallToPlaySFX_FUN_005b39b0 (005b39b0) at 005b39be [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b2fd0 (005b2fd0) at 005b3549 [UNCONDITIONAL_CALL]
// Function calls:
//   sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40

#include "nocturne.h"

/* Signature: undefined1 core_sound.cpp_FUN_005b3b90(undefined1 param_1, undefined4 param_2) */

void core_sound_cpp_FUN_005b3b90(void)

{
  sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
  return;
}


// Assembly code:
// 005b3b90: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_sound.cpp_FUN_005b3b90
//   XREF to: Stack[0x8] (READ)
// 005b3b94: PUSH EDX
// 005b3b95: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005b3b9a: ADD ESP,0x4
// 005b3b9d: RET
