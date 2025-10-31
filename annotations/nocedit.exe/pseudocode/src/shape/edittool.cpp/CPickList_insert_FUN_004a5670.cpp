// Name: shape_edittool.cpp_CPickList_insert_FUN_004a5670
// Address: 004a5670
// Address Range: [[004a5670, 004a56e8]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CPickList_insert_FUN_004a5670(CPickList * this_ptr, int insert_index, int item_data)
// Cross-references:
//   core_script.cpp_FUN_005677a0 (005677a0) at 005678b4 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00623c23
//   TerminatedCString s_CPickList_insert_can_t_d_00623c39
//   TerminatedCString s_shape_edittool_cpp_00623c81
//   TerminatedCString s_CPickList_insert_can_t_d_00623c97
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_edittool.cpp_CStrList_insert_FUN_004a2bc0

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CPickList_insert_FUN_004a5670(CPickList *this_ptr,int insert_index,int item_data)

{
  char *in_stack_00000010;
  
  if (0 < this_ptr->enabled_capacity) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x1073;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPickList::insert - can't do this after enableing/disabling items (yet)");
  }
  if (0 < this_ptr->hotkey_capacity) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x1074;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPickList::insert - can't do this after setting hotkeys (yet)");
  }
  shape_edittool_cpp_CStrList_insert_FUN_004a2bc0
            (&this_ptr->base_strlist,item_data,in_stack_00000010);
  return;
}


// Assembly code:
// 004a5670: PUSH EBX
//   Label: shape_edittool.cpp_CPickList_insert_FUN_004a5670
// 004a5671: PUSH EBP
// 004a5672: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004a5676: CMP dword ptr [EBX + 0x194],0x0
// 004a567d: JG 0x004a569e
//   XREF to: 004a569e (CONDITIONAL_JUMP)
// 004a567f: CMP dword ptr [EBX + 0x19c],0x0
//   Label: LAB_004a567f
// 004a5686: JG 0x004a56c5
//   XREF to: 004a56c5 (CONDITIONAL_JUMP)
// 004a5688: MOV EDX,dword ptr [ESP + 0x14]
//   Label: LAB_004a5688
//   XREF to: Stack[0xc] (READ)
// 004a568c: PUSH EDX
// 004a568d: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004a5691: PUSH ECX
// 004a5692: PUSH EBX
// 004a5693: CALL shape_edittool.cpp_CStrList_insert_FUN_004a2bc0
//   XREF to: 004a2bc0 (UNCONDITIONAL_CALL)
// 004a5698: ADD ESP,0xc
// 004a569b: POP EBP
// 004a569c: POP EBX
// 004a569d: RET
// 004a569e: PUSH ESI
//   Label: LAB_004a569e
// 004a569f: MOV ECX,0x623c23
//   XREF to: 00623c23 (PARAM)
// 004a56a4: MOV ESI,0x1073
// 004a56a9: PUSH 0x623c39
//   XREF to: 00623c39 (DATA)
// 004a56ae: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004a56b4: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 004a56ba: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a56bf: ADD ESP,0x4
// 004a56c2: POP ESI
// 004a56c3: JMP 0x004a567f
//   XREF to: 004a567f (UNCONDITIONAL_JUMP)
// 004a56c5: MOV EBP,0x623c81
//   Label: LAB_004a56c5
//   XREF to: 00623c81 (DATA)
// 004a56ca: MOV EAX,0x1074
// 004a56cf: PUSH 0x623c97
//   XREF to: 00623c97 (DATA)
// 004a56d4: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 004a56da: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004a56df: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a56e4: ADD ESP,0x4
// 004a56e7: JMP 0x004a5688
//   XREF to: 004a5688 (UNCONDITIONAL_JUMP)
