// Name: crt_unknown.c_FUN_0060501c
// Address: 0060501c
// Address Range: [[0060501c, 00605060]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060501c()
// Cross-references:
//   crt_stdio.c_scanf_scanset_FUN_00605064 (00605064) at 00605098 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00685030
// Function calls:
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

/* Signature: undefined1 FUN_0060501c(undefined4 param_1, undefined4 param_2) */

byte * crt_unknown_c_FUN_0060501c(void)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  byte *in_stack_00000004;
  void *in_stack_00000008;
  
  pbVar3 = in_stack_00000004 + 1;
  crt_memory_c_memset_FUN_005fde40(in_stack_00000008,0,0x20);
  uVar2 = (uint)*in_stack_00000004;
  if (uVar2 != 0) {
    do {
      pbVar1 = (byte *)(((int)uVar2 >> 3) + (int)in_stack_00000008);
      *pbVar1 = *pbVar1 | (&DAT_00685030)[uVar2 & 7];
      uVar2 = (uint)*pbVar3;
      if (uVar2 == 0) {
        return pbVar3;
      }
      pbVar3 = pbVar3 + 1;
    } while (uVar2 != 0x5d);
  }
  return pbVar3;
}


// Assembly code:
// 0060501c: PUSH EBX
//   Label: crt_unknown.c_FUN_0060501c
// 0060501d: PUSH ESI
// 0060501e: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00605022: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00605026: PUSH 0x20
// 00605028: PUSH 0x0
// 0060502a: PUSH ESI
// 0060502b: INC EBX
// 0060502c: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00605031: XOR EAX,EAX
// 00605033: MOV AL,byte ptr [EBX + -0x1]
// 00605036: ADD ESP,0xc
// 00605039: TEST EAX,EAX
// 0060503b: JZ 0x0060505c
//   XREF to: 0060505c (CONDITIONAL_JUMP)
// 0060503d: MOV EDX,EAX
//   Label: LAB_0060503d
// 0060503f: AND EAX,0x7
// 00605042: SAR EDX,0x3
// 00605045: MOV AL,byte ptr [EAX + 0x685030]
//   XREF to: 00685030 (DATA)
// 0060504b: OR byte ptr [EDX + ESI*0x1],AL
// 0060504e: XOR EAX,EAX
// 00605050: MOV AL,byte ptr [EBX]
// 00605052: TEST EAX,EAX
// 00605054: JZ 0x0060505c
//   XREF to: 0060505c (CONDITIONAL_JUMP)
// 00605056: INC EBX
// 00605057: CMP EAX,0x5d
// 0060505a: JNZ 0x0060503d
//   XREF to: 0060503d (CONDITIONAL_JUMP)
// 0060505c: MOV EAX,EBX
//   Label: LAB_0060505c
// 0060505e: POP ESI
// 0060505f: POP EBX
// 00605060: RET
