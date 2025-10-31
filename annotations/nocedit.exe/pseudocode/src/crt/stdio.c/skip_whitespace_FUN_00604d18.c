// Name: crt_stdio.c_skip_whitespace_FUN_00604d18
// Address: 00604d18
// Address Range: [[00604d18, 00604d53]]
// Convention: __cdecl
// Signature: int crt_stdio.c_skip_whitespace_FUN_00604d18(scanf_state_t * state)
// Cross-references:
//   crt_stdio.c_doscan_FUN_00604950 (00604950) at 0060499d [UNCONDITIONAL_CALL]
// Globals:
//   char[256] g_CharacterClassificationTable
// Function calls:
//   crt_stdio.c_scanf_getc_wrapper_FUN_00604930
//   crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c

#include "nocturne.h"

int __cdecl crt_stdio_c_skip_whitespace_FUN_00604d18(scanf_state_t *state)

{
  int character;
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    character = crt_stdio_c_scanf_getc_wrapper_FUN_00604930(state);
    if ((g_CharacterClassificationTable[(byte)((char)character + 1)] & 2U) == 0) break;
    iVar1 = iVar1 + 1;
  }
  if ((state->flags & 2) == 0) {
    crt_stdio_c_scanf_ungetc_wrapper_FUN_0060493c(character,state);
  }
  return iVar1;
}


// Assembly code:
// 00604d18: PUSH EBX
//   Label: crt_stdio.c_skip_whitespace_FUN_00604d18
// 00604d19: PUSH ESI
// 00604d1a: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00604d1e: XOR EBX,EBX
// 00604d20: PUSH ESI
//   Label: LAB_00604d20
// 00604d21: CALL crt_stdio.c_scanf_getc_wrapper_FUN_00604930
//   XREF to: 00604930 (UNCONDITIONAL_CALL)
// 00604d26: MOV EDX,EAX
// 00604d28: ADD ESP,0x4
// 00604d2b: INC DL
// 00604d2d: AND EDX,0xff
// 00604d33: TEST byte ptr [EDX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 00604d3a: JZ 0x00604d3f
//   XREF to: 00604d3f (CONDITIONAL_JUMP)
// 00604d3c: INC EBX
// 00604d3d: JMP 0x00604d20
//   XREF to: 00604d20 (UNCONDITIONAL_JUMP)
// 00604d3f: TEST byte ptr [ESI + 0x10],0x2
//   Label: LAB_00604d3f
// 00604d43: JNZ 0x00604d4f
//   XREF to: 00604d4f (CONDITIONAL_JUMP)
// 00604d45: PUSH ESI
// 00604d46: PUSH EAX
// 00604d47: CALL crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c
//   XREF to: 0060493c (UNCONDITIONAL_CALL)
// 00604d4c: ADD ESP,0x8
// 00604d4f: MOV EAX,EBX
//   Label: LAB_00604d4f
// 00604d51: POP ESI
// 00604d52: POP EBX
// 00604d53: RET
