// Name: shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380
// Address: 004a6380
// Address Range: [[004a6380, 004a63aa]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380(CEdScrollBar * this_ptr)
// Cross-references:
//   shape_edittool.cpp_CEdScrollBar_clampToVisibleRange_FUN_004a63e0 (004a63e0) at 004a63ec [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0 (004a5fc0) at 004a6084 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEdScrollBar_scrollToMakeVisible_FUN_004a6420 (004a6420) at 004a643e [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380(CEdScrollBar *this_ptr)

{
  int iVar1;
  
  iVar1 = this_ptr->current_value - this_ptr->max_value;
  if (iVar1 < this_ptr->scroll_position) {
    this_ptr->scroll_position = iVar1;
    if (-1 < this_ptr->scroll_position) {
      return;
    }
  }
  else if (-1 < this_ptr->scroll_position) {
    return;
  }
  this_ptr->scroll_position = 0;
  return;
}


// Assembly code:
// 004a6380: PUSH EBX
//   Label: shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380
// 004a6381: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004a6385: MOV ECX,dword ptr [EAX + 0x8]
// 004a6388: MOV EDX,dword ptr [EAX + 0x4]
// 004a638b: MOV EBX,dword ptr [EAX]
// 004a638d: SUB EDX,ECX
// 004a638f: CMP EDX,EBX
// 004a6391: JL 0x004a639a
//   XREF to: 004a639a (CONDITIONAL_JUMP)
// 004a6393: CMP dword ptr [EAX],0x0
// 004a6396: JL 0x004a63a3
//   XREF to: 004a63a3 (CONDITIONAL_JUMP)
// 004a6398: POP EBX
// 004a6399: RET
// 004a639a: MOV dword ptr [EAX],EDX
//   Label: LAB_004a639a
// 004a639c: CMP dword ptr [EAX],0x0
// 004a639f: JL 0x004a63a3
//   XREF to: 004a63a3 (CONDITIONAL_JUMP)
// 004a63a1: POP EBX
// 004a63a2: RET
// 004a63a3: MOV dword ptr [EAX],0x0
//   Label: LAB_004a63a3
// 004a63a9: POP EBX
// 004a63aa: RET
