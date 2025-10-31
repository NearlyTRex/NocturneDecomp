// Name: engine_drender.cpp_CDemonRenderer_setProjectionMode_FUN_0048a700
// Address: 0048a700
// Address Range: [[0048a700, 0048a734]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setProjectionMode_FUN_0048a700(CDemonRenderer * this_ptr, int mode)
// Globals:
//   TerminatedCString s_engine_drender_cpp_00621f2d
//   TerminatedCString s_Ortho_isn_t_supported_an_00621f43
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setProjectionMode_FUN_0048a700(CDemonRenderer *this_ptr,int mode)

{
  this_ptr->projection_mode = mode;
  if (mode != 1) {
    return;
  }
  g_CurrentFilename = "..\\engine\\drender.cpp";
  g_CurrentLineNumber = 0x9c;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Ortho isn't supported any more");
  return;
}


// Assembly code:
// 0048a700: MOV EAX,dword ptr [ESP + 0x8]
//   Label: engine_drender.cpp_CDemonRenderer_setProjectionMode_FUN_0048a700
//   XREF to: Stack[0x8] (READ)
// 0048a704: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0048a708: MOV dword ptr [EDX + 0x8],EAX
// 0048a70b: CMP EAX,0x1
// 0048a70e: JZ 0x0048a711
//   XREF to: 0048a711 (CONDITIONAL_JUMP)
// 0048a710: RET
// 0048a711: MOV EDX,0x621f2d
//   Label: LAB_0048a711
//   XREF to: 00621f2d (DATA)
// 0048a716: MOV ECX,0x9c
// 0048a71b: PUSH 0x621f43
//   XREF to: 00621f43 (DATA)
// 0048a720: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0048a726: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0048a72c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0048a731: ADD ESP,0x4
// 0048a734: RET
