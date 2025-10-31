// Name: core_morph.cpp_FUN_0052b550
// Address: 0052b550
// Address Range: [[0052b550, 0052b579]]
// Convention: unknown
// Signature: undefined core_morph.cpp_FUN_0052b550()
// Function calls:
//   core_morph.cpp_CallToAddpartAgain_FUN_0052a870

#include "nocturne.h"

void core_morph_cpp_FUN_0052b550(void)

{
  core_morph_cpp_CallToAddpartAgain_FUN_0052a870();
  return;
}


// Assembly code:
// 0052b550: MOV EDX,dword ptr [ESP + 0xc]
//   Label: core_morph.cpp_FUN_0052b550
//   XREF to: Stack[0xc] (READ)
// 0052b554: PUSH EDX
// 0052b555: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0052b559: LEA EAX,[EDX*0x4 + 0x0]
// 0052b560: SUB EAX,EDX
// 0052b562: SHL EAX,0x6
// 0052b565: ADD EAX,EDX
// 0052b567: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0052b56b: SHL EAX,0x3
// 0052b56e: ADD EAX,ECX
// 0052b570: PUSH EAX
// 0052b571: CALL core_morph.cpp_CallToAddpartAgain_FUN_0052a870
//   XREF to: 0052a870 (UNCONDITIONAL_CALL)
// 0052b576: ADD ESP,0x8
// 0052b579: RET
