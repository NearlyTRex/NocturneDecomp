// Name: engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
// Address: 00502470
// Address Range: [[00502470, 00502483]]
// Convention: __cdecl
// Signature: int engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470(CKeys * this)
// Cross-references:
//   core_cloth.cpp_FUN_0043ddf0 (0043ddf0) at 0043deb3 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047d64e [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004ddbb3 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 00538473 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DementedMissionEditorSomething_FUN_00537680 (00537680) at 00537883 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 (00584940) at 00584adf [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057ea6a [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00581172 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00578c90 (00578c90) at 00578ced [UNCONDITIONAL_CALL]
//   core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0 (0057bbe0) at 0057c01d [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057e233 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 (0057c5d0) at 0057c9b0 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_viewModel_FUN_00598fc0 (00598fc0) at 0059917e [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_handleInput_FUN_004a3f20 (004a3f20) at 004a4044 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 (0049e9d0) at 0049ee30 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_ctype.c_toupper_FUN_005ff9e0
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

int __cdecl engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(CKeys *this)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  iVar2 = crt_ctype_c_toupper_FUN_005ff9e0(uVar1 & 0xff);
  return iVar2;
}


// Assembly code:
// 00502470: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   Label: engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00502475: AND EAX,0xff
// 0050247a: PUSH EAX
// 0050247b: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 00502480: ADD ESP,0x4
// 00502483: RET
