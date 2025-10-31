// Name: engine_3d.c_badMRGLStruct_FUN_004037b0
// Address: 004037b0
// Address Range: [[004037b0, 004037d7]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_badMRGLStruct_FUN_004037b0(SMRGLHeaderExtended * primitive)
// Globals:
//   TerminatedCString s_engine_3d_c_006133b3
//   TerminatedCString s_Bad_MRGL_struct_006133c2
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_badMRGLStruct_FUN_004037b0(SMRGLHeaderExtended *primitive)

{
  SMRGLHeaderExtended *in_stack_00000008;
  
  g_CurrentFilename = "..\\engine\\3d.c";
  g_CurrentLineNumber = 0x11a;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Bad MRGL struct");
  return in_stack_00000008;
}


// Assembly code:
// 004037b0: MOV EDX,0x6133b3
//   Label: engine_3d.c_badMRGLStruct_FUN_004037b0
//   XREF to: 006133b3 (PARAM)
// 004037b5: MOV ECX,0x11a
// 004037ba: PUSH 0x6133c2
//   XREF to: 006133c2 (DATA)
// 004037bf: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004037c5: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004037cb: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004037d0: ADD ESP,0x4
// 004037d3: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 004037d7: RET
