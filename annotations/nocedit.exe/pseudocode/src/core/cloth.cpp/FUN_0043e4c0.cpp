// Name: core_cloth.cpp_FUN_0043e4c0
// Address: 0043e4c0
// Address Range: [[0043e4c0, 0043e50a]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043e4c0()
// Function calls:
//   crt_stdio.c_fgetc_FUN_005ff245

#include "nocturne.h"

uint core_cloth_cpp_FUN_0043e4c0(void)

{
  BADSPACEBASE *in_ESP;
  byte unaff_BP;
  FILE *in_stack_00000004;
  int *in_stack_00000008;
  uchar local_14 [4];
  
  if (0 < *in_stack_00000008) {
    crt_stdio_c_fgetc_FUN_005ff245(in_stack_00000004,local_14);
    if (*(int *)((int)&in_stack_00000004->_handle + *(int *)(in_stack_00000004->_ptr + 4)) == 0) {
      *in_stack_00000008 = *in_stack_00000008 + -1;
      return (uint)unaff_BP;
    }
  }
  return 0xffffffff;
}


// Assembly code:
// 0043e4c0: PUSH EBX
//   Label: core_cloth.cpp_FUN_0043e4c0
// 0043e4c1: PUSH ESI
// 0043e4c2: PUSH EDI
// 0043e4c3: PUSH EBP
// 0043e4c4: SUB ESP,0x4
// 0043e4c7: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0043e4cb: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0043e4cf: CMP dword ptr [EBX],0x1
// 0043e4d2: JGE 0x0043e4e1
//   XREF to: 0043e4e1 (CONDITIONAL_JUMP)
// 0043e4d4: MOV EAX,0xffffffff
//   Label: LAB_0043e4d4
// 0043e4d9: ADD ESP,0x4
// 0043e4dc: POP EBP
// 0043e4dd: POP EDI
// 0043e4de: POP ESI
// 0043e4df: POP EBX
// 0043e4e0: RET
// 0043e4e1: MOV EAX,ESP
//   Label: LAB_0043e4e1
// 0043e4e3: PUSH EAX
// 0043e4e4: PUSH ESI
// 0043e4e5: CALL crt_stdio.c_fgetc_FUN_005ff245
//   XREF to: 005ff245 (UNCONDITIONAL_CALL)
// 0043e4ea: MOV EAX,dword ptr [ESI]
// 0043e4ec: ADD ESI,dword ptr [EAX + 0x4]
// 0043e4ef: MOV EDI,dword ptr [ESI + 0x10]
// 0043e4f2: ADD ESP,0x8
// 0043e4f5: TEST EDI,EDI
// 0043e4f7: JNZ 0x0043e4d4
//   XREF to: 0043e4d4 (CONDITIONAL_JUMP)
// 0043e4f9: MOV EBP,dword ptr [EBX]
// 0043e4fb: DEC EBP
// 0043e4fc: XOR EAX,EAX
// 0043e4fe: MOV dword ptr [EBX],EBP
// 0043e500: MOV AL,byte ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0043e503: ADD ESP,0x4
// 0043e506: POP EBP
// 0043e507: POP EDI
// 0043e508: POP ESI
// 0043e509: POP EBX
// 0043e50a: RET
