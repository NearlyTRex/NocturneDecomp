// Name: crt_unknown.c_FUN_0060b106
// Address: 0060b106
// Address Range: [[0060b106, 0060b132]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060b106()
// Function calls:
//   crt_unknown.c_FUN_0060d480
//   crt_unknown.c_FUN_0060d48c

#include "nocturne.h"

void crt_unknown_c_FUN_0060b106(void)

{
  crt_unknown_c_FUN_0060d480();
  crt_unknown_c_FUN_0060d48c();
  crt_unknown_c_FUN_0060b0c8();
  return;
}


// Assembly code:
// 0060b106: PUSH EBP
//   Label: crt_unknown.c_FUN_0060b106
// 0060b107: MOV EBP,ESP
// 0060b109: PUSH EBX
// 0060b10a: PUSH ESI
// 0060b10b: PUSH EDI
// 0060b10c: CALL crt_unknown.c_FUN_0060d480
//   XREF to: 0060d480 (UNCONDITIONAL_CALL)
// 0060b111: PUSH EAX
// 0060b112: PUSH 0x47
// 0060b114: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 0060b117: PUSH EDX
// 0060b118: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 0060b11b: PUSH EBX
// 0060b11c: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0060b11f: PUSH ECX
// 0060b120: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0060b123: PUSH ESI
// 0060b124: MOV EDI,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060b127: PUSH EDI
// 0060b128: CALL crt_unknown.c_FUN_0060d48c
//   XREF to: 0060d48c (UNCONDITIONAL_CALL)
// 0060b12d: ADD ESP,0x1c
// 0060b130: MOV EDX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
