// Name: shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460
// Address: 0049d460
// Address Range: [[0049d460, 0049d470]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460(CInputString * this_ptr)
// Cross-references:
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 (0049fb70) at 0049ff34 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CInputString_backspace_FUN_0049d5d0 (0049d5d0) at 0049d5e0 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0049d6c0 (0049d6c0) at 0049d8a0 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0049d660 (0049d660) at 0049d6ae [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 (0049db10) at 0049deea [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0049d460(CInputString *this_ptr)

{
  this_ptr->selection_start = this_ptr->cursor_position;
  return;
}


// Assembly code:
// 0049d460: MOV EDX,dword ptr [ESP + 0x4]
//   Label: shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460
//   XREF to: Stack[0x4] (READ)
// 0049d464: MOV EAX,dword ptr [EDX + 0x134]
// 0049d46a: MOV dword ptr [EDX + 0x138],EAX
// 0049d470: RET
