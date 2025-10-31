// Name: shape_edittool.cpp_CEdCheck_clearActiveButtonIfMatch_FUN_004a6b50
// Address: 004a6b50
// Address Range: [[004a6b50, 004a6b60]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEdCheck_clearActiveButtonIfMatch_FUN_004a6b50(CEdCheck * this_ptr)
// Cross-references:
//   shape_edittool.cpp_CEdCheck_dtor_FUN_004a6a40 (004a6a40) at 004a6a46 [UNCONDITIONAL_CALL]
// Globals:
//   CEdButton* g_ActiveButton

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdCheck_clearActiveButtonIfMatch_FUN_004a6b50(CEdCheck *this_ptr)

{
  if (this_ptr != (CEdCheck *)g_ActiveButton) {
    return;
  }
  g_ActiveButton = (CEdButton *)0x0;
  return;
}


// Assembly code:
// 004a6b50: MOV EDX,dword ptr [ESP + 0x4]
//   Label: shape_edittool.cpp_CEdCheck_clearActiveButtonIfMatch_FUN_004a6b50
//   XREF to: Stack[0x4] (READ)
// 004a6b54: CMP EDX,dword ptr [0x02cf2b00]
//   XREF to: 02cf2b00 (READ)
// 004a6b5a: JZ 0x004a5b4d
//   XREF to: 004a5b4d (CONDITIONAL_JUMP)
// 004a6b60: RET
