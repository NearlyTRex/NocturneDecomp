// Name: core_stranger.cpp_CStranger_FUN_005bfb10
// Address: 005bfb10
// Address Range: [[005bfb10, 005bfb54]]
// Convention: __cdecl
// Signature: void core_stranger.cpp_CStranger_FUN_005bfb10(CStranger * this_ptr)
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_004285d0

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005bfb10(CStranger *this_ptr)

{
  core_charactr_cpp_CCharacter_FUN_004285d0((CCharacter *)this_ptr);
  return;
}


// Assembly code:
// 005bfb10: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005bfb10
// 005bfb11: PUSH ESI
// 005bfb12: SUB ESP,0xc
// 005bfb15: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 005bfb19: MOV EAX,dword ptr [EDX]
// 005bfb1b: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 005bfb1e: LEA EAX,[EDX + 0x4]
// 005bfb21: MOV EAX,dword ptr [EAX]
// 005bfb23: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005bfb27: LEA EAX,[EDX + 0x8]
// 005bfb2a: MOV EAX,dword ptr [EAX]
// 005bfb2c: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 005bfb30: MOV EAX,ESP
// 005bfb32: PUSH EAX
// 005bfb33: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 005bfb37: PUSH EBX
// 005bfb38: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005bfb3c: XOR EDX,EDX
// 005bfb3e: PUSH ESI
// 005bfb3f: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005bfb43: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0xc] (WRITE)
// 005bfb47: CALL core_charactr.cpp_CCharacter_FUN_004285d0
//   XREF to: 004285d0 (UNCONDITIONAL_CALL)
// 005bfb4c: ADD ESP,0xc
// 005bfb4f: ADD ESP,0xc
// 005bfb52: POP ESI
// 005bfb53: POP EBX
// 005bfb54: RET
