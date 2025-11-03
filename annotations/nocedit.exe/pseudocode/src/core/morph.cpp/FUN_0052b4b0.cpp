// Name: core_morph.cpp_FUN_0052b4b0
// Address: 0052b4b0
// Address Range: [[0052b4b0, 0052b4fc]]
// Convention: unknown
// Signature: undefined core_morph.cpp_FUN_0052b4b0()
// Function calls:
//   core_morph.cpp_CMorphModel_addPart_FUN_0052a580

#include "nocturne.h"

void core_morph_cpp_FUN_0052b4b0(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  core_morph_cpp_CMorphModel_addPart_FUN_0052a580
            ((CMorphModel *)(in_stack_00000008 * 0x608 + in_stack_00000004));
  return;
}


// Assembly code:
// 0052b4b0: PUSH EBX
//   Label: core_morph.cpp_FUN_0052b4b0
// 0052b4b1: PUSH ESI
// 0052b4b2: PUSH EDI
// 0052b4b3: PUSH EBP
// 0052b4b4: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x20] (READ)
// 0052b4b8: PUSH EDX
// 0052b4b9: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x1c] (READ)
// 0052b4bd: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x18] (READ)
// 0052b4c1: PUSH ECX
// 0052b4c2: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x14] (READ)
// 0052b4c6: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0052b4ca: PUSH 0x3c
// 0052b4cc: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x10] (READ)
// 0052b4d0: LEA EAX,[EDX*0x4 + 0x0]
// 0052b4d7: PUSH EBX
// 0052b4d8: MOV EBP,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 0052b4dc: SUB EAX,EDX
// 0052b4de: PUSH ESI
// 0052b4df: SHL EAX,0x6
// 0052b4e2: PUSH EDI
// 0052b4e3: ADD EAX,EDX
// 0052b4e5: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0052b4e9: SHL EAX,0x3
// 0052b4ec: PUSH EBP
// 0052b4ed: ADD EAX,EDX
// 0052b4ef: PUSH EAX
// 0052b4f0: CALL core_morph.cpp_CMorphModel_addPart_FUN_0052a580
//   XREF to: 0052a580 (UNCONDITIONAL_CALL)
// 0052b4f5: ADD ESP,0x20
// 0052b4f8: POP EBP
// 0052b4f9: POP EDI
// 0052b4fa: POP ESI
// 0052b4fb: POP EBX
// 0052b4fc: RET
