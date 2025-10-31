// Name: shape_edittool.cpp_CEdScrollBar_updateWithSelection_FUN_004a6450
// Address: 004a6450
// Address Range: [[004a6450, 004a6485]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEdScrollBar_updateWithSelection_FUN_004a6450(CEdScrollBar * this_ptr, int * selection_index_ptr)
// Function calls:
//   shape_edittool.cpp_CEdScrollBar_clampToValidRange_FUN_004a63b0
//   shape_edittool.cpp_CEdScrollBar_clampToVisibleRange_FUN_004a63e0
//   shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0
//   shape_edittool.cpp_CEdScrollBar_scrollToMakeVisible_FUN_004a6420

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEdScrollBar_updateWithSelection_FUN_004a6450
          (CEdScrollBar *this_ptr,int *selection_index_ptr)

{
  shape_edittool_cpp_CEdScrollBar_clampToValidRange_FUN_004a63b0(this_ptr,selection_index_ptr);
  shape_edittool_cpp_CEdScrollBar_scrollToMakeVisible_FUN_004a6420(this_ptr,*selection_index_ptr);
  shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0(this_ptr);
  shape_edittool_cpp_CEdScrollBar_clampToVisibleRange_FUN_004a63e0(this_ptr,selection_index_ptr);
  return;
}


// Assembly code:
// 004a6450: PUSH EBX
//   Label: shape_edittool.cpp_CEdScrollBar_updateWithSelection_FUN_004a6450
// 004a6451: PUSH ESI
// 004a6452: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004a6456: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004a645a: PUSH ESI
// 004a645b: PUSH EBX
// 004a645c: CALL shape_edittool.cpp_CEdScrollBar_clampToValidRange_FUN_004a63b0
//   XREF to: 004a63b0 (UNCONDITIONAL_CALL)
// 004a6461: ADD ESP,0x8
// 004a6464: MOV EDX,dword ptr [ESI]
// 004a6466: PUSH EDX
// 004a6467: PUSH EBX
// 004a6468: CALL shape_edittool.cpp_CEdScrollBar_scrollToMakeVisible_FUN_004a6420
//   XREF to: 004a6420 (UNCONDITIONAL_CALL)
// 004a646d: ADD ESP,0x8
// 004a6470: PUSH EBX
// 004a6471: CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0
//   XREF to: 004a5fc0 (UNCONDITIONAL_CALL)
// 004a6476: ADD ESP,0x4
// 004a6479: PUSH ESI
// 004a647a: PUSH EBX
// 004a647b: CALL shape_edittool.cpp_CEdScrollBar_clampToVisibleRange_FUN_004a63e0
//   XREF to: 004a63e0 (UNCONDITIONAL_CALL)
// 004a6480: ADD ESP,0x8
// 004a6483: POP ESI
// 004a6484: POP EBX
// 004a6485: RET
