// Name: core_dcamera.cpp_CDemonCamera_pushRect_FUN_0044c740
// Address: 0044c740
// Address Range: [[0044c740, 0044c775]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_pushRect_FUN_0044c740(CDemonCamera * this_ptr, int left, int top, int right, int bottom)
// Cross-references:
//   core_inv.cpp_drawItemIconBackground_FUN_005001e0 (005001e0) at 00500355 [UNCONDITIONAL_CALL]
//   core_inv.cpp_drawWeaponIconBackground_FUN_00500050 (00500050) at 005001c5 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056e5d0 (0056e5d0) at 0056e76a [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_pushRect_FUN_0044c740
          (CDemonCamera *this_ptr,int left,int top,int right,int bottom)

{
  CRect *pCVar1;
  
  if (0xff < this_ptr->rect_array_count) {
    this_ptr->rect_array_count = this_ptr->rect_array_count + 1;
    return;
  }
  pCVar1 = this_ptr->rect_array + this_ptr->rect_array_count;
  pCVar1->left = left;
  pCVar1->top = top;
  pCVar1->right = right;
  pCVar1->bottom = bottom;
  this_ptr->rect_array_count = this_ptr->rect_array_count + 1;
  return;
}


// Assembly code:
// 0044c740: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_dcamera.cpp_CDemonCamera_pushRect_FUN_0044c740
//   XREF to: Stack[0x4] (READ)
// 0044c744: MOV EDX,dword ptr [EAX + 0x1d0]
// 0044c74a: CMP EDX,0x100
// 0044c750: JL 0x0044c759
//   XREF to: 0044c759 (CONDITIONAL_JUMP)
// 0044c752: INC dword ptr [EAX + 0x1d0]
// 0044c758: RET
// 0044c759: PUSH EDI
//   Label: LAB_0044c759
// 0044c75a: PUSH ESI
// 0044c75b: SHL EDX,0x4
// 0044c75e: LEA ESI,[ESP + 0x10]
//   XREF to: Stack[0x8] (DATA)
// 0044c762: LEA EDI,[EDX + EAX*0x1 + 0x1d4]
// 0044c769: MOVSD ES:EDI,ESI
// 0044c76a: MOVSD ES:EDI,ESI
// 0044c76b: MOVSD ES:EDI,ESI
// 0044c76c: MOVSD ES:EDI,ESI
// 0044c76d: POP ESI
// 0044c76e: POP EDI
// 0044c76f: INC dword ptr [EAX + 0x1d0]
// 0044c775: RET
