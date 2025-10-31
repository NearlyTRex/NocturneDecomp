// Name: core_motion.cpp_FUN_0052dc80
// Address: 0052dc80
// Address Range: [[0052dc80, 0052dca5]]
// Convention: unknown
// Signature: undefined core_motion.cpp_FUN_0052dc80()
// Globals:
//   TerminatedCString s_core_motion_cpp_0063aa97
//   TerminatedCString s_CMotionController_findPa_0063aaaa
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

undefined4 core_motion_cpp_FUN_0052dc80(void)

{
  g_CurrentFilename = "..\\core\\motion.cpp";
  g_CurrentLineNumber = 0x2ca;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CMotionController::findPatchToFrame should never be called for this base class!");
  return 0;
}


// Assembly code:
// 0052dc80: MOV EDX,0x63aa97
//   Label: core_motion.cpp_FUN_0052dc80
//   XREF to: 0063aa97 (DATA)
// 0052dc85: MOV ECX,0x2ca
// 0052dc8a: PUSH 0x63aaaa
//   XREF to: 0063aaaa (DATA)
// 0052dc8f: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0052dc95: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0052dc9b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052dca0: ADD ESP,0x4
// 0052dca3: XOR EAX,EAX
// 0052dca5: RET
