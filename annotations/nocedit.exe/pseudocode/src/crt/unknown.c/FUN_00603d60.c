// Name: crt_unknown.c_FUN_00603d60
// Address: 00603d60
// Address Range: [[00603d60, 00603db0]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00603d60()
// Cross-references:
//   crt_string.c_parseFloatString_FUN_00605b9b (00605b9b) at 00605d09 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00603dc8 (00603dc8) at 00603fc8 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_unknown.c_CondCallDoNothing_FUN_00603ccc

#include "nocturne.h"

/* Signature: undefined1 FUN_00603d60(undefined4 param_1, undefined4 param_2) */

void crt_unknown_c_FUN_00603d60(void)

{
  int in_stack_00000008;
  
  if ((0x1000 < in_stack_00000008) || (in_stack_00000008 < -0x1000)) {
    crt_unknown_c_CondCallDoNothing_FUN_00603ccc();
  }
  crt_unknown_c_CondCallDoNothing_FUN_00603ccc();
  return;
}


// Assembly code:
// 00603d60: PUSH EBP
//   Label: crt_unknown.c_FUN_00603d60
// 00603d61: MOV EBP,ESP
// 00603d63: PUSH EBX
// 00603d64: PUSH ESI
// 00603d65: MOV EBX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00603d68: CMP EBX,0x1000
// 00603d6e: JLE 0x00603d81
//   XREF to: 00603d81 (CONDITIONAL_JUMP)
// 00603d70: PUSH 0x1000
// 00603d75: MOV ECX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00603d78: PUSH ECX
// 00603d79: SUB EBX,0x1000
// 00603d7f: JMP 0x00603d98
//   XREF to: 00603d98 (UNCONDITIONAL_JUMP)
// 00603d81: CMP EBX,0xfffff000
//   Label: LAB_00603d81
// 00603d87: JGE 0x00603da0
//   XREF to: 00603da0 (CONDITIONAL_JUMP)
// 00603d89: PUSH 0xfffff000
// 00603d8e: MOV EDX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00603d91: PUSH EDX
// 00603d92: ADD EBX,0x1000
// 00603d98: CALL crt_unknown.c_CondCallDoNothing_FUN_00603ccc
//   Label: LAB_00603d98
//   XREF to: 00603ccc (UNCONDITIONAL_CALL)
// 00603d9d: ADD ESP,0x8
// 00603da0: PUSH EBX
//   Label: LAB_00603da0
// 00603da1: MOV ESI,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00603da4: PUSH ESI
// 00603da5: CALL crt_unknown.c_CondCallDoNothing_FUN_00603ccc
//   XREF to: 00603ccc (UNCONDITIONAL_CALL)
// 00603daa: ADD ESP,0x8
// 00603dad: POP ESI
// 00603dae: POP EBX
// 00603daf: POP EBP
// 00603db0: RET
