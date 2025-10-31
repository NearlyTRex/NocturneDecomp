// Name: crt_stdio.c_scanf_getc_wrapper_FUN_00604930
// Address: 00604930
// Address Range: [[00604930, 0060493a]]
// Convention: __cdecl
// Signature: int crt_stdio.c_scanf_getc_wrapper_FUN_00604930(scanf_state_t * state)
// Cross-references:
//   crt_stdio.c_doscan_FUN_00604950 (00604950) at 00604ba5 [UNCONDITIONAL_CALL]
//   crt_stdio.c_scanf_char_FUN_00604d54 (00604d54) at 00604db8 [UNCONDITIONAL_CALL]
//   crt_stdio.c_scanf_float_FUN_00605178 (00605178) at 00605190 [UNCONDITIONAL_CALL]
//   crt_stdio.c_scanf_getc_with_width_FUN_00605918 (00605918) at 0060592b [UNCONDITIONAL_CALL]
//   crt_stdio.c_scanf_integer_FUN_0060547c (0060547c) at 006054a0 [UNCONDITIONAL_CALL]
//   crt_stdio.c_scanf_scanset_FUN_00605064 (00605064) at 006050ed [UNCONDITIONAL_CALL]
//   crt_stdio.c_scanf_string_FUN_00604e4c (00604e4c) at 00604f22 [UNCONDITIONAL_CALL]
//   crt_stdio.c_skip_whitespace_FUN_00604d18 (00604d18) at 00604d21 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl crt_stdio_c_scanf_getc_wrapper_FUN_00604930(scanf_state_t *state)

{
  int iVar1;
  
  iVar1 = (*state->getc_func)(state);
  return iVar1;
}


// Assembly code:
// 00604930: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_stdio.c_scanf_getc_wrapper_FUN_00604930
//   XREF to: Stack[0x4] (READ)
// 00604934: PUSH EAX
// 00604935: CALL dword ptr [EAX]
// 00604937: ADD ESP,0x4
// 0060493a: RET
