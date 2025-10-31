// Name: crt_stdio.c_scanf_getc_with_width_FUN_00605918
// Address: 00605918
// Address Range: [[00605918, 00605941]]
// Convention: __cdecl
// Signature: int crt_stdio.c_scanf_getc_with_width_FUN_00605918(scanf_state_t * state)
// Cross-references:
//   crt_stdio.c_scanf_float_FUN_00605178 (00605178) at 00605282 [UNCONDITIONAL_CALL]
//   crt_stdio.c_scanf_integer_FUN_0060547c (0060547c) at 006055e3 [UNCONDITIONAL_CALL]
//   crt_stdio.c_scanf_string_FUN_00604e4c (00604e4c) at 00604f5b [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_scanf_getc_wrapper_FUN_00604930

#include "nocturne.h"

int __cdecl crt_stdio_c_scanf_getc_with_width_FUN_00605918(scanf_state_t *state)

{
  int iVar1;
  
  iVar1 = state->field_width;
  state->field_width = iVar1 + -1;
  if ((iVar1 != 0) &&
     (iVar1 = crt_stdio_c_scanf_getc_wrapper_FUN_00604930(state), (state->flags & 2) == 0)) {
    return iVar1;
  }
  return -1;
}


// Assembly code:
// 00605918: PUSH EBX
//   Label: crt_stdio.c_scanf_getc_with_width_FUN_00605918
// 00605919: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060591d: MOV EAX,dword ptr [EBX + 0xc]
// 00605920: LEA EDX,[EAX + -0x1]
// 00605923: MOV dword ptr [EBX + 0xc],EDX
// 00605926: TEST EAX,EAX
// 00605928: JZ 0x0060593b
//   XREF to: 0060593b (CONDITIONAL_JUMP)
// 0060592a: PUSH EBX
// 0060592b: CALL crt_stdio.c_scanf_getc_wrapper_FUN_00604930
//   XREF to: 00604930 (UNCONDITIONAL_CALL)
// 00605930: MOV DL,byte ptr [EBX + 0x10]
// 00605933: ADD ESP,0x4
// 00605936: TEST DL,0x2
// 00605939: JZ 0x00605940
//   XREF to: 00605940 (CONDITIONAL_JUMP)
// 0060593b: MOV EAX,0xffffffff
//   Label: LAB_0060593b
// 00605940: POP EBX
//   Label: LAB_00605940
// 00605941: RET
