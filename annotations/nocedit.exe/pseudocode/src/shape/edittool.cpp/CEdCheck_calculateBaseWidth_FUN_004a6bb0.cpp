// Name: shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0
// Address: 004a6bb0
// Address Range: [[004a6bb0, 004a6bd0]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0(CEdCheck * this_ptr)
// Cross-references:
//   shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70 (004a6b70) at 004a6b76 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEdCheck_render_FUN_004a6c00 (004a6c00) at 004a6c17 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0(CEdCheck *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (this_ptr->right_boundary - this_ptr->y_position) * 7;
  iVar2 = iVar1 >> 0x1f;
  return (int)((iVar1 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3;
}


// Assembly code:
// 004a6bb0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0
//   XREF to: Stack[0x4] (READ)
// 004a6bb4: MOV ECX,dword ptr [EDX + 0x14]
// 004a6bb7: MOV EAX,dword ptr [EDX + 0x1c]
// 004a6bba: SUB EAX,ECX
// 004a6bbc: MOV EDX,EAX
// 004a6bbe: SHL EAX,0x3
// 004a6bc1: SUB EAX,EDX
// 004a6bc3: MOV EDX,EAX
// 004a6bc5: SAR EDX,0x1f
// 004a6bc8: SHL EDX,0x3
// 004a6bcb: SBB EAX,EDX
// 004a6bcd: SAR EAX,0x3
// 004a6bd0: RET
