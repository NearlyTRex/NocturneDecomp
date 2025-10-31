// Name: shape_edittool.cpp_CEdScrollBar_clampToValidRange_FUN_004a63b0
// Address: 004a63b0
// Address Range: [[004a63b0, 004a63da]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEdScrollBar_clampToValidRange_FUN_004a63b0(CEdScrollBar * this_ptr, int * value_ptr)
// Cross-references:
//   shape_edittool.cpp_CEdScrollBar_updateWithSelection_FUN_004a6450 (004a6450) at 004a645c [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEdScrollBar_clampToValidRange_FUN_004a63b0
          (CEdScrollBar *this_ptr,int *value_ptr)

{
  if (*value_ptr < this_ptr->current_value) {
    if (-1 < *value_ptr) {
      return;
    }
  }
  else {
    *value_ptr = this_ptr->current_value + -1;
    if (-1 < *value_ptr) {
      return;
    }
  }
  *value_ptr = 0;
  return;
}


// Assembly code:
// 004a63b0: PUSH EBX
//   Label: shape_edittool.cpp_CEdScrollBar_clampToValidRange_FUN_004a63b0
// 004a63b1: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004a63b5: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004a63b9: MOV EBX,dword ptr [ECX + 0x4]
// 004a63bc: CMP EBX,dword ptr [EDX]
// 004a63be: JLE 0x004a63c7
//   XREF to: 004a63c7 (CONDITIONAL_JUMP)
// 004a63c0: CMP dword ptr [EDX],0x0
// 004a63c3: JL 0x004a63d3
//   XREF to: 004a63d3 (CONDITIONAL_JUMP)
// 004a63c5: POP EBX
// 004a63c6: RET
// 004a63c7: LEA EAX,[EBX + -0x1]
//   Label: LAB_004a63c7
// 004a63ca: MOV dword ptr [EDX],EAX
// 004a63cc: CMP dword ptr [EDX],0x0
// 004a63cf: JL 0x004a63d3
//   XREF to: 004a63d3 (CONDITIONAL_JUMP)
// 004a63d1: POP EBX
// 004a63d2: RET
// 004a63d3: MOV dword ptr [EDX],0x0
//   Label: LAB_004a63d3
// 004a63d9: POP EBX
// 004a63da: RET
