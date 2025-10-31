// Name: shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004a5ea0
// Address: 004a5ea0
// Address Range: [[004a5ea0, 004a5fa7]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004a5ea0(CEdScrollBar * this_ptr)
// Cross-references:
//   shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0 (004a5fc0) at 004a608d [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10 (004a5c10) at 004a5c1d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00623f5a
//   TerminatedCString s_CEdScrollBar_computeThum_00623f70
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_004a5ea0(CEdScrollBar *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((this_ptr->current_value <= this_ptr->max_value) || (this_ptr->current_value < 1)) {
    this_ptr->thumb_start = this_ptr->track_start;
    this_ptr->thumb_end = this_ptr->track_end;
    return;
  }
  iVar3 = this_ptr->track_end - this_ptr->track_start;
  if (iVar3 < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x115a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CEdScrollBar::computeThumb - invalid dimensions");
  }
  iVar1 = (this_ptr->max_value * iVar3) / this_ptr->current_value;
  if (this_ptr->orientation == 0) {
    iVar2 = this_ptr->bounds_right - this_ptr->bounds_left;
  }
  else {
    iVar2 = this_ptr->bounds_bottom - this_ptr->bounds_top;
  }
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  if (iVar3 < iVar1) {
    iVar1 = iVar3;
  }
  iVar3 = this_ptr->track_start +
          ((iVar3 - iVar1) * this_ptr->scroll_position) /
          (this_ptr->current_value - this_ptr->max_value);
  this_ptr->thumb_start = iVar3;
  if (iVar3 < this_ptr->track_start) {
    this_ptr->thumb_start = this_ptr->track_start;
  }
  iVar1 = this_ptr->thumb_start + iVar1;
  this_ptr->thumb_end = iVar1;
  if (this_ptr->track_end < iVar1) {
    this_ptr->thumb_end = this_ptr->track_end;
    this_ptr->thumb_start = this_ptr->thumb_start - (iVar1 - this_ptr->track_end);
  }
  if (this_ptr->track_start <= this_ptr->thumb_start) {
    return;
  }
  this_ptr->thumb_start = this_ptr->track_start;
  return;
}


// Assembly code:
// 004a5ea0: PUSH EBX
//   Label: shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004a5ea0
// 004a5ea1: PUSH ESI
// 004a5ea2: PUSH EDI
// 004a5ea3: PUSH EBP
// 004a5ea4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004a5ea8: MOV EDX,dword ptr [EBX + 0x4]
// 004a5eab: CMP EDX,dword ptr [EBX + 0x8]
// 004a5eae: JLE 0x004a5f59
//   XREF to: 004a5f59 (CONDITIONAL_JUMP)
// 004a5eb4: CMP EDX,0x1
// 004a5eb7: JL 0x004a5f59
//   XREF to: 004a5f59 (CONDITIONAL_JUMP)
// 004a5ebd: MOV EDI,dword ptr [EBX + 0x24]
// 004a5ec0: MOV ESI,dword ptr [EBX + 0x28]
// 004a5ec3: SUB ESI,EDI
// 004a5ec5: CMP ESI,0x1
// 004a5ec8: JL 0x004a5f6a
//   XREF to: 004a5f6a (CONDITIONAL_JUMP)
// 004a5ece: MOV EDX,dword ptr [EBX + 0x8]
//   Label: LAB_004a5ece
// 004a5ed1: IMUL EDX,ESI
// 004a5ed4: MOV ECX,dword ptr [EBX + 0x4]
// 004a5ed7: MOV EAX,EDX
// 004a5ed9: SAR EDX,0x1f
// 004a5edc: IDIV ECX
// 004a5ede: MOV EDI,dword ptr [EBX + 0x10]
// 004a5ee1: MOV ECX,EAX
// 004a5ee3: TEST EDI,EDI
// 004a5ee5: JZ 0x004a5f91
//   XREF to: 004a5f91 (CONDITIONAL_JUMP)
// 004a5eeb: MOV EAX,dword ptr [EBX + 0x18]
// 004a5eee: MOV EDX,dword ptr [EBX + 0x20]
// 004a5ef1: SUB EDX,EAX
// 004a5ef3: CMP ECX,EDX
// 004a5ef5: JGE 0x004a5ef9
//   Label: LAB_004a5ef5
//   XREF to: 004a5ef9 (CONDITIONAL_JUMP)
// 004a5ef7: MOV ECX,EDX
// 004a5ef9: CMP ECX,ESI
//   Label: LAB_004a5ef9
// 004a5efb: JLE 0x004a5eff
//   XREF to: 004a5eff (CONDITIONAL_JUMP)
// 004a5efd: MOV ECX,ESI
// 004a5eff: MOV EDI,dword ptr [EBX + 0x8]
//   Label: LAB_004a5eff
// 004a5f02: MOV EDX,dword ptr [EBX + 0x4]
// 004a5f05: SUB EDX,EDI
// 004a5f07: MOV EDI,EDX
// 004a5f09: MOV EDX,ESI
// 004a5f0b: MOV EBP,dword ptr [EBX]
// 004a5f0d: SUB EDX,ECX
// 004a5f0f: IMUL EDX,EBP
// 004a5f12: MOV EAX,EDX
// 004a5f14: SAR EDX,0x1f
// 004a5f17: IDIV EDI
// 004a5f19: MOV EDX,dword ptr [EBX + 0x24]
// 004a5f1c: ADD EDX,EAX
// 004a5f1e: MOV dword ptr [EBX + 0x2c],EDX
// 004a5f21: MOV EAX,EDX
// 004a5f23: MOV EDX,dword ptr [EBX + 0x24]
// 004a5f26: CMP EAX,EDX
// 004a5f28: JGE 0x004a5f2d
//   XREF to: 004a5f2d (CONDITIONAL_JUMP)
// 004a5f2a: MOV dword ptr [EBX + 0x2c],EDX
// 004a5f2d: MOV EDX,dword ptr [EBX + 0x2c]
//   Label: LAB_004a5f2d
// 004a5f30: ADD EDX,ECX
// 004a5f32: MOV ECX,dword ptr [EBX + 0x28]
// 004a5f35: MOV dword ptr [EBX + 0x30],EDX
// 004a5f38: CMP EDX,ECX
// 004a5f3a: JLE 0x004a5f4c
//   XREF to: 004a5f4c (CONDITIONAL_JUMP)
// 004a5f3c: MOV EDI,dword ptr [EBX + 0x2c]
// 004a5f3f: SUB EDX,ECX
// 004a5f41: MOV EAX,dword ptr [EBX + 0x28]
// 004a5f44: SUB EDI,EDX
// 004a5f46: MOV dword ptr [EBX + 0x30],EAX
// 004a5f49: MOV dword ptr [EBX + 0x2c],EDI
// 004a5f4c: MOV EBP,dword ptr [EBX + 0x24]
//   Label: LAB_004a5f4c
// 004a5f4f: CMP EBP,dword ptr [EBX + 0x2c]
// 004a5f52: JG 0x004a5fa0
//   XREF to: 004a5fa0 (CONDITIONAL_JUMP)
// 004a5f54: POP EBP
// 004a5f55: POP EDI
// 004a5f56: POP ESI
// 004a5f57: POP EBX
// 004a5f58: RET
// 004a5f59: MOV EAX,dword ptr [EBX + 0x24]
//   Label: LAB_004a5f59
// 004a5f5c: MOV dword ptr [EBX + 0x2c],EAX
// 004a5f5f: MOV EAX,dword ptr [EBX + 0x28]
// 004a5f62: MOV dword ptr [EBX + 0x30],EAX
// 004a5f65: POP EBP
// 004a5f66: POP EDI
// 004a5f67: POP ESI
// 004a5f68: POP EBX
// 004a5f69: RET
// 004a5f6a: MOV EBP,0x623f5a
//   Label: LAB_004a5f6a
//   XREF to: 00623f5a (DATA)
// 004a5f6f: MOV EAX,0x115a
// 004a5f74: PUSH 0x623f70
//   XREF to: 00623f70 (DATA)
// 004a5f79: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 004a5f7f: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004a5f84: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a5f89: ADD ESP,0x4
// 004a5f8c: JMP 0x004a5ece
//   XREF to: 004a5ece (UNCONDITIONAL_JUMP)
// 004a5f91: MOV EBP,dword ptr [EBX + 0x14]
//   Label: LAB_004a5f91
// 004a5f94: MOV EDX,dword ptr [EBX + 0x1c]
// 004a5f97: SUB EDX,EBP
// 004a5f99: CMP EAX,EDX
// 004a5f9b: JMP 0x004a5ef5
//   XREF to: 004a5ef5 (UNCONDITIONAL_JUMP)
// 004a5fa0: MOV dword ptr [EBX + 0x2c],EBP
//   Label: LAB_004a5fa0
// 004a5fa3: POP EBP
// 004a5fa4: POP EDI
// 004a5fa5: POP ESI
// 004a5fa6: POP EBX
// 004a5fa7: RET
