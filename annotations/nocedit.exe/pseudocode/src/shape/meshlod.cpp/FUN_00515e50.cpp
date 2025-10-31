// Name: shape_meshlod.cpp_FUN_00515e50
// Address: 00515e50
// Address Range: [[00515e50, 00515e85]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_00515e50()
// Cross-references:
//   shape_meshlod.cpp_FUN_00515e00 (00515e00) at 00515e0b [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 shape_meshlod.cpp_FUN_00515e50(undefined4 param_1, undefined4 param_2) */

int shape_meshlod_cpp_FUN_00515e50(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar1 = 0;
  iVar2 = in_stack_00000004;
  if (0 < *(int *)(in_stack_00000004 + 0x3f8)) {
    do {
      if (in_stack_00000008 == *(int *)(iVar2 + 0x3fc)) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(in_stack_00000004 + 0x3f8));
  }
  return -1;
}


// Assembly code:
// 00515e50: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_00515e50
// 00515e51: PUSH ESI
// 00515e52: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00515e56: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00515e5a: MOV EDX,dword ptr [ECX + 0x3f8]
// 00515e60: XOR EAX,EAX
// 00515e62: TEST EDX,EDX
// 00515e64: JLE 0x00515e7e
//   XREF to: 00515e7e (CONDITIONAL_JUMP)
// 00515e66: MOV EDX,ECX
// 00515e68: CMP EBX,dword ptr [EDX + 0x3fc]
//   Label: LAB_00515e68
// 00515e6e: JZ 0x00515e83
//   XREF to: 00515e83 (CONDITIONAL_JUMP)
// 00515e70: INC EAX
// 00515e71: MOV ESI,dword ptr [ECX + 0x3f8]
// 00515e77: ADD EDX,0x4
// 00515e7a: CMP EAX,ESI
// 00515e7c: JL 0x00515e68
//   XREF to: 00515e68 (CONDITIONAL_JUMP)
// 00515e7e: MOV EAX,0xffffffff
//   Label: LAB_00515e7e
// 00515e83: POP ESI
//   Label: LAB_00515e83
// 00515e84: POP EBX
// 00515e85: RET
