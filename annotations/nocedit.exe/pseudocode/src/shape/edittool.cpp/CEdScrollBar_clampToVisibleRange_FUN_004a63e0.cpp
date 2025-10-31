// Name: shape_edittool.cpp_CEdScrollBar_clampToVisibleRange_FUN_004a63e0
// Address: 004a63e0
// Address Range: [[004a63e0, 004a641d]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEdScrollBar_clampToVisibleRange_FUN_004a63e0(CEdScrollBar * this_ptr, int * value_ptr)
// Cross-references:
//   shape_edittool.cpp_CEdScrollBar_updateWithSelection_FUN_004a6450 (004a6450) at 004a647b [UNCONDITIONAL_CALL]
// Function calls:
//   shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEdScrollBar_clampToVisibleRange_FUN_004a63e0
          (CEdScrollBar *this_ptr,int *value_ptr)

{
  int iVar1;
  
  shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380(this_ptr);
  iVar1 = this_ptr->scroll_position + this_ptr->max_value;
  if (*value_ptr < iVar1) {
    iVar1 = this_ptr->scroll_position;
    if (iVar1 <= *value_ptr) {
      return;
    }
  }
  else {
    *value_ptr = iVar1 + -1;
    iVar1 = this_ptr->scroll_position;
    if (iVar1 <= *value_ptr) {
      return;
    }
  }
  *value_ptr = iVar1;
  return;
}


// Assembly code:
// 004a63e0: PUSH EBX
//   Label: shape_edittool.cpp_CEdScrollBar_clampToVisibleRange_FUN_004a63e0
// 004a63e1: PUSH ESI
// 004a63e2: PUSH EDI
// 004a63e3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004a63e7: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004a63eb: PUSH EBX
// 004a63ec: CALL shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380
//   XREF to: 004a6380 (UNCONDITIONAL_CALL)
// 004a63f1: MOV EAX,dword ptr [EBX]
// 004a63f3: MOV EDX,dword ptr [EBX + 0x8]
// 004a63f6: MOV ECX,dword ptr [ESI]
// 004a63f8: ADD EAX,EDX
// 004a63fa: ADD ESP,0x4
// 004a63fd: CMP EAX,ECX
// 004a63ff: JLE 0x004a640b
//   XREF to: 004a640b (CONDITIONAL_JUMP)
// 004a6401: MOV EDI,dword ptr [EBX]
// 004a6403: CMP EDI,dword ptr [ESI]
// 004a6405: JG 0x004a6418
//   XREF to: 004a6418 (CONDITIONAL_JUMP)
// 004a6407: POP EDI
// 004a6408: POP ESI
// 004a6409: POP EBX
// 004a640a: RET
// 004a640b: DEC EAX
//   Label: LAB_004a640b
// 004a640c: MOV dword ptr [ESI],EAX
// 004a640e: MOV EDI,dword ptr [EBX]
// 004a6410: CMP EDI,dword ptr [ESI]
// 004a6412: JG 0x004a6418
//   XREF to: 004a6418 (CONDITIONAL_JUMP)
// 004a6414: POP EDI
// 004a6415: POP ESI
// 004a6416: POP EBX
// 004a6417: RET
// 004a6418: MOV dword ptr [ESI],EDI
//   Label: LAB_004a6418
// 004a641a: POP EDI
// 004a641b: POP ESI
// 004a641c: POP EBX
// 004a641d: RET
