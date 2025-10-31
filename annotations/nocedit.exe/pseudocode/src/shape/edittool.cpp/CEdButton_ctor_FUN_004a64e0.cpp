// Name: shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0
// Address: 004a64e0
// Address Range: [[004a64e0, 004a650c]]
// Convention: __cdecl
// Signature: CEdButton * shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0(CEdButton * this_ptr)
// Cross-references:
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 005075ce [UNCONDITIONAL_CALL]
//   core_main.c_showLicenseAgreement_FUN_005070f0 (005070f0) at 005071d3 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 (004a3b90) at 004a3bc0 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 (0049e130) at 0049e297 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 (0049db10) at 0049dc4e [UNCONDITIONAL_CALL]

#include "nocturne.h"

CEdButton * __cdecl shape_edittool_cpp_CEdButton_ctor_FUN_004a64e0(CEdButton *this_ptr)

{
  int iVar1;
  
  *(undefined1 *)&this_ptr->shortcut_key = 0;
  this_ptr->button_text[0] = '\0';
  this_ptr->bottom = 0;
  this_ptr->button_state = 0;
  this_ptr->enabled = 0;
  iVar1 = this_ptr->bottom;
  this_ptr->right = iVar1;
  this_ptr->top = iVar1;
  this_ptr->left = iVar1;
  return this_ptr;
}


// Assembly code:
// 004a64e0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0
//   XREF to: Stack[0x4] (READ)
// 004a64e4: MOV byte ptr [EAX + 0x4],0x0
// 004a64e8: MOV byte ptr [EAX + 0x1c],0x0
// 004a64ec: MOV dword ptr [EAX + 0x14],0x0
// 004a64f3: MOV dword ptr [EAX + 0x18],0x0
// 004a64fa: MOV dword ptr [EAX],0x0
// 004a6500: MOV EDX,dword ptr [EAX + 0x14]
// 004a6503: MOV dword ptr [EAX + 0x10],EDX
// 004a6506: MOV dword ptr [EAX + 0xc],EDX
// 004a6509: MOV dword ptr [EAX + 0x8],EDX
// 004a650c: RET
