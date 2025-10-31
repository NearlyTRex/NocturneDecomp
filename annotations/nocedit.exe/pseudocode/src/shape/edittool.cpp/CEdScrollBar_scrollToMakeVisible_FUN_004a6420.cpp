// Name: shape_edittool.cpp_CEdScrollBar_scrollToMakeVisible_FUN_004a6420
// Address: 004a6420
// Address Range: [[004a6420, 004a644d]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEdScrollBar_scrollToMakeVisible_FUN_004a6420(CEdScrollBar * this_ptr, int target_index)
// Cross-references:
//   shape_edittool.cpp_CEdScrollBar_updateWithSelection_FUN_004a6450 (004a6450) at 004a6468 [UNCONDITIONAL_CALL]
// Function calls:
//   shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEdScrollBar_scrollToMakeVisible_FUN_004a6420
          (CEdScrollBar *this_ptr,int target_index)

{
  int iVar1;
  
  iVar1 = target_index - this_ptr->max_value;
  if (this_ptr->scroll_position <= iVar1) {
    this_ptr->scroll_position = iVar1 + 1;
  }
  if (target_index < this_ptr->scroll_position) {
    this_ptr->scroll_position = target_index;
  }
  shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380(this_ptr);
  return;
}


// Assembly code:
// 004a6420: PUSH EBX
//   Label: shape_edittool.cpp_CEdScrollBar_scrollToMakeVisible_FUN_004a6420
// 004a6421: PUSH ESI
// 004a6422: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004a6426: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004a642a: MOV EDX,ECX
// 004a642c: MOV EBX,dword ptr [EAX + 0x8]
// 004a642f: MOV ESI,dword ptr [EAX]
// 004a6431: SUB EDX,EBX
// 004a6433: CMP EDX,ESI
// 004a6435: JGE 0x004a6449
//   XREF to: 004a6449 (CONDITIONAL_JUMP)
// 004a6437: CMP ECX,dword ptr [EAX]
//   Label: LAB_004a6437
// 004a6439: JGE 0x004a643d
//   XREF to: 004a643d (CONDITIONAL_JUMP)
// 004a643b: MOV dword ptr [EAX],ECX
// 004a643d: PUSH EAX
//   Label: LAB_004a643d
// 004a643e: CALL shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380
//   XREF to: 004a6380 (UNCONDITIONAL_CALL)
// 004a6443: ADD ESP,0x4
// 004a6446: POP ESI
// 004a6447: POP EBX
// 004a6448: RET
// 004a6449: INC EDX
//   Label: LAB_004a6449
// 004a644a: MOV dword ptr [EAX],EDX
// 004a644c: JMP 0x004a6437
//   XREF to: 004a6437 (UNCONDITIONAL_JUMP)
