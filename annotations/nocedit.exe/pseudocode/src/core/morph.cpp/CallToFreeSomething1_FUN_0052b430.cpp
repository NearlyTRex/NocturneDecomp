// Name: core_morph.cpp_CallToFreeSomething1_FUN_0052b430
// Address: 0052b430
// Address Range: [[0052b430, 0052b464]]
// Convention: unknown
// Signature: undefined core_morph.cpp_CallToFreeSomething1_FUN_0052b430()
// Cross-references:
//   core_biggs.cpp_FUN_00418680 (00418680) at 004186b8 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_setup_FUN_0051f3e0 (0051f3e0) at 0051f653 [UNCONDITIONAL_CALL]
//   core_moloch.cpp_FUN_00528c70 (00528c70) at 00528ce7 [UNCONDITIONAL_CALL]
//   core_moloch.cpp_FUN_00528d20 (00528d20) at 00529330 [UNCONDITIONAL_CALL]
//   core_morph.cpp_Select1stModel_Select2ndModel_Loading_FUN_0052bcb0 (0052bcb0) at 0052c481 [UNCONDITIONAL_CALL]
//   core_passngr.cpp_FUN_00545d30 (00545d30) at 00545da1 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_FUN_005c6b60 (005c6b60) at 005c6dc9 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_FUN_005e56c0 (005e56c0) at 005e5827 [UNCONDITIONAL_CALL]
// Function calls:
//   core_morph.cpp_CallToAddpartAgain_FUN_0052a870
//   core_morph.cpp_CMorphModel_FreeSomething1_FUN_0052a510

#include "nocturne.h"

/* Signature: undefined1 core_morph.cpp_CallToFreeSomething1(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void core_morph_cpp_CallToFreeSomething1_FUN_0052b430(void)

{
  core_morph_cpp_CMorphModel_FreeSomething1_FUN_0052a510();
  core_morph_cpp_CallToAddpartAgain_FUN_0052a870();
  return;
}


// Assembly code:
// 0052b430: PUSH EBX
//   Label: core_morph.cpp_CallToFreeSomething1_FUN_0052b430
// 0052b431: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0052b435: LEA EAX,[EDX*0x4 + 0x0]
// 0052b43c: SUB EAX,EDX
// 0052b43e: SHL EAX,0x6
// 0052b441: ADD EAX,EDX
// 0052b443: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0052b447: SHL EAX,0x3
// 0052b44a: ADD EBX,EAX
// 0052b44c: PUSH EBX
// 0052b44d: CALL core_morph.cpp_CMorphModel_FreeSomething1_FUN_0052a510
//   XREF to: 0052a510 (UNCONDITIONAL_CALL)
// 0052b452: ADD ESP,0x4
// 0052b455: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0052b459: PUSH EDX
// 0052b45a: PUSH EBX
// 0052b45b: CALL core_morph.cpp_CallToAddpartAgain_FUN_0052a870
//   XREF to: 0052a870 (UNCONDITIONAL_CALL)
// 0052b460: ADD ESP,0x8
// 0052b463: POP EBX
// 0052b464: RET
