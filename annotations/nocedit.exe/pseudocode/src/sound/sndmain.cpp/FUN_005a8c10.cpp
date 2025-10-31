// Name: sound_sndmain.cpp_FUN_005a8c10
// Address: 005a8c10
// Address Range: [[005a8c10, 005a8c2d]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a8c10()
// Globals:
//   undefined4 g_SfxLastSlot
//   SfxOptions[8] DAT_03f624a8
// Function calls:
//   sound_sndmain.cpp_FUN_005a8830

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005a8c10(void)

{
  sound_sndmain_cpp_FUN_005a8830();
  return;
}


// Assembly code:
// 005a8c10: MOV EAX,[0x03f624a4]
//   Label: sound_sndmain.cpp_FUN_005a8c10
//   XREF to: 03f624a4 (READ)
// 005a8c15: SHL EAX,0x4
// 005a8c18: MOV EDX,EAX
// 005a8c1a: SHL EAX,0x3
// 005a8c1d: SUB EAX,EDX
// 005a8c1f: ADD EAX,0x3f624a8
//   XREF to: 03f624a8 (DATA)
// 005a8c24: PUSH EAX
// 005a8c25: CALL sound_sndmain.cpp_FUN_005a8830
//   XREF to: 005a8830 (UNCONDITIONAL_CALL)
// 005a8c2a: ADD ESP,0x4
// 005a8c2d: RET
