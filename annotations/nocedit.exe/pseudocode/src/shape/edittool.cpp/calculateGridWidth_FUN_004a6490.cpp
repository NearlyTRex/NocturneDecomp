// Name: shape_edittool.cpp_calculateGridWidth_FUN_004a6490
// Address: 004a6490
// Address Range: [[004a6490, 004a64a6]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_calculateGridWidth_FUN_004a6490(void)
// Cross-references:
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 00507582 [UNCONDITIONAL_CALL]
//   core_main.c_showLicenseAgreement_FUN_005070f0 (005070f0) at 00507197 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_MasterEditorKeysHelpScreen_FUN_00535e70 (00535e70) at 00536a27 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_unk50_FUN_00566660 (00566660) at 00566701 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0 (004a45d0) at 004a4906 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_calculateGridHeight_FUN_004a64b0 (004a64b0) at 004a64b0 [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowWidth = 0x140

#include "nocturne.h"

int __cdecl shape_edittool_cpp_calculateGridWidth_FUN_004a6490(void)

{
  return g_WindowWidth / 0x30;
}


// Assembly code:
// 004a6490: PUSH EBX
//   Label: shape_edittool.cpp_calculateGridWidth_FUN_004a6490
// 004a6491: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004a6497: MOV ECX,0x30
// 004a649c: MOV EDX,EBX
// 004a649e: MOV EAX,EBX
// 004a64a0: SAR EDX,0x1f
// 004a64a3: IDIV ECX
// 004a64a5: POP EBX
// 004a64a6: RET
