// Name: crt_unknown.c_FUN_00607c88
// Address: 00607c88
// Address Range: [[00607c88, 00607cbb]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00607c88()
// Cross-references:
//   crt_time.c_determine_dst_status_FUN_006079b4 (006079b4) at 00607c65 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 FUN_00607c88(undefined4 param_1, undefined4 param_2) */

undefined4 crt_unknown_c_FUN_00607c88(void)

{
  undefined4 uVar1;
  int *in_stack_00000004;
  int *in_stack_00000008;
  
  uVar1 = 0;
  if ((in_stack_00000004[2] < in_stack_00000008[2]) ||
     ((in_stack_00000004[2] == in_stack_00000008[2] &&
      ((in_stack_00000004[1] < in_stack_00000008[1] ||
       ((in_stack_00000004[1] == in_stack_00000008[1] && (*in_stack_00000004 < *in_stack_00000008)))
       ))))) {
    uVar1 = 1;
  }
  return uVar1;
}


// Assembly code:
// 00607c88: PUSH EBX
//   Label: crt_unknown.c_FUN_00607c88
// 00607c89: PUSH ESI
// 00607c8a: PUSH EBP
// 00607c8b: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00607c8f: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00607c93: MOV ECX,dword ptr [EBX + 0x8]
// 00607c96: MOV ESI,dword ptr [EDX + 0x8]
// 00607c99: XOR EAX,EAX
// 00607c9b: CMP ECX,ESI
// 00607c9d: JL 0x00607cb3
//   XREF to: 00607cb3 (CONDITIONAL_JUMP)
// 00607c9f: JNZ 0x00607cb8
//   XREF to: 00607cb8 (CONDITIONAL_JUMP)
// 00607ca1: MOV ECX,dword ptr [EBX + 0x4]
// 00607ca4: MOV EBP,dword ptr [EDX + 0x4]
// 00607ca7: CMP ECX,EBP
// 00607ca9: JL 0x00607cb3
//   XREF to: 00607cb3 (CONDITIONAL_JUMP)
// 00607cab: JNZ 0x00607cb8
//   XREF to: 00607cb8 (CONDITIONAL_JUMP)
// 00607cad: MOV EBX,dword ptr [EBX]
// 00607caf: CMP EBX,dword ptr [EDX]
// 00607cb1: JGE 0x00607cb8
//   XREF to: 00607cb8 (CONDITIONAL_JUMP)
// 00607cb3: MOV EAX,0x1
//   Label: LAB_00607cb3
// 00607cb8: POP EBP
//   Label: LAB_00607cb8
// 00607cb9: POP ESI
// 00607cba: POP EBX
// 00607cbb: RET
