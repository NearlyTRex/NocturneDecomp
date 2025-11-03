// Name: core_morph.cpp_FUN_0052b3d0
// Address: 0052b3d0
// Address Range: [[0052b3d0, 0052b425]]
// Convention: unknown
// Signature: undefined core_morph.cpp_FUN_0052b3d0()
// Function calls:
//   core_morph.cpp_CMorphModel_addPart_FUN_0052a580
//   core_morph.cpp_CMorphModel_free_FUN_0052a510

#include "nocturne.h"

void core_morph_cpp_FUN_0052b3d0(void)

{
  CMorphModel *this_ptr;
  int in_stack_00000004;
  int in_stack_00000008;
  
  this_ptr = (CMorphModel *)(in_stack_00000004 + in_stack_00000008 * 0x608);
  core_morph_cpp_CMorphModel_free_FUN_0052a510(this_ptr);
  core_morph_cpp_CMorphModel_addPart_FUN_0052a580(this_ptr);
  return;
}


// Assembly code:
// 0052b3d0: PUSH EBX
//   Label: core_morph.cpp_FUN_0052b3d0
// 0052b3d1: PUSH ESI
// 0052b3d2: PUSH EDI
// 0052b3d3: PUSH EBP
// 0052b3d4: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0052b3d8: LEA EAX,[EDX*0x4 + 0x0]
// 0052b3df: SUB EAX,EDX
// 0052b3e1: SHL EAX,0x6
// 0052b3e4: ADD EAX,EDX
// 0052b3e6: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052b3ea: SHL EAX,0x3
// 0052b3ed: ADD EBX,EAX
// 0052b3ef: PUSH EBX
// 0052b3f0: CALL core_morph.cpp_CMorphModel_free_FUN_0052a510
//   XREF to: 0052a510 (UNCONDITIONAL_CALL)
// 0052b3f5: ADD ESP,0x4
// 0052b3f8: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x20] (READ)
// 0052b3fc: PUSH EDX
// 0052b3fd: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x1c] (READ)
// 0052b401: PUSH ECX
// 0052b402: PUSH 0x48
// 0052b404: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x18] (READ)
// 0052b408: PUSH ESI
// 0052b409: MOV EDI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x14] (READ)
// 0052b40d: PUSH EDI
// 0052b40e: MOV EBP,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x10] (READ)
// 0052b412: PUSH EBP
// 0052b413: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 0052b417: PUSH EAX
// 0052b418: PUSH EBX
// 0052b419: CALL core_morph.cpp_CMorphModel_addPart_FUN_0052a580
//   XREF to: 0052a580 (UNCONDITIONAL_CALL)
// 0052b41e: ADD ESP,0x20
// 0052b421: POP EBP
// 0052b422: POP EDI
// 0052b423: POP ESI
// 0052b424: POP EBX
// 0052b425: RET
