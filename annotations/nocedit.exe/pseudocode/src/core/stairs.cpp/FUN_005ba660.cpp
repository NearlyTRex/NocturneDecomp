// Name: core_stairs.cpp_FUN_005ba660
// Address: 005ba660
// Address Range: [[005ba660, 005ba694]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005ba660()
// Function calls:
//   core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80

#include "nocturne.h"

/* Signature: undefined1 actors_other_stairs.cpp_FUN_005ba660(undefined4 param_1, undefined4
   param_2) */

void core_stairs_cpp_FUN_005ba660(void)

{
  int iVar1;
  CDemonTriangle *triangle;
  int in_stack_00000004;
  SIntersectXZCylinder *in_stack_00000008;
  
  triangle = (CDemonTriangle *)(in_stack_00000004 + 0x170);
  for (iVar1 = 0;
      SBORROW4(iVar1,*(int *)(in_stack_00000004 + 0x16c) * 2) !=
      iVar1 + *(int *)(in_stack_00000004 + 0x16c) * -2 < 0; iVar1 = iVar1 + 1) {
    core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80(triangle,in_stack_00000008);
    triangle = triangle + 1;
  }
  return;
}


// Assembly code:
// 005ba660: PUSH EBX
//   Label: core_stairs.cpp_FUN_005ba660
// 005ba661: PUSH ESI
// 005ba662: PUSH EDI
// 005ba663: PUSH EBP
// 005ba664: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005ba668: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ba66c: LEA ESI,[EDI + 0x170]
// 005ba672: XOR EBX,EBX
// 005ba674: MOV EAX,dword ptr [EDI + 0x16c]
//   Label: LAB_005ba674
// 005ba67a: ADD EAX,EAX
// 005ba67c: CMP EBX,EAX
// 005ba67e: JL 0x005ba685
//   XREF to: 005ba685 (CONDITIONAL_JUMP)
// 005ba680: POP EBP
// 005ba681: POP EDI
// 005ba682: POP ESI
// 005ba683: POP EBX
// 005ba684: RET
// 005ba685: PUSH EBP
//   Label: LAB_005ba685
// 005ba686: PUSH ESI
// 005ba687: INC EBX
// 005ba688: CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80
//   XREF to: 0049ad80 (UNCONDITIONAL_CALL)
// 005ba68d: ADD ESP,0x8
// 005ba690: ADD ESI,0x38
// 005ba693: JMP 0x005ba674
//   XREF to: 005ba674 (UNCONDITIONAL_JUMP)
