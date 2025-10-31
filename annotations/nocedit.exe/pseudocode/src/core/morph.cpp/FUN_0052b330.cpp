// Name: core_morph.cpp_FUN_0052b330
// Address: 0052b330
// Address Range: [[0052b330, 0052b34c]]
// Convention: unknown
// Signature: undefined core_morph.cpp_FUN_0052b330()
// Cross-references:
//   core_biggs.cpp_CBiggs_dtor_FUN_00418d10 (00418d10) at 00418d29 [UNCONDITIONAL_CALL]
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 005078ca [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051f2c0 (0051f2c0) at 0051f31f [UNCONDITIONAL_CALL]
//   core_moloch.cpp_CMoloch_dtor_FUN_00528bf0 (00528bf0) at 00528c0f [UNCONDITIONAL_CALL]
//   core_passngr.cpp_CPassenger_dtor_FUN_00545c10 (00545c10) at 00545c6a [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_dtor_FUN_005c7820 (005c7820) at 005c7839 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_dtor_FUN_005e7700 (005e7700) at 005e7719 [UNCONDITIONAL_CALL]
// Function calls:
//   core_morph.cpp_CMorphModel_CallToFreeSomething1_FUN_0052b350
//   core_morph.cpp_FUN_0052cd10

#include "nocturne.h"

/* Signature: undefined1 core_morph.cpp_FUN_0052b330(undefined4 param_1) */

void core_morph_cpp_FUN_0052b330(void)

{
  core_morph_cpp_CMorphModel_CallToFreeSomething1_FUN_0052b350();
  core_morph_cpp_FUN_0052cd10();
  return;
}


// Assembly code:
// 0052b330: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_morph.cpp_FUN_0052b330
//   XREF to: Stack[0x4] (READ)
// 0052b334: PUSH EDX
// 0052b335: CALL core_morph.cpp_CMorphModel_CallToFreeSomething1_FUN_0052b350
//   XREF to: 0052b350 (UNCONDITIONAL_CALL)
// 0052b33a: ADD ESP,0x4
// 0052b33d: PUSH 0x0
// 0052b33f: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0052b343: PUSH ECX
// 0052b344: CALL core_morph.cpp_FUN_0052cd10
//   XREF to: 0052cd10 (UNCONDITIONAL_CALL)
// 0052b349: ADD ESP,0x8
// 0052b34c: RET
