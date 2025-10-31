// Name: core_cloth.cpp_FUN_0043c3a0
// Address: 0043c3a0
// Address Range: [[0043c3a0, 0043c3d4]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043c3a0()
// Function calls:
//   core_cloth.cpp_FUN_0043e1a0

#include "nocturne.h"

void core_cloth_cpp_FUN_0043c3a0(void)

{
  int iVar1;
  int *in_stack_00000004;
  
  iVar1 = 0;
  if (0 < *in_stack_00000004) {
    do {
      iVar1 = iVar1 + 1;
      core_cloth_cpp_FUN_0043e1a0();
    } while (iVar1 < *in_stack_00000004);
  }
  return;
}


// Assembly code:
// 0043c3a0: PUSH EBX
//   Label: core_cloth.cpp_FUN_0043c3a0
// 0043c3a1: PUSH EDI
// 0043c3a2: PUSH EBP
// 0043c3a3: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0043c3a7: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0043c3ab: MOV EDX,dword ptr [EDI]
// 0043c3ad: XOR EBX,EBX
// 0043c3af: TEST EDX,EDX
// 0043c3b1: JLE 0x0043c3d1
//   XREF to: 0043c3d1 (CONDITIONAL_JUMP)
// 0043c3b3: PUSH ESI
// 0043c3b4: MOV ESI,EDI
// 0043c3b6: PUSH EBP
//   Label: LAB_0043c3b6
// 0043c3b7: MOV ECX,dword ptr [ESI + 0x194]
// 0043c3bd: PUSH ECX
// 0043c3be: ADD ESI,0x4
// 0043c3c1: INC EBX
// 0043c3c2: CALL core_cloth.cpp_FUN_0043e1a0
//   XREF to: 0043e1a0 (UNCONDITIONAL_CALL)
// 0043c3c7: MOV EAX,dword ptr [EDI]
// 0043c3c9: ADD ESP,0x8
// 0043c3cc: CMP EBX,EAX
// 0043c3ce: JL 0x0043c3b6
//   XREF to: 0043c3b6 (CONDITIONAL_JUMP)
// 0043c3d0: POP ESI
// 0043c3d1: POP EBP
//   Label: LAB_0043c3d1
// 0043c3d2: POP EDI
// 0043c3d3: POP EBX
// 0043c3d4: RET
