// Name: crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c
// Address: 0060493c
// Address Range: [[0060493c, 0060494c]]
// Convention: __cdecl
// Signature: int crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c(int character, scanf_state_t * state)
// Cross-references:
//   crt_stdio.c_doscan_FUN_00604950 (00604950) at 006049ce [UNCONDITIONAL_CALL]
//   crt_stdio.c_scanf_float_FUN_00605178 (00605178) at 006053a5 [UNCONDITIONAL_CALL]
//   crt_stdio.c_scanf_integer_FUN_0060547c (0060547c) at 00605790 [UNCONDITIONAL_CALL]
//   crt_stdio.c_scanf_scanset_FUN_00605064 (00605064) at 0060513d [UNCONDITIONAL_CALL]
//   crt_stdio.c_scanf_string_FUN_00604e4c (00604e4c) at 00604f80 [UNCONDITIONAL_CALL]
//   crt_stdio.c_skip_whitespace_FUN_00604d18 (00604d18) at 00604d47 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl crt_stdio_c_scanf_ungetc_wrapper_FUN_0060493c(int character,scanf_state_t *state)

{
  int iVar1;
  
  iVar1 = (*state->ungetc_func)(character,state);
  return iVar1;
}


// Assembly code:
// 0060493c: MOV EAX,dword ptr [ESP + 0x8]
//   Label: crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c
//   XREF to: Stack[0x8] (READ)
// 00604940: PUSH EAX
// 00604941: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00604945: PUSH EDX
// 00604946: CALL dword ptr [EAX + 0x4]
// 00604949: ADD ESP,0x8
// 0060494c: RET
