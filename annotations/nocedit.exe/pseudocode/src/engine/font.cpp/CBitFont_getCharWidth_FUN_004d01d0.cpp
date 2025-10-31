// Name: engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
// Address: 004d01d0
// Address Range: [[004d01d0, 004d01f7]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
// Cross-references:
//   core_game.cpp_CGame_displayActStats_FUN_004e3800 (004e3800) at 004e3b05 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_finishAct_FUN_004e3b90 (004e3b90) at 004e3f83 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_renderOverlay_FUN_004d8040 (004d8040) at 004d81e3 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_rollCredits_FUN_004e4010 (004e4010) at 004e4131 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_showCustomizableKeys_FUN_004d89d0 (004d89d0) at 004d89fd [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_renderAllItems_FUN_00500690 (00500690) at 00500828 [UNCONDITIONAL_CALL]
//   core_main.c_finalizeGameSystems_FUN_00508570 (00508570) at 005085b4 [UNCONDITIONAL_CALL]
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 0050809e [UNCONDITIONAL_CALL]
//   core_main.c_showPromoScreen_FUN_00508340 (00508340) at 00508353 [UNCONDITIONAL_CALL]
//   core_menu.cpp_FUN_00510410 (00510410) at 0051044a [UNCONDITIONAL_CALL]
//   core_menu.cpp_GetGameMainMenuChoice_FUN_00510000 (00510000) at 00510369 [UNCONDITIONAL_CALL]
//   core_menu.cpp_MonitorCalibrationPressAnyKeyToContinue_FUN_00510a50 (00510a50) at 00510ab9 [UNCONDITIONAL_CALL]
//   core_menu.cpp_RunCalibrationTest_FUN_00510ba0 (00510ba0) at 00510bc5 [UNCONDITIONAL_CALL]
//   core_menu.cpp_SetUpGamepadControls_FUN_005104d0 (005104d0) at 00510535 [UNCONDITIONAL_CALL]
//   core_menu.cpp_SettingMouseSensitivity_FUN_005107c0 (005107c0) at 00510974 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_run_FUN_00524420 (00524420) at 005245c1 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00559b20 (00559b20) at 00559c91 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40 (004cff40) at 004cffe2 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_showExtendedFontTest_FUN_004d0850 (004d0850) at 004d0931 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEdButton_paint_FUN_004a65e0 (004a65e0) at 004a67cb [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEdCheck_setupWithText_FUN_004a6a60 (004a6a60) at 004a6abd [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0049e940 (0049e940) at 0049e95f [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890 (004a0890) at 004a08dc [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_createModalWindow_FUN_004a0970 (004a0970) at 004a099c [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 (0049e790) at 0049e7b8 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0 (004a1ca0) at 004a1cc8 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870 (0049e870) at 0049e898 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80 (004a0f80) at 004a0fa8 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 (004a0430) at 004a0478 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 (0049fb70) at 0049fbcf [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 (004a3e20) at 004a3e68 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_calculateButtonHeight_FUN_004a6970 (004a6970) at 004a69b8 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0 (004a68e0) at 004a6928 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 (0049e130) at 0049e162 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_initEditorFontMetrics_FUN_0049d1f0 (0049d1f0) at 0049d20d [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 (0049e9d0) at 0049ea19 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 (0049db10) at 0049db50 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont *this_ptr,int char_code)

{
  if ((-1 < char_code) && (char_code < 0x100)) {
    return this_ptr->char_heights[char_code] + this_ptr->char_x_advance[char_code];
  }
  return 0;
}


// Assembly code:
// 004d01d0: MOV EAX,dword ptr [ESP + 0x8]
//   Label: engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: Stack[0x8] (READ)
// 004d01d4: TEST EAX,EAX
// 004d01d6: JL 0x004d01df
//   XREF to: 004d01df (CONDITIONAL_JUMP)
// 004d01d8: CMP EAX,0x100
// 004d01dd: JL 0x004d01e2
//   XREF to: 004d01e2 (CONDITIONAL_JUMP)
// 004d01df: XOR EAX,EAX
//   Label: LAB_004d01df
// 004d01e1: RET
// 004d01e2: MOV EDX,dword ptr [ESP + 0x4]
//   Label: LAB_004d01e2
//   XREF to: Stack[0x4] (READ)
// 004d01e6: SHL EAX,0x2
// 004d01e9: ADD EDX,EAX
// 004d01eb: MOV EAX,dword ptr [EDX + 0x2968]
// 004d01f1: ADD EAX,dword ptr [EDX + 0x2d68]
// 004d01f7: RET
