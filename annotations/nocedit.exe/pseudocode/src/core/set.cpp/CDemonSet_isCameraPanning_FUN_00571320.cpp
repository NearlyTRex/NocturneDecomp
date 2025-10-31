// Name: core_set.cpp_CDemonSet_isCameraPanning_FUN_00571320
// Address: 00571320
// Address Range: [[00571320, 00571378]]
// Convention: __cdecl
// Signature: int core_set.cpp_CDemonSet_isCameraPanning_FUN_00571320(CDemonSet * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c81b [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056fbd0 (0056fbd0) at 0056fd8a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_set_cpp_00646176
//   TerminatedCString s_CDemonSet_isCameraPannin_00646186
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_isCameraPanning_FUN_00571320(CDemonSet *this_ptr)

{
  if (-1 < this_ptr->selected_camera_index) {
    return this_ptr->cameras[this_ptr->selected_camera_index].is_panning;
  }
  g_CurrentFilename = "..\\core\\set.cpp";
  g_CurrentLineNumber = 0x138b;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::isCameraPanning - no camera selected");
  return this_ptr->cameras[this_ptr->selected_camera_index].is_panning;
}


// Assembly code:
// 00571320: PUSH EBX
//   Label: core_set.cpp_CDemonSet_isCameraPanning_FUN_00571320
// 00571321: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00571325: CMP dword ptr [EBX + 0x15aea4],0x0
// 0057132c: JL 0x00571341
//   XREF to: 00571341 (CONDITIONAL_JUMP)
// 0057132e: IMUL EAX,dword ptr [EBX + 0x15aea4],0x1a4
// 00571338: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x144]
// 0057133f: POP EBX
// 00571340: RET
// 00571341: PUSH ESI
//   Label: LAB_00571341
// 00571342: MOV ECX,0x646176
//   XREF to: 00646176 (PARAM)
// 00571347: MOV ESI,0x138b
// 0057134c: PUSH 0x646186
//   XREF to: 00646186 (DATA)
// 00571351: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00571357: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0057135d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00571362: ADD ESP,0x4
// 00571365: POP ESI
// 00571366: IMUL EAX,dword ptr [EBX + 0x15aea4],0x1a4
// 00571370: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x144]
// 00571377: POP EBX
// 00571378: RET
