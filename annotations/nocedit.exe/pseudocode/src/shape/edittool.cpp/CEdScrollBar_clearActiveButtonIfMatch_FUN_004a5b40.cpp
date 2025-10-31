// Name: shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004a5b40
// Address: 004a5b40
// Address Range: [[004a5b40, 004a5b55]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004a5b40(CEdScrollBar * this_ptr)
// Cross-references:
//   core_msnedit.cpp_FUN_0053c4f0 (0053c4f0) at 0053c713 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEdScrollBar_dtor_FUN_004a5b20 (004a5b20) at 004a5b26 [UNCONDITIONAL_CALL]
// Globals:
//   CEdButton* g_ActiveButton

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004a5b40(CEdScrollBar *this_ptr)

{
  if ((CEdButton *)this_ptr != g_ActiveButton) {
    return;
  }
  g_ActiveButton = (CEdButton *)0x0;
  return;
}


// Assembly code:
// 004a5b40: MOV EDX,dword ptr [ESP + 0x4]
//   Label: shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004a5b40
//   XREF to: Stack[0x4] (READ)
// 004a5b44: CMP EDX,dword ptr [0x02cf2b00]
//   XREF to: 02cf2b00 (READ)
// 004a5b4a: JZ 0x004a5b4d
//   XREF to: 004a5b4d (CONDITIONAL_JUMP)
// 004a5b4c: RET
// 004a5b4d: XOR ECX,ECX
//   Label: LAB_004a5b4d
// 004a5b4f: MOV dword ptr [0x02cf2b00],ECX
//   XREF to: 02cf2b00 (WRITE)
// 004a5b55: RET
