// Name: shape_meshlod.cpp_FUN_00515d60
// Address: 00515d60
// Address Range: [[00515d60, 00515d8c]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_00515d60()
// Cross-references:
//   shape_meshlod.cpp_FUN_00515d10 (00515d10) at 00515d1b [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 shape_meshlod.cpp_FUN_00515d60(undefined4 param_1, undefined4 param_2) */

int shape_meshlod_cpp_FUN_00515d60(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar1 = 0;
  iVar2 = in_stack_00000004;
  if (0 < *(int *)(in_stack_00000004 + 0x24)) {
    do {
      if (in_stack_00000008 == *(int *)(iVar2 + 0x28)) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(in_stack_00000004 + 0x24));
  }
  return -1;
}


// Assembly code:
// 00515d60: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_00515d60
// 00515d61: PUSH ESI
// 00515d62: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00515d66: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00515d6a: MOV EDX,dword ptr [ECX + 0x24]
// 00515d6d: XOR EAX,EAX
// 00515d6f: TEST EDX,EDX
// 00515d71: JLE 0x00515d85
//   XREF to: 00515d85 (CONDITIONAL_JUMP)
// 00515d73: MOV EDX,ECX
// 00515d75: CMP EBX,dword ptr [EDX + 0x28]
//   Label: LAB_00515d75
// 00515d78: JZ 0x00515d8a
//   XREF to: 00515d8a (CONDITIONAL_JUMP)
// 00515d7a: INC EAX
// 00515d7b: MOV ESI,dword ptr [ECX + 0x24]
// 00515d7e: ADD EDX,0x4
// 00515d81: CMP EAX,ESI
// 00515d83: JL 0x00515d75
//   XREF to: 00515d75 (CONDITIONAL_JUMP)
// 00515d85: MOV EAX,0xffffffff
//   Label: LAB_00515d85
// 00515d8a: POP ESI
//   Label: LAB_00515d8a
// 00515d8b: POP EBX
// 00515d8c: RET
