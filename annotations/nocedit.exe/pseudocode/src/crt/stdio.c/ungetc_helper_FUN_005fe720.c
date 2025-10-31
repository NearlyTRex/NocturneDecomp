// Name: crt_stdio.c_ungetc_helper_FUN_005fe720
// Address: 005fe720
// Address Range: [[005fe720, 005fe737]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_ungetc_helper_FUN_005fe720(int character, scanf_state_t * state)
// Cross-references:
//   crt_stdio.c_vfscanf_FUN_005fe738 (005fe738) at 005fe785 [DATA]
// Function calls:
//   crt_stdio.c_fputc_FUN_005fea10

#include "nocturne.h"

int __watcallStack crt_stdio_c_ungetc_helper_FUN_005fe720(int character,scanf_state_t *state)

{
  int iVar1;
  
  iVar1 = crt_stdio_c_fputc_FUN_005fea10(character,(FILE *)state->input_ptr);
  return iVar1;
}


// Assembly code:
// 005fe720: PUSH EBX
//   Label: crt_stdio.c_ungetc_helper_FUN_005fe720
// 005fe721: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005fe725: MOV EDX,dword ptr [EAX + 0x8]
// 005fe728: PUSH EDX
// 005fe729: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005fe72d: PUSH EBX
// 005fe72e: CALL crt_stdio.c_fputc_FUN_005fea10
//   XREF to: 005fea10 (UNCONDITIONAL_CALL)
// 005fe733: ADD ESP,0x8
// 005fe736: POP EBX
// 005fe737: RET
