// Name: core_morph.cpp_FUN_0052b370
// Address: 0052b370
// Address Range: [[0052b370, 0052b3c5]]
// Convention: unknown
// Signature: undefined core_morph.cpp_FUN_0052b370()
// Function calls:
//   core_morph.cpp_CMorphModel_addPart_FUN_0052a580
//   core_morph.cpp_CMorphModel_free_FUN_0052a510

#include "nocturne.h"

/* Signature: undefined1 core_morph.cpp_FUN_0052b370(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4
   param_7, undefined4 param_8) */

void core_morph_cpp_FUN_0052b370(void)

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
// 0052b370: PUSH EBX
//   Label: core_morph.cpp_FUN_0052b370
// 0052b371: PUSH ESI
// 0052b372: PUSH EDI
// 0052b373: PUSH EBP
// 0052b374: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0052b378: LEA EAX,[EDX*0x4 + 0x0]
// 0052b37f: SUB EAX,EDX
// 0052b381: SHL EAX,0x6
// 0052b384: ADD EAX,EDX
// 0052b386: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052b38a: SHL EAX,0x3
// 0052b38d: ADD EBX,EAX
// 0052b38f: PUSH EBX
// 0052b390: CALL core_morph.cpp_CMorphModel_free_FUN_0052a510
//   XREF to: 0052a510 (UNCONDITIONAL_CALL)
// 0052b395: ADD ESP,0x4
// 0052b398: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x20] (READ)
// 0052b39c: PUSH EDX
// 0052b39d: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x1c] (READ)
// 0052b3a1: PUSH ECX
// 0052b3a2: PUSH 0x3c
// 0052b3a4: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x18] (READ)
// 0052b3a8: PUSH ESI
// 0052b3a9: MOV EDI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x14] (READ)
// 0052b3ad: PUSH EDI
// 0052b3ae: MOV EBP,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x10] (READ)
// 0052b3b2: PUSH EBP
// 0052b3b3: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 0052b3b7: PUSH EAX
// 0052b3b8: PUSH EBX
// 0052b3b9: CALL core_morph.cpp_CMorphModel_addPart_FUN_0052a580
//   XREF to: 0052a580 (UNCONDITIONAL_CALL)
// 0052b3be: ADD ESP,0x20
// 0052b3c1: POP EBP
// 0052b3c2: POP EDI
// 0052b3c3: POP ESI
// 0052b3c4: POP EBX
// 0052b3c5: RET
