// Name: core_morph.cpp_CMorphModel_FUN_0052aa00
// Address: 0052aa00
// Address Range: [[0052aa00, 0052aa27]]
// Convention: __cdecl
// Signature: void core_morph.cpp_CMorphModel_FUN_0052aa00(CMorphModel * this_ptr)
// Cross-references:
//   core_morph.cpp_FUN_0052b5c0 (0052b5c0) at 0052b5e7 [UNCONDITIONAL_CALL]
// Function calls:
//   core_morph.cpp_CMorphModel_animate_FUN_0052a920

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_FUN_0052aa00(CMorphModel *this_ptr)

{
  core_morph_cpp_CMorphModel_animate_FUN_0052a920(this_ptr);
  return;
}


// Assembly code:
// 0052aa00: PUSH EBX
//   Label: core_morph.cpp_CMorphModel_FUN_0052aa00
// 0052aa01: PUSH ESI
// 0052aa02: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052aa06: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0052aa0a: MOV EAX,ECX
// 0052aa0c: SHL EAX,0x4
// 0052aa0f: MOV EBX,dword ptr [EDX + EAX*0x1 + 0x4]
// 0052aa13: PUSH EBX
// 0052aa14: PUSH 0x0
// 0052aa16: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0052aa1a: PUSH ESI
// 0052aa1b: PUSH ECX
// 0052aa1c: PUSH EDX
// 0052aa1d: CALL core_morph.cpp_CMorphModel_animate_FUN_0052a920
//   XREF to: 0052a920 (UNCONDITIONAL_CALL)
// 0052aa22: ADD ESP,0x14
// 0052aa25: POP ESI
// 0052aa26: POP EBX
// 0052aa27: RET
