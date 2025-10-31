// Name: shape_edittool.cpp_CEdScrollBar_dtor_FUN_004a5b20
// Address: 004a5b20
// Address Range: [[004a5b20, 004a5b31]]
// Convention: __cdecl
// Signature: CEdScrollBar * shape_edittool.cpp_CEdScrollBar_dtor_FUN_004a5b20(CEdScrollBar * this_ptr)
// Cross-references:
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 005076a0 [UNCONDITIONAL_CALL]
//   core_main.c_showLicenseAgreement_FUN_005070f0 (005070f0) at 00507324 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_MasterEditorKeysHelpScreen_FUN_00535e70 (00535e70) at 00536baa [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 (004a3c80) at 004a3cc3 [UNCONDITIONAL_CALL]
// Function calls:
//   shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004a5b40

#include "nocturne.h"

CEdScrollBar * __cdecl shape_edittool_cpp_CEdScrollBar_dtor_FUN_004a5b20(CEdScrollBar *this_ptr)

{
  shape_edittool_cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004a5b40(this_ptr);
  return this_ptr;
}


// Assembly code:
// 004a5b20: PUSH EBX
//   Label: shape_edittool.cpp_CEdScrollBar_dtor_FUN_004a5b20
// 004a5b21: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004a5b25: PUSH EBX
// 004a5b26: CALL shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004a5b40
//   XREF to: 004a5b40 (UNCONDITIONAL_CALL)
// 004a5b2b: ADD ESP,0x4
// 004a5b2e: MOV EAX,EBX
// 004a5b30: POP EBX
// 004a5b31: RET
