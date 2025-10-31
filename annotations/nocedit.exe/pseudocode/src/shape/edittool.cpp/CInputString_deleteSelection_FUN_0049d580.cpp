// Name: shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580
// Address: 0049d580
// Address Range: [[0049d580, 0049d5ca]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580(CInputString * this_ptr)
// Cross-references:
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 (0049fb70) at 0049ff91 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0049d6c0 (0049d6c0) at 0049d825 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 (0049db10) at 0049decf [UNCONDITIONAL_CALL]
// Function calls:
//   shape_edittool.cpp_CInputString_deleteRange_FUN_0049d510

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_deleteSelection_FUN_0049d580(CInputString *this_ptr)

{
  int start_pos;
  int end_pos;
  
  start_pos = this_ptr->selection_start;
  end_pos = this_ptr->cursor_position;
  if (start_pos < end_pos) {
    shape_edittool_cpp_CInputString_deleteRange_FUN_0049d510(this_ptr,start_pos,end_pos);
    this_ptr->cursor_position = this_ptr->selection_start;
    return;
  }
  if (start_pos <= end_pos) {
    return;
  }
  shape_edittool_cpp_CInputString_deleteRange_FUN_0049d510(this_ptr,end_pos,start_pos);
  this_ptr->selection_start = this_ptr->cursor_position;
  return;
}


// Assembly code:
// 0049d580: PUSH EBX
//   Label: shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580
// 0049d581: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0049d585: MOV EDX,dword ptr [EBX + 0x138]
// 0049d58b: MOV EAX,dword ptr [EBX + 0x134]
// 0049d591: CMP EAX,EDX
// 0049d593: JG 0x0049d599
//   XREF to: 0049d599 (CONDITIONAL_JUMP)
// 0049d595: JL 0x0049d5b2
//   XREF to: 0049d5b2 (CONDITIONAL_JUMP)
// 0049d597: POP EBX
// 0049d598: RET
// 0049d599: PUSH EAX
//   Label: LAB_0049d599
// 0049d59a: PUSH EDX
// 0049d59b: PUSH EBX
// 0049d59c: CALL shape_edittool.cpp_CInputString_deleteRange_FUN_0049d510
//   XREF to: 0049d510 (UNCONDITIONAL_CALL)
// 0049d5a1: MOV EAX,dword ptr [EBX + 0x138]
// 0049d5a7: ADD ESP,0xc
// 0049d5aa: MOV dword ptr [EBX + 0x134],EAX
// 0049d5b0: POP EBX
// 0049d5b1: RET
// 0049d5b2: PUSH EDX
//   Label: LAB_0049d5b2
// 0049d5b3: PUSH EAX
// 0049d5b4: PUSH EBX
// 0049d5b5: CALL shape_edittool.cpp_CInputString_deleteRange_FUN_0049d510
//   XREF to: 0049d510 (UNCONDITIONAL_CALL)
// 0049d5ba: MOV EAX,dword ptr [EBX + 0x134]
// 0049d5c0: ADD ESP,0xc
// 0049d5c3: MOV dword ptr [EBX + 0x138],EAX
// 0049d5c9: POP EBX
// 0049d5ca: RET
