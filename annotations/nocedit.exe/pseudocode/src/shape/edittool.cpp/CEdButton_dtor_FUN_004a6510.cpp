// Name: shape_edittool.cpp_CEdButton_dtor_FUN_004a6510
// Address: 004a6510
// Address Range: [[004a6510, 004a6521]]
// Convention: __cdecl
// Signature: CEdButton * shape_edittool.cpp_CEdButton_dtor_FUN_004a6510(CEdButton * this_ptr)
// Cross-references:
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 0050768e [UNCONDITIONAL_CALL]
//   core_main.c_showLicenseAgreement_FUN_005070f0 (005070f0) at 00507302 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 (004a3c80) at 004a3ca5 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 (0049e130) at 0049e3f2 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 (0049db10) at 0049de06 [UNCONDITIONAL_CALL]
// Function calls:
//   shape_edittool.cpp_CEdButton_clearActiveButtonIfMatch_FUN_004a6530

#include "nocturne.h"

CEdButton * __cdecl shape_edittool_cpp_CEdButton_dtor_FUN_004a6510(CEdButton *this_ptr)

{
  shape_edittool_cpp_CEdButton_clearActiveButtonIfMatch_FUN_004a6530(this_ptr);
  return this_ptr;
}


// Assembly code:
// 004a6510: PUSH EBX
//   Label: shape_edittool.cpp_CEdButton_dtor_FUN_004a6510
// 004a6511: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004a6515: PUSH EBX
// 004a6516: CALL shape_edittool.cpp_CEdButton_clearActiveButtonIfMatch_FUN_004a6530
//   XREF to: 004a6530 (UNCONDITIONAL_CALL)
// 004a651b: ADD ESP,0x4
// 004a651e: MOV EAX,EBX
// 004a6520: POP EBX
// 004a6521: RET
