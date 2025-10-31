// Name: shape_edittool.cpp_CPickList_sort_FUN_004a57f0
// Address: 004a57f0
// Address Range: [[004a57f0, 004a5868]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CPickList_sort_FUN_004a57f0(CPickList * this_ptr, int sort_type, int sort_order)
// Cross-references:
//   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 (0049f420) at 0049f674 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00623db8
//   TerminatedCString s_CPickList_sort_can_t_do__00623dce
//   TerminatedCString s_shape_edittool_cpp_00623e14
//   TerminatedCString s_CPickList_sort_can_t_do__00623e2a
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_edittool.cpp_CStrList_sort_FUN_004a2f00

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CPickList_sort_FUN_004a57f0(CPickList *this_ptr,int sort_type,int sort_order)

{
  int in_stack_00000010;
  
  if (0 < this_ptr->enabled_capacity) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x108d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPickList::sort - can't do this after enableing/disabling items (yet)");
  }
  if (0 < this_ptr->hotkey_capacity) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x108e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPickList::sort - can't do this after setting hotkeys (yet)");
  }
  shape_edittool_cpp_CStrList_sort_FUN_004a2f00
            (&this_ptr->base_strlist,sort_order,in_stack_00000010);
  return;
}


// Assembly code:
// 004a57f0: PUSH EBX
//   Label: shape_edittool.cpp_CPickList_sort_FUN_004a57f0
// 004a57f1: PUSH EBP
// 004a57f2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004a57f6: CMP dword ptr [EBX + 0x194],0x0
// 004a57fd: JG 0x004a581e
//   XREF to: 004a581e (CONDITIONAL_JUMP)
// 004a57ff: CMP dword ptr [EBX + 0x19c],0x0
//   Label: LAB_004a57ff
// 004a5806: JG 0x004a5845
//   XREF to: 004a5845 (CONDITIONAL_JUMP)
// 004a5808: MOV EDX,dword ptr [ESP + 0x14]
//   Label: LAB_004a5808
//   XREF to: Stack[0xc] (READ)
// 004a580c: PUSH EDX
// 004a580d: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004a5811: PUSH ECX
// 004a5812: PUSH EBX
// 004a5813: CALL shape_edittool.cpp_CStrList_sort_FUN_004a2f00
//   XREF to: 004a2f00 (UNCONDITIONAL_CALL)
// 004a5818: ADD ESP,0xc
// 004a581b: POP EBP
// 004a581c: POP EBX
// 004a581d: RET
// 004a581e: PUSH ESI
//   Label: LAB_004a581e
// 004a581f: MOV ECX,0x623db8
//   XREF to: 00623db8 (PARAM)
// 004a5824: MOV ESI,0x108d
// 004a5829: PUSH 0x623dce
//   XREF to: 00623dce (DATA)
// 004a582e: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004a5834: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 004a583a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a583f: ADD ESP,0x4
// 004a5842: POP ESI
// 004a5843: JMP 0x004a57ff
//   XREF to: 004a57ff (UNCONDITIONAL_JUMP)
// 004a5845: MOV EBP,0x623e14
//   Label: LAB_004a5845
//   XREF to: 00623e14 (DATA)
// 004a584a: MOV EAX,0x108e
// 004a584f: PUSH 0x623e2a
//   XREF to: 00623e2a (DATA)
// 004a5854: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 004a585a: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004a585f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a5864: ADD ESP,0x4
// 004a5867: JMP 0x004a5808
//   XREF to: 004a5808 (UNCONDITIONAL_JUMP)
