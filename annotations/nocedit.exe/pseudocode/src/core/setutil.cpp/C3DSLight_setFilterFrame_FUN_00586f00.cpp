// Name: core_setutil.cpp_C3DSLight_setFilterFrame_FUN_00586f00
// Address: 00586f00
// Address Range: [[00586f00, 00586f93]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSLight_setFilterFrame_FUN_00586f00(C3DSLight * this_ptr, int frame_index, CDemonLight * light)
// Cross-references:
//   core_event.cpp_CEventList_FUN_004aacc0 (004aacc0) at 004acb86 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_setutil_cpp_006496ff
//   TerminatedCString s_C3DSLight_advanceFilter__00649713
//   TerminatedCString s_core_setutil_cpp_00649748
//   TerminatedCString s_C3DSLight_setFilterFrame_0064975c
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl
core_setutil_cpp_C3DSLight_setFilterFrame_FUN_00586f00
          (C3DSLight *this_ptr,int frame_index,CDemonLight *light)

{
  CDemonLight *in_stack_00000010;
  
  if (light == (CDemonLight *)0x0) {
    g_CurrentFilename = "..\\core\\setutil.cpp";
    g_CurrentLineNumber = 0x39f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("C3DSLight::advanceFilter - NULL CDemonLight pointer!");
  }
  if ((frame_index < 0) || (this_ptr->filter_count <= frame_index)) {
    g_CurrentFilename = "..\\core\\setutil.cpp";
    g_CurrentLineNumber = 0x3a3;
    core_main_c_displayErrorAndQuit_FUN_00506f10("C3DSLight::setFilterFrame - invalid filter frame number");
  }
  this_ptr->current_filter_frame = frame_index;
  core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770
            (in_stack_00000010,this_ptr->filters[frame_index],this_ptr->filter_indices[frame_index],
             0,0);
  return;
}


// Assembly code:
// 00586f00: PUSH EBX
//   Label: core_setutil.cpp_C3DSLight_setFilterFrame_FUN_00586f00
// 00586f01: PUSH ESI
// 00586f02: PUSH EDI
// 00586f03: PUSH EBP
// 00586f04: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00586f08: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00586f0c: CMP dword ptr [ESP + 0x1c],0x0
//   XREF to: Stack[0xc] (READ)
// 00586f11: JZ 0x00586f4b
//   XREF to: 00586f4b (CONDITIONAL_JUMP)
// 00586f13: TEST ESI,ESI
//   Label: LAB_00586f13
// 00586f15: JL 0x00586f70
//   XREF to: 00586f70 (CONDITIONAL_JUMP)
// 00586f17: CMP ESI,dword ptr [EBX + 0x11ec]
// 00586f1d: JGE 0x00586f70
//   XREF to: 00586f70 (CONDITIONAL_JUMP)
// 00586f1f: PUSH 0x0
//   Label: LAB_00586f1f
// 00586f21: MOV dword ptr [EBX + 0x1890],ESI
// 00586f27: PUSH 0x0
// 00586f29: MOV ECX,dword ptr [EBX + ESI*0x4 + 0x1774]
// 00586f30: PUSH ECX
// 00586f31: MOV EDI,dword ptr [EBX + ESI*0x4 + 0x1810]
// 00586f38: PUSH EDI
// 00586f39: MOV EBP,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 00586f3d: PUSH EBP
// 00586f3e: CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770
//   XREF to: 00474770 (UNCONDITIONAL_CALL)
// 00586f43: ADD ESP,0x14
// 00586f46: POP EBP
// 00586f47: POP EDI
// 00586f48: POP ESI
// 00586f49: POP EBX
// 00586f4a: RET
// 00586f4b: MOV ECX,0x6496ff
//   Label: LAB_00586f4b
//   XREF to: 006496ff (PARAM)
// 00586f50: MOV EDI,0x39f
// 00586f55: PUSH 0x649713
//   XREF to: 00649713 (DATA)
// 00586f5a: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00586f60: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00586f66: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00586f6b: ADD ESP,0x4
// 00586f6e: JMP 0x00586f13
//   XREF to: 00586f13 (UNCONDITIONAL_JUMP)
// 00586f70: MOV EAX,0x649748
//   Label: LAB_00586f70
//   XREF to: 00649748 (PARAM)
// 00586f75: MOV EDX,0x3a3
// 00586f7a: PUSH 0x64975c
//   XREF to: 0064975c (DATA)
// 00586f7f: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00586f84: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00586f8a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00586f8f: ADD ESP,0x4
// 00586f92: JMP 0x00586f1f
//   XREF to: 00586f1f (UNCONDITIONAL_JUMP)
