// Name: shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_004a6be0
// Address: 004a6be0
// Address Range: [[004a6be0, 004a6bf6]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_004a6be0(CEdCheck * this_ptr)
// Cross-references:
//   shape_edittool.cpp_CEdCheck_render_FUN_004a6c00 (004a6c00) at 004a6c7b [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEdCheck_setupWithText_FUN_004a6a60 (004a6a60) at 004a6af6 [UNCONDITIONAL_CALL]
// Function calls:
//   shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_004a6be0(CEdCheck *this_ptr)

{
  int iVar1;
  
  iVar1 = shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70(this_ptr);
  return iVar1 / 2;
}


// Assembly code:
// 004a6be0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_004a6be0
//   XREF to: Stack[0x4] (READ)
// 004a6be4: PUSH EDX
// 004a6be5: CALL shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70
//   XREF to: 004a6b70 (UNCONDITIONAL_CALL)
// 004a6bea: MOV EDX,EAX
// 004a6bec: SAR EDX,0x1f
// 004a6bef: ADD ESP,0x4
// 004a6bf2: SUB EAX,EDX
// 004a6bf4: SAR EAX,0x1
// 004a6bf6: RET
