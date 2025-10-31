// Name: crt_unknown.c_FUN_006107c0
// Address: 006107c0
// Address Range: [[006107c0, 006107ec]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_006107c0()
// Cross-references:
//   crt_unknown.c_FUN_0060fb40 (0060fb40) at 0060fb5b [UNCONDITIONAL_CALL]

#include "nocturne.h"

short * crt_unknown_c_FUN_006107c0(void)

{
  short sVar1;
  short *in_stack_00000004;
  short in_stack_00000008;
  
  sVar1 = *in_stack_00000004;
  while( true ) {
    if (in_stack_00000008 == sVar1) {
      return in_stack_00000004;
    }
    sVar1 = *in_stack_00000004;
    in_stack_00000004 = in_stack_00000004 + 1;
    if (sVar1 == 0) break;
    sVar1 = *in_stack_00000004;
  }
  return (short *)0x0;
}


// Assembly code:
// 006107c0: PUSH EBX
//   Label: crt_unknown.c_FUN_006107c0
// 006107c1: PUSH EDI
// 006107c2: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 006107c6: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 006107ca: MOV CX,word ptr [EAX]
// 006107cd: MOV EBX,EDX
// 006107cf: CMP DX,CX
// 006107d2: JZ 0x006107ea
//   XREF to: 006107ea (CONDITIONAL_JUMP)
// 006107d4: MOV EDX,EAX
//   Label: LAB_006107d4
// 006107d6: MOV DI,word ptr [EDX]
// 006107d9: ADD EAX,0x2
// 006107dc: TEST DI,DI
// 006107df: JZ 0x006107e8
//   XREF to: 006107e8 (CONDITIONAL_JUMP)
// 006107e1: CMP BX,word ptr [EAX]
// 006107e4: JZ 0x006107ea
//   XREF to: 006107ea (CONDITIONAL_JUMP)
// 006107e6: JMP 0x006107d4
//   XREF to: 006107d4 (UNCONDITIONAL_JUMP)
// 006107e8: XOR EAX,EAX
//   Label: LAB_006107e8
// 006107ea: POP EDI
//   Label: LAB_006107ea
// 006107eb: POP EBX
// 006107ec: RET
