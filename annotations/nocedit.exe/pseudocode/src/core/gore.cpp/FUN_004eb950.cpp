// Name: core_gore.cpp_FUN_004eb950
// Address: 004eb950
// Address Range: [[004eb950, 004eb99c]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004eb950()

#include "nocturne.h"

void core_gore_cpp_FUN_004eb950(void)

{
  uint in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  undefined4 *in_stack_00000010;
  
  if (in_stack_00000004 != 0) {
    if (in_stack_00000004 < 2) {
      *in_stack_00000008 = 0;
      *in_stack_0000000c = 0x7f80;
      *in_stack_00000010 = 0;
      return;
    }
    if (in_stack_00000004 == 2) {
      *in_stack_00000008 = 0;
      goto LAB_004eb973;
    }
  }
  *in_stack_00000008 = 0x2000;
LAB_004eb973:
  *in_stack_0000000c = 0;
  *in_stack_00000010 = 0;
  return;
}


// Assembly code:
// 004eb950: PUSH EBX
//   Label: core_gore.cpp_FUN_004eb950
// 004eb951: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004eb955: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004eb959: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004eb95d: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 004eb961: CMP EAX,0x1
// 004eb964: JC 0x004eb981
//   XREF to: 004eb981 (CONDITIONAL_JUMP)
// 004eb966: JBE 0x004eb989
//   XREF to: 004eb989 (CONDITIONAL_JUMP)
// 004eb968: CMP EAX,0x2
// 004eb96b: JNZ 0x004eb981
//   XREF to: 004eb981 (CONDITIONAL_JUMP)
// 004eb96d: MOV dword ptr [EDX],0x0
// 004eb973: MOV dword ptr [EBX],0x0
//   Label: LAB_004eb973
// 004eb979: MOV dword ptr [ECX],0x0
// 004eb97f: POP EBX
// 004eb980: RET
// 004eb981: MOV dword ptr [EDX],0x2000
//   Label: LAB_004eb981
// 004eb987: JMP 0x004eb973
//   XREF to: 004eb973 (UNCONDITIONAL_JUMP)
// 004eb989: MOV dword ptr [EDX],0x0
//   Label: LAB_004eb989
// 004eb98f: MOV dword ptr [EBX],0x7f80
// 004eb995: MOV dword ptr [ECX],0x0
// 004eb99b: POP EBX
// 004eb99c: RET
