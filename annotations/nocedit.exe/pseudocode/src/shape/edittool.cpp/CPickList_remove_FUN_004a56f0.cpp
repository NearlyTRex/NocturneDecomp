// Name: shape_edittool.cpp_CPickList_remove_FUN_004a56f0
// Address: 004a56f0
// Address Range: [[004a56f0, 004a5768]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CPickList_remove_FUN_004a56f0(CPickList * this_ptr, int start_index, int end_index)
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00623cd5
//   TerminatedCString s_CPickList_remove_can_t_d_00623ceb
//   TerminatedCString s_shape_edittool_cpp_00623d33
//   TerminatedCString s_CPickList_removeRange_ca_00623d49
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_edittool.cpp_CStrList_remove_FUN_004a2e00

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CPickList_remove_FUN_004a56f0(CPickList *this_ptr,int start_index,int end_index)

{
  int in_stack_00000010;
  
  if (0 < this_ptr->enabled_capacity) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x1079;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPickList::remove - can't do this after enableing/disabling items (yet)");
  }
  if (0 < this_ptr->hotkey_capacity) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x107a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPickList::removeRange - can't do this after setting hotkeys (yet)");
  }
  shape_edittool_cpp_CStrList_remove_FUN_004a2e00
            (&this_ptr->base_strlist,end_index,in_stack_00000010);
  return;
}


// Assembly code:
// 004a56f0: PUSH EBX
//   Label: shape_edittool.cpp_CPickList_remove_FUN_004a56f0
// 004a56f1: PUSH EBP
// 004a56f2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004a56f6: CMP dword ptr [EBX + 0x194],0x0
// 004a56fd: JG 0x004a571e
//   XREF to: 004a571e (CONDITIONAL_JUMP)
// 004a56ff: CMP dword ptr [EBX + 0x19c],0x0
//   Label: LAB_004a56ff
// 004a5706: JG 0x004a5745
//   XREF to: 004a5745 (CONDITIONAL_JUMP)
// 004a5708: MOV EDX,dword ptr [ESP + 0x14]
//   Label: LAB_004a5708
//   XREF to: Stack[0xc] (READ)
// 004a570c: PUSH EDX
// 004a570d: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004a5711: PUSH ECX
// 004a5712: PUSH EBX
// 004a5713: CALL shape_edittool.cpp_CStrList_remove_FUN_004a2e00
//   XREF to: 004a2e00 (UNCONDITIONAL_CALL)
// 004a5718: ADD ESP,0xc
// 004a571b: POP EBP
// 004a571c: POP EBX
// 004a571d: RET
// 004a571e: PUSH ESI
//   Label: LAB_004a571e
// 004a571f: MOV ECX,0x623cd5
//   XREF to: 00623cd5 (PARAM)
// 004a5724: MOV ESI,0x1079
// 004a5729: PUSH 0x623ceb
//   XREF to: 00623ceb (DATA)
// 004a572e: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004a5734: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 004a573a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a573f: ADD ESP,0x4
// 004a5742: POP ESI
// 004a5743: JMP 0x004a56ff
//   XREF to: 004a56ff (UNCONDITIONAL_JUMP)
// 004a5745: MOV EBP,0x623d33
//   Label: LAB_004a5745
//   XREF to: 00623d33 (DATA)
// 004a574a: MOV EAX,0x107a
// 004a574f: PUSH 0x623d49
//   XREF to: 00623d49 (DATA)
// 004a5754: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 004a575a: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004a575f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a5764: ADD ESP,0x4
// 004a5767: JMP 0x004a5708
//   XREF to: 004a5708 (UNCONDITIONAL_JUMP)
