// Name: core_setutil.cpp_C3DSLight_advanceFilter_FUN_00586e70
// Address: 00586e70
// Address Range: [[00586e70, 00586ef9]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSLight_advanceFilter_FUN_00586e70(C3DSLight * this_ptr, CDemonLight * light)
// Cross-references:
//   core_event.cpp_LargeEventHandler_FUN_004aacc0 (004aacc0) at 004aafb7 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_setutil_cpp_006496b6
//   TerminatedCString s_C3DSLight_advanceFilter__006496ca
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl
core_setutil_cpp_C3DSLight_advanceFilter_FUN_00586e70(C3DSLight *this_ptr,CDemonLight *light)

{
  int iVar1;
  CDemonLight *in_stack_0000000c;
  
  if (light == (CDemonLight *)0x0) {
    g_CurrentFilename = "..\\core\\setutil.cpp";
    g_CurrentLineNumber = 0x387;
    core_main_c_displayErrorAndQuit_FUN_00506f10("C3DSLight::advanceFilter - NULL CDemonLight pointer!");
  }
  if (0 < this_ptr->filter_count) {
    iVar1 = this_ptr->current_filter_frame + 1;
    this_ptr->current_filter_frame = iVar1;
    if (this_ptr->filter_count <= iVar1) {
      this_ptr->current_filter_frame = 0;
    }
    core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770
              (in_stack_0000000c,this_ptr->filters[this_ptr->current_filter_frame],
               this_ptr->filter_indices[this_ptr->current_filter_frame],0,0);
  }
  return;
}


// Assembly code:
// 00586e70: PUSH EBX
//   Label: core_setutil.cpp_C3DSLight_advanceFilter_FUN_00586e70
// 00586e71: PUSH ESI
// 00586e72: PUSH EBP
// 00586e73: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00586e77: CMP dword ptr [ESP + 0x14],0x0
//   XREF to: Stack[0x8] (READ)
// 00586e7c: JZ 0x00586ed5
//   XREF to: 00586ed5 (CONDITIONAL_JUMP)
// 00586e7e: CMP dword ptr [EBX + 0x11ec],0x0
//   Label: LAB_00586e7e
// 00586e85: JLE 0x00586ed1
//   XREF to: 00586ed1 (CONDITIONAL_JUMP)
// 00586e87: MOV EBP,dword ptr [EBX + 0x1890]
// 00586e8d: INC EBP
// 00586e8e: MOV EDX,dword ptr [EBX + 0x11ec]
// 00586e94: MOV dword ptr [EBX + 0x1890],EBP
// 00586e9a: CMP EBP,EDX
// 00586e9c: JL 0x00586ea8
//   XREF to: 00586ea8 (CONDITIONAL_JUMP)
// 00586e9e: MOV dword ptr [EBX + 0x1890],0x0
// 00586ea8: PUSH EDI
//   Label: LAB_00586ea8
// 00586ea9: PUSH 0x0
// 00586eab: MOV EAX,dword ptr [EBX + 0x1890]
// 00586eb1: PUSH 0x0
// 00586eb3: MOV ECX,dword ptr [EBX + EAX*0x4 + 0x1774]
// 00586eba: PUSH ECX
// 00586ebb: MOV ESI,dword ptr [EBX + EAX*0x4 + 0x1810]
// 00586ec2: PUSH ESI
// 00586ec3: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 00586ec7: PUSH EDI
// 00586ec8: CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770
//   XREF to: 00474770 (UNCONDITIONAL_CALL)
// 00586ecd: ADD ESP,0x14
// 00586ed0: POP EDI
// 00586ed1: POP EBP
//   Label: LAB_00586ed1
// 00586ed2: POP ESI
// 00586ed3: POP EBX
// 00586ed4: RET
// 00586ed5: MOV ECX,0x6496b6
//   Label: LAB_00586ed5
//   XREF to: 006496b6 (PARAM)
// 00586eda: MOV ESI,0x387
// 00586edf: PUSH 0x6496ca
//   XREF to: 006496ca (DATA)
// 00586ee4: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00586eea: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00586ef0: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00586ef5: ADD ESP,0x4
// 00586ef8: JMP 0x00586e7e
//   XREF to: 00586e7e (UNCONDITIONAL_JUMP)
