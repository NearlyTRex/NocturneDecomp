// Name: shape_edittool.cpp_CInputString_backspace_FUN_0049d5d0
// Address: 0049d5d0
// Address Range: [[0049d5d0, 0049d608]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CInputString_backspace_FUN_0049d5d0(CInputString * this_ptr)
// Cross-references:
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 (0049fb70) at 004a0006 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 (0049db10) at 0049defa [UNCONDITIONAL_CALL]
// Function calls:
//   shape_edittool.cpp_CInputString_deleteRange_FUN_0049d510
//   shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_backspace_FUN_0049d5d0(CInputString *this_ptr)

{
  int end_pos;
  
  end_pos = this_ptr->cursor_position;
  if (end_pos < 1) {
    shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0049d460(this_ptr);
    return;
  }
  this_ptr->cursor_position = end_pos + -1;
  shape_edittool_cpp_CInputString_deleteRange_FUN_0049d510(this_ptr,end_pos + -1,end_pos);
  shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0049d460(this_ptr);
  return;
}


// Assembly code:
// 0049d5d0: PUSH EBX
//   Label: shape_edittool.cpp_CInputString_backspace_FUN_0049d5d0
// 0049d5d1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0049d5d5: MOV EDX,dword ptr [EBX + 0x134]
// 0049d5db: TEST EDX,EDX
// 0049d5dd: JG 0x0049d5ea
//   XREF to: 0049d5ea (CONDITIONAL_JUMP)
// 0049d5df: PUSH EBX
// 0049d5e0: CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460
//   XREF to: 0049d460 (UNCONDITIONAL_CALL)
// 0049d5e5: ADD ESP,0x4
// 0049d5e8: POP EBX
// 0049d5e9: RET
// 0049d5ea: MOV EAX,EDX
//   Label: LAB_0049d5ea
// 0049d5ec: PUSH EAX
// 0049d5ed: DEC EDX
// 0049d5ee: PUSH EDX
// 0049d5ef: PUSH EBX
// 0049d5f0: MOV dword ptr [EBX + 0x134],EDX
// 0049d5f6: CALL shape_edittool.cpp_CInputString_deleteRange_FUN_0049d510
//   XREF to: 0049d510 (UNCONDITIONAL_CALL)
// 0049d5fb: ADD ESP,0xc
// 0049d5fe: PUSH EBX
// 0049d5ff: CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460
//   XREF to: 0049d460 (UNCONDITIONAL_CALL)
// 0049d604: ADD ESP,0x4
// 0049d607: POP EBX
// 0049d608: RET
