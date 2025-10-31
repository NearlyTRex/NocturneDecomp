// Name: shape_edittool.cpp_CPickList_swap_FUN_004a5870
// Address: 004a5870
// Address Range: [[004a5870, 004a58e8]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CPickList_swap_FUN_004a5870(CPickList * this_ptr, int index1, int index2)
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00623e66
//   TerminatedCString s_CPickList_swap_can_t_do__00623e7c
//   TerminatedCString s_shape_edittool_cpp_00623ec2
//   TerminatedCString s_CPickList_swap_can_t_do__00623ed8
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_edittool.cpp_CStrList_swap_FUN_004a31f0

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CPickList_swap_FUN_004a5870(CPickList *this_ptr,int index1,int index2)

{
  int in_stack_00000010;
  
  if (0 < this_ptr->enabled_capacity) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x1093;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPickList::swap - can't do this after enableing/disabling items (yet)");
  }
  if (0 < this_ptr->hotkey_capacity) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x1094;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPickList::swap - can't do this after setting hotkeys (yet)");
  }
  shape_edittool_cpp_CStrList_swap_FUN_004a31f0(&this_ptr->base_strlist,index2,in_stack_00000010);
  return;
}


// Assembly code:
// 004a5870: PUSH EBX
//   Label: shape_edittool.cpp_CPickList_swap_FUN_004a5870
// 004a5871: PUSH EBP
// 004a5872: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004a5876: CMP dword ptr [EBX + 0x194],0x0
// 004a587d: JG 0x004a589e
//   XREF to: 004a589e (CONDITIONAL_JUMP)
// 004a587f: CMP dword ptr [EBX + 0x19c],0x0
//   Label: LAB_004a587f
// 004a5886: JG 0x004a58c5
//   XREF to: 004a58c5 (CONDITIONAL_JUMP)
// 004a5888: MOV EDX,dword ptr [ESP + 0x14]
//   Label: LAB_004a5888
//   XREF to: Stack[0xc] (READ)
// 004a588c: PUSH EDX
// 004a588d: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004a5891: PUSH ECX
// 004a5892: PUSH EBX
// 004a5893: CALL shape_edittool.cpp_CStrList_swap_FUN_004a31f0
//   XREF to: 004a31f0 (UNCONDITIONAL_CALL)
// 004a5898: ADD ESP,0xc
// 004a589b: POP EBP
// 004a589c: POP EBX
// 004a589d: RET
// 004a589e: PUSH ESI
//   Label: LAB_004a589e
// 004a589f: MOV ECX,0x623e66
//   XREF to: 00623e66 (PARAM)
// 004a58a4: MOV ESI,0x1093
// 004a58a9: PUSH 0x623e7c
//   XREF to: 00623e7c (DATA)
// 004a58ae: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004a58b4: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 004a58ba: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a58bf: ADD ESP,0x4
// 004a58c2: POP ESI
// 004a58c3: JMP 0x004a587f
//   XREF to: 004a587f (UNCONDITIONAL_JUMP)
// 004a58c5: MOV EBP,0x623ec2
//   Label: LAB_004a58c5
//   XREF to: 00623ec2 (DATA)
// 004a58ca: MOV EAX,0x1094
// 004a58cf: PUSH 0x623ed8
//   XREF to: 00623ed8 (DATA)
// 004a58d4: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 004a58da: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004a58df: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a58e4: ADD ESP,0x4
// 004a58e7: JMP 0x004a5888
//   XREF to: 004a5888 (UNCONDITIONAL_JUMP)
