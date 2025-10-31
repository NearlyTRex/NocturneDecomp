// Name: core_morph.cpp_CallToCallToMorphAnimate_FUN_0052b640
// Address: 0052b640
// Address Range: [[0052b640, 0052b677]]
// Convention: unknown
// Signature: undefined core_morph.cpp_CallToCallToMorphAnimate_FUN_0052b640()
// Cross-references:
//   core_biggs.cpp_FUN_004189b0 (004189b0) at 00418a43 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_FUN_005c7590 (005c7590) at 005c76c2 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_FUN_005e6da0 (005e6da0) at 005e6ec8 [UNCONDITIONAL_CALL]
// Function calls:
//   core_morph.cpp_CallToMorphModelAnimate_FUN_0052aa80

#include "nocturne.h"

/* Signature: undefined1 core_morph.cpp_CallToCallToMorphAnimate(undefined4 param_1, undefined4
   param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5) */

void core_morph_cpp_CallToCallToMorphAnimate_FUN_0052b640(void)

{
  core_morph_cpp_CallToMorphModelAnimate_FUN_0052aa80();
  return;
}


// Assembly code:
// 0052b640: PUSH EBX
//   Label: core_morph.cpp_CallToCallToMorphAnimate_FUN_0052b640
// 0052b641: PUSH ESI
// 0052b642: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 0052b646: PUSH EDX
// 0052b647: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0052b64b: LEA EAX,[EDX*0x4 + 0x0]
// 0052b652: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0052b656: SUB EAX,EDX
// 0052b658: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 0052b65c: SHL EAX,0x6
// 0052b65f: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0052b663: ADD EAX,EDX
// 0052b665: PUSH ECX
// 0052b666: SHL EAX,0x3
// 0052b669: PUSH EBX
// 0052b66a: ADD EAX,ESI
// 0052b66c: PUSH EAX
// 0052b66d: CALL core_morph.cpp_CallToMorphModelAnimate_FUN_0052aa80
//   XREF to: 0052aa80 (UNCONDITIONAL_CALL)
// 0052b672: ADD ESP,0x10
// 0052b675: POP ESI
// 0052b676: POP EBX
// 0052b677: RET
