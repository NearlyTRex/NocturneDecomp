// Name: core_msnedit.cpp_CDemonMission_makeOptimizedPalette_FUN_0053ccc0
// Address: 0053ccc0
// Address Range: [[0053ccc0, 0053cce3]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_CDemonMission_makeOptimizedPalette_FUN_0053ccc0()
// Globals:
//   TerminatedCString s_core_msnedit_cpp_0063c8a1
//   TerminatedCString s_CDemonMission_makeOptimi_0063c8b5
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void core_msnedit_cpp_CDemonMission_makeOptimizedPalette_FUN_0053ccc0(void)

{
  g_CurrentFilename = "..\\core\\msnedit.cpp";
  g_CurrentLineNumber = 3000;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::makeOptimizedPalette - no longer used");
  return;
}


// Assembly code:
// 0053ccc0: MOV EDX,0x63c8a1
//   Label: core_msnedit.cpp_CDemonMission_makeOptimizedPalette_FUN_0053ccc0
//   XREF to: 0063c8a1 (DATA)
// 0053ccc5: MOV ECX,0xbb8
// 0053ccca: PUSH 0x63c8b5
//   XREF to: 0063c8b5 (DATA)
// 0053cccf: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0053ccd5: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0053ccdb: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0053cce0: ADD ESP,0x4
// 0053cce3: RET
