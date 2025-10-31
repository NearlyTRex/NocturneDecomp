// Name: wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00
// Address: 005f2f00
// Address Range: [[005f2f00, 005f2f15]]
// Convention: __cdecl
// Signature: bool wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00(void)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047d63a [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_openSomething_FUN_004e2910 (004e2910) at 004e2d01 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004ddb9f [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_Unk20_FUN_00565130 (00565130) at 00565771 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_BackdropMaybe_FUN_005805a0 (005805a0) at 005806bc [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057ea56 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00580ae5 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057e21f [UNCONDITIONAL_CALL]
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 (0057c5d0) at 0057c99c [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160 (00446160) at 00447434 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 (0049fb70) at 0049fdb9 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_handleInput_FUN_004a3f20 (004a3f20) at 004a4030 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 (0049e130) at 0049e2de [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 (0049e9d0) at 0049ee1c [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 (0049db10) at 0049dda6 [UNCONDITIONAL_CALL]
//   wincore_winvideo.cpp_playMovie_FUN_005f4a00 (005f4a00) at 005f4d1c [UNCONDITIONAL_CALL]
// Globals:
//   int g_InputReadIndex
//   int g_InputWriteIndex

#include "nocturne.h"

bool __cdecl wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(void)

{
  return g_InputReadIndex != g_InputWriteIndex;
}


// Assembly code:
// 005f2f00: MOV EDX,dword ptr [0x03f96c1c]
//   Label: wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00
//   XREF to: 03f96c1c (READ)
// 005f2f06: MOV EAX,[0x03f96c18]
//   XREF to: 03f96c18 (READ)
// 005f2f0b: CMP EAX,EDX
// 005f2f0d: SETNZ AL
// 005f2f10: AND EAX,0xff
// 005f2f15: RET
