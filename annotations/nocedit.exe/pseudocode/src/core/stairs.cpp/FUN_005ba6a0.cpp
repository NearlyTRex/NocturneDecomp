// Name: core_stairs.cpp_FUN_005ba6a0
// Address: 005ba6a0
// Address Range: [[005ba6a0, 005ba6ea]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005ba6a0()
// Function calls:
//   core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0

#include "nocturne.h"

/* Signature: undefined1 actors_other_stairs.cpp_FUN_005ba6a0(undefined4 param_1, undefined4
   param_2, undefined4 param_3, undefined4 param_4) */

undefined4 core_stairs_cpp_FUN_005ba6a0(void)

{
  int iVar1;
  int iVar2;
  CDemonTriangle *triangle;
  undefined4 uVar3;
  int in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  float *in_stack_00000010;
  
  triangle = (CDemonTriangle *)(in_stack_00000004 + 0x170);
  uVar3 = 0;
  for (iVar2 = 0;
      SBORROW4(iVar2,*(int *)(in_stack_00000004 + 0x16c) * 2) !=
      iVar2 + *(int *)(in_stack_00000004 + 0x16c) * -2 < 0; iVar2 = iVar2 + 1) {
    iVar1 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                      (triangle,in_stack_00000008,in_stack_0000000c,in_stack_00000010);
    if (iVar1 != 0) {
      uVar3 = 1;
    }
    triangle = triangle + 1;
  }
  return uVar3;
}


// Assembly code:
// 005ba6a0: PUSH EBX
//   Label: core_stairs.cpp_FUN_005ba6a0
// 005ba6a1: PUSH ESI
// 005ba6a2: PUSH EDI
// 005ba6a3: PUSH EBP
// 005ba6a4: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005ba6a8: LEA ESI,[EBP + 0x170]
// 005ba6ae: XOR EBX,EBX
// 005ba6b0: XOR EDI,EDI
// 005ba6b2: MOV EAX,dword ptr [EBP + 0x16c]
//   Label: LAB_005ba6b2
// 005ba6b8: ADD EAX,EAX
// 005ba6ba: CMP EBX,EAX
// 005ba6bc: JL 0x005ba6c5
//   XREF to: 005ba6c5 (CONDITIONAL_JUMP)
// 005ba6be: MOV EAX,EDI
// 005ba6c0: POP EBP
// 005ba6c1: POP EDI
// 005ba6c2: POP ESI
// 005ba6c3: POP EBX
// 005ba6c4: RET
// 005ba6c5: MOV EDX,dword ptr [ESP + 0x20]
//   Label: LAB_005ba6c5
//   XREF to: Stack[0x10] (READ)
// 005ba6c9: PUSH EDX
// 005ba6ca: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 005ba6ce: PUSH dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 005ba6d2: PUSH ECX
// 005ba6d3: PUSH ESI
// 005ba6d4: CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0
//   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)
// 005ba6d9: ADD ESP,0x10
// 005ba6dc: TEST EAX,EAX
// 005ba6de: JZ 0x005ba6e5
//   XREF to: 005ba6e5 (CONDITIONAL_JUMP)
// 005ba6e0: MOV EDI,0x1
// 005ba6e5: INC EBX
//   Label: LAB_005ba6e5
// 005ba6e6: ADD ESI,0x38
// 005ba6e9: JMP 0x005ba6b2
//   XREF to: 005ba6b2 (UNCONDITIONAL_JUMP)
