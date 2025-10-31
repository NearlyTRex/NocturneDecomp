// Name: engine_pod.cpp_CPod_init_FUN_00550c30
// Address: 00550c30
// Address Range: [[00550c30, 00550c78]]
// Convention: __cdecl
// Signature: void engine_pod.cpp_CPod_init_FUN_00550c30(CPod * this_ptr)
// Cross-references:
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 00507b58 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_pod_cpp_00640746
//   TerminatedCString s_CPod_init_No_POD_to_init_00640758
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_init_FUN_00550c30(CPod *this_ptr)

{
  if (this_ptr == (CPod *)0x0) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 0x3e1;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPod::init - No .POD to init!");
    if (iRam00000000 != 0) {
      return;
    }
  }
  else if (this_ptr->pod_file_count != 0) {
    return;
  }
  (*this_ptr->vtable->load)(this_ptr);
  return;
}


// Assembly code:
// 00550c30: PUSH EBX
//   Label: engine_pod.cpp_CPod_init_FUN_00550c30
// 00550c31: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00550c35: TEST EBX,EBX
// 00550c37: JZ 0x00550c40
//   XREF to: 00550c40 (CONDITIONAL_JUMP)
// 00550c39: CMP dword ptr [EBX],0x0
// 00550c3c: JZ 0x00550c6a
//   XREF to: 00550c6a (CONDITIONAL_JUMP)
// 00550c3e: POP EBX
// 00550c3f: RET
// 00550c40: MOV EDX,0x640746
//   Label: LAB_00550c40
//   XREF to: 00640746 (PARAM)
// 00550c45: MOV ECX,0x3e1
// 00550c4a: PUSH 0x640758
//   XREF to: 00640758 (DATA)
// 00550c4f: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00550c55: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00550c5b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00550c60: ADD ESP,0x4
// 00550c63: CMP dword ptr [EBX],0x0
// 00550c66: JZ 0x00550c6a
//   XREF to: 00550c6a (CONDITIONAL_JUMP)
// 00550c68: POP EBX
// 00550c69: RET
// 00550c6a: PUSH EBX
//   Label: LAB_00550c6a
// 00550c6b: MOV EAX,dword ptr [EBX + 0x194]
// 00550c71: CALL dword ptr [EAX + 0x4]
// 00550c74: ADD ESP,0x4
// 00550c77: POP EBX
// 00550c78: RET
