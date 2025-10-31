// Name: core_morph.cpp_CallToFreeSomething2_FUN_0052b470
// Address: 0052b470
// Address Range: [[0052b470, 0052b4a9]]
// Convention: unknown
// Signature: undefined core_morph.cpp_CallToFreeSomething2_FUN_0052b470()
// Cross-references:
//   core_biggs.cpp_FUN_00418680 (00418680) at 004186cf [UNCONDITIONAL_CALL]
// Function calls:
//   core_morph.cpp_CMorphModel_CallMorphModel_addPart1_FUN_0052a8d0
//   core_morph.cpp_CMorphModel_FreeSomething1_FUN_0052a510

#include "nocturne.h"

/* Signature: undefined1 core_morph.cpp_CallToFreeSomething2(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4) */

void core_morph_cpp_CallToFreeSomething2_FUN_0052b470(void)

{
  core_morph_cpp_CMorphModel_FreeSomething1_FUN_0052a510();
  core_morph_cpp_CMorphModel_CallMorphModel_addPart1_FUN_0052a8d0();
  return;
}


// Assembly code:
// 0052b470: PUSH EBX
//   Label: core_morph.cpp_CallToFreeSomething2_FUN_0052b470
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
// 0052b48d: CALL core_morph.cpp_CMorphModel_FreeSomething1_FUN_0052a510
//   XREF to: 0052a510 (UNCONDITIONAL_CALL)
// 0052b492: ADD ESP,0x4
// 0052b495: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 0052b499: PUSH EDX
// 0052b49a: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0052b49e: PUSH ECX
// 0052b49f: PUSH EBX
// 0052b4a0: CALL core_morph.cpp_CMorphModel_CallMorphModel_addPart1_FUN_0052a8d0
//   XREF to: 0052a8d0 (UNCONDITIONAL_CALL)
// 0052b4a5: ADD ESP,0xc
// 0052b4a8: POP EBX
// 0052b4a9: RET
