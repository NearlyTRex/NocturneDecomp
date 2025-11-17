// Name: sound_sndmain.cpp_FUN_005aa7d0
// Address: 005aa7d0
// Address Range: [[005aa7d0, 005aa7ef]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005aa7d0()
// Cross-references:
//   sound_sndmain.cpp_FUN_005aa7f0 (005aa7f0) at 005aaded [UNCONDITIONAL_CALL]

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005aa7d0(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (0 < in_stack_00000008) {
    do {
      in_stack_00000008 = in_stack_00000008 + -1;
      *(byte *)(in_stack_00000004 + 1) = *(byte *)(in_stack_00000004 + 1) ^ 0x80;
      in_stack_00000004 = in_stack_00000004 + 2;
    } while (0 < in_stack_00000008);
  }
  return;
}


// Assembly code:
// 005aa7d0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: sound_sndmain.cpp_FUN_005aa7d0
//   XREF to: Stack[0x8] (READ)
// 005aa7d4: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005aa7d8: TEST EDX,EDX
// 005aa7da: JLE 0x005aa7ef
//   XREF to: 005aa7ef (CONDITIONAL_JUMP)
// 005aa7dc: PUSH EBX
// 005aa7dd: MOV BL,byte ptr [EAX + 0x1]
//   Label: LAB_005aa7dd
// 005aa7e0: ADD EAX,0x2
// 005aa7e3: XOR BL,0x80
// 005aa7e6: DEC EDX
// 005aa7e7: MOV byte ptr [EAX + -0x1],BL
// 005aa7ea: TEST EDX,EDX
// 005aa7ec: JG 0x005aa7dd
//   XREF to: 005aa7dd (CONDITIONAL_JUMP)
// 005aa7ee: POP EBX
// 005aa7ef: RET
//   Label: LAB_005aa7ef
