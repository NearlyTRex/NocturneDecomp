// Name: crt_unknown.c_FUN_0060fa90
// Address: 0060fa90
// Address Range: [[0060fa90, 0060fab7]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060fa90()
// Cross-references:
//   crt_env.c_putenv_internal_FUN_0060ee80 (0060ee80) at 0060efd9 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00610900 (00610900) at 00610918 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_mbstring_termination_check_FUN_0060b630
//   crt_string.c_mbtowc_next_FUN_00605a70

#include "nocturne.h"

int crt_unknown_c_FUN_0060fa90(void)

{
  int iVar1;
  int iVar2;
  char *in_stack_00000004;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = crt_string_c_mbstring_termination_check_FUN_0060b630(in_stack_00000004);
    if (iVar1 != 0) break;
    in_stack_00000004 = crt_string_c_mbtowc_next_FUN_00605a70(in_stack_00000004);
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


// Assembly code:
// 0060fa90: PUSH EBX
//   Label: crt_unknown.c_FUN_0060fa90
// 0060fa91: PUSH ESI
// 0060fa92: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0060fa96: XOR ESI,ESI
// 0060fa98: PUSH EBX
//   Label: LAB_0060fa98
// 0060fa99: CALL crt_string.c_mbstring_termination_check_FUN_0060b630
//   XREF to: 0060b630 (UNCONDITIONAL_CALL)
// 0060fa9e: ADD ESP,0x4
// 0060faa1: TEST EAX,EAX
// 0060faa3: JNZ 0x0060fab3
//   XREF to: 0060fab3 (CONDITIONAL_JUMP)
// 0060faa5: PUSH EBX
// 0060faa6: CALL crt_string.c_mbtowc_next_FUN_00605a70
//   XREF to: 00605a70 (UNCONDITIONAL_CALL)
// 0060faab: INC ESI
// 0060faac: ADD ESP,0x4
// 0060faaf: MOV EBX,EAX
// 0060fab1: JMP 0x0060fa98
//   XREF to: 0060fa98 (UNCONDITIONAL_JUMP)
// 0060fab3: MOV EAX,ESI
//   Label: LAB_0060fab3
// 0060fab5: POP ESI
// 0060fab6: POP EBX
// 0060fab7: RET
