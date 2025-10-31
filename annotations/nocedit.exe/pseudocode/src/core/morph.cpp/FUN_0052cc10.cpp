// Name: core_morph.cpp_FUN_0052cc10
// Address: 0052cc10
// Address Range: [[0052cc10, 0052cc38]]
// Convention: unknown
// Signature: undefined core_morph.cpp_FUN_0052cc10()
// Function calls:
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void core_morph_cpp_FUN_0052cc10(void)

{
  int *in_stack_00000004;
  int in_stack_00000008;
  CVector3i *in_stack_0000000c;
  
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            ((SProjectedVertex *)(in_stack_00000008 * 0x30 + *in_stack_00000004),in_stack_0000000c);
  return;
}


// Assembly code:
// 0052cc10: PUSH EBX
//   Label: core_morph.cpp_FUN_0052cc10
// 0052cc11: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0052cc15: PUSH EDX
// 0052cc16: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0052cc1a: LEA EAX,[EDX*0x4 + 0x0]
// 0052cc21: SUB EAX,EDX
// 0052cc23: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052cc27: SHL EAX,0x4
// 0052cc2a: MOV EDX,dword ptr [EDX]
// 0052cc2c: ADD EAX,EDX
// 0052cc2e: PUSH EAX
// 0052cc2f: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0052cc34: ADD ESP,0x8
// 0052cc37: POP EBX
// 0052cc38: RET
