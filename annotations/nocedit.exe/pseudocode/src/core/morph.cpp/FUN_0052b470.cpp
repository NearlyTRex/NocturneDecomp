// Name: core_morph.cpp_FUN_0052b470
// Address: 0052b470
// Address Range: [[0052b470, 0052b4a9]]
// Convention: __cdecl
// Signature: void core_morph.cpp_FUN_0052b470(void)
// Cross-references:
//   core_biggs.cpp_FUN_00418680 (00418680) at 004186cf [UNCONDITIONAL_CALL]
// Function calls:
//   core_morph.cpp_CMorphModel_free_FUN_0052a510
//   core_morph.cpp_CMorphModel_FUN_0052a8d0

#include "nocturne.h"

void __cdecl core_morph_cpp_FUN_0052b470(void)

{
  CMorphModel *this_ptr;
  int in_stack_00000004;
  int in_stack_00000008;
  
  this_ptr = (CMorphModel *)(in_stack_00000004 + in_stack_00000008 * 0x608);
  core_morph_cpp_CMorphModel_free_FUN_0052a510(this_ptr);
  core_morph_cpp_CMorphModel_FUN_0052a8d0(this_ptr);
  return;
}


// Assembly code:
// 0052b470: PUSH EBX
//   Label: core_morph.cpp_FUN_0052b470
// 0052b471: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0052b475: LEA EAX,[EDX*0x4 + 0x0]
// 0052b47c: SUB EAX,EDX
// 0052b47e: SHL EAX,0x6
// 0052b481: ADD EAX,EDX
// 0052b483: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0052b487: SHL EAX,0x3
// 0052b48a: ADD EBX,EAX
// 0052b48c: PUSH EBX
// 0052b48d: CALL core_morph.cpp_CMorphModel_free_FUN_0052a510
//   XREF to: 0052a510 (UNCONDITIONAL_CALL)
// 0052b492: ADD ESP,0x4
// 0052b495: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 0052b499: PUSH EDX
// 0052b49a: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0052b49e: PUSH ECX
// 0052b49f: PUSH EBX
// 0052b4a0: CALL core_morph.cpp_CMorphModel_FUN_0052a8d0
//   XREF to: 0052a8d0 (UNCONDITIONAL_CALL)
// 0052b4a5: ADD ESP,0xc
// 0052b4a8: POP EBX
// 0052b4a9: RET
