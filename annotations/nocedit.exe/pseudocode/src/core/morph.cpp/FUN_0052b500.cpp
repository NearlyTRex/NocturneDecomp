// Name: core_morph.cpp_FUN_0052b500
// Address: 0052b500
// Address Range: [[0052b500, 0052b54c]]
// Convention: unknown
// Signature: undefined core_morph.cpp_FUN_0052b500()
// Function calls:
//   core_morph.cpp_CMorphModel_addPart_FUN_0052a580

#include "nocturne.h"

void core_morph_cpp_FUN_0052b500(void)

{
  core_morph_cpp_CMorphModel_addPart_FUN_0052a580();
  return;
}


// Assembly code:
// 0052b500: PUSH EBX
//   Label: core_morph.cpp_FUN_0052b500
// 0052b501: PUSH ESI
// 0052b502: PUSH EDI
// 0052b503: PUSH EBP
// 0052b504: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x20] (READ)
// 0052b508: PUSH EDX
// 0052b509: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x1c] (READ)
// 0052b50d: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x18] (READ)
// 0052b511: PUSH ECX
// 0052b512: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x14] (READ)
// 0052b516: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0052b51a: PUSH 0x48
// 0052b51c: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x10] (READ)
// 0052b520: LEA EAX,[EDX*0x4 + 0x0]
// 0052b527: PUSH EBX
// 0052b528: MOV EBP,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 0052b52c: SUB EAX,EDX
// 0052b52e: PUSH ESI
// 0052b52f: SHL EAX,0x6
// 0052b532: PUSH EDI
// 0052b533: ADD EAX,EDX
// 0052b535: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0052b539: SHL EAX,0x3
// 0052b53c: PUSH EBP
// 0052b53d: ADD EAX,EDX
// 0052b53f: PUSH EAX
// 0052b540: CALL core_morph.cpp_CMorphModel_addPart_FUN_0052a580
//   XREF to: 0052a580 (UNCONDITIONAL_CALL)
// 0052b545: ADD ESP,0x20
// 0052b548: POP EBP
// 0052b549: POP EDI
// 0052b54a: POP ESI
// 0052b54b: POP EBX
// 0052b54c: RET
