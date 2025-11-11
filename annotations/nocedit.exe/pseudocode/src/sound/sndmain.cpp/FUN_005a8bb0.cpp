// Name: sound_sndmain.cpp_FUN_005a8bb0
// Address: 005a8bb0
// Address Range: [[005a8bb0, 005a8bd3]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a8bb0()
// Cross-references:
//   sound_sndmain.cpp_FUN_005a9580 (005a9580) at 005a958b [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a95e0 (005a95e0) at 005a95e8 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a9620 (005a9620) at 005a9628 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_SfxLastSlot
//   undefined4 g_SfxLastSlot.field_20[76]

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005a8bb0(void)

{
  uint in_stack_00000004;
  
  *(uint *)(g_SfxOptions[g_SfxLastSlot].field5_0x14 + 0x48) =
       *(uint *)(g_SfxOptions[g_SfxLastSlot].field5_0x14 + 0x48) & ~in_stack_00000004;
  return;
}


// Assembly code:
// 005a8bb0: MOV EAX,[0x03f624a4]
//   Label: sound_sndmain.cpp_FUN_005a8bb0
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
