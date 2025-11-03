// Name: shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
// Address: 0049e6a0
// Address Range: [[0049e6a0, 0049e6e3]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format, ...)
// Cross-references:
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e1be2 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004de3fb [UNCONDITIONAL_CALL]
//   core_game.cpp_PleaseEnterValidInteger_FUN_004d7730 (004d7730) at 004d77f5 [UNCONDITIONAL_CALL]
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 005079b8 [UNCONDITIONAL_CALL]
//   core_mission.cpp_FUN_00524c20 (00524c20) at 00524d83 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 00538a7c [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CheckWorldMountedAndSave_FUN_0053d190 (0053d190) at 0053d211 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DeleteActors_FUN_0053df90 (0053df90) at 0053e166 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00537230 (00537230) at 00537318 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_005379e0 (005379e0) at 00537c5d [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00537dd0 (00537dd0) at 00537f49 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053b510 (0053b510) at 0053b9de [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_HideActors_FUN_0053dcf0 (0053dcf0) at 0053deaa [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_OpenAndCreateWorld_FUN_00537f60 (00537f60) at 005381cc [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_RelevantActorsToTesting_FUN_0053b030 (0053b030) at 0053b4fe [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0 (0053ccf0) at 0053ce9a [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_FUN_0053fd00 (0053fd00) at 0053fe6c [UNCONDITIONAL_CALL]
//   core_netgame.cpp_FUN_00541390 (00541390) at 005416c9 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80 (00559f80) at 0055a217 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055c792 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_BackdropMaybe_FUN_005805a0 (005805a0) at 005806e4 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 005986cd [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_save_FUN_0058f040 (0058f040) at 0058f097 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_005897b0 (005897b0) at 00589961 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589b10 (00589b10) at 00589ba1 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589c20 (00589c20) at 00589eaa [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589f40 (00589f40) at 00589f8a [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058b2c0 (0058b2c0) at 0058b317 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 00595df0 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_viewModel_FUN_00598fc0 (00598fc0) at 005992b3 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 (004b9f40) at 004ba2bb [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b9016 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190 (004bd190) at 004bd5f2 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_verifyPodCRC_FUN_004b7c90 (004b7c90) at 004b7d0f [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0 (005ad5c0) at 005ad7f0 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Message_00623008
//   char[512] g_MessageFormatBuffer
//   int g_WindowFontColor
// Function calls:
//   crt_stdio.c_vsprintf_FUN_005fdba8
//   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools *this_ptr,char *format,...)

{
  BADSPACEBASE *in_ESP;
  
  crt_stdio_c_vsprintf_FUN_005fdba8(g_MessageFormatBuffer,format,(va_list_t *)&stack0xfffffff8);
  shape_edittool_cpp_drawSingleButtonPrompt_FUN_0049e130
            ("Message",g_MessageFormatBuffer,g_WindowFontColor);
  return;
}


// Assembly code:
// 0049e6a0: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
// 0049e6a1: SUB ESP,0x4
// 0049e6a4: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[0xc] (DATA)
// 0049e6a8: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x8] (DATA)
// 0049e6ab: MOV EAX,ESP
// 0049e6ad: PUSH EAX
// 0049e6ae: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0049e6b2: PUSH EDX
// 0049e6b3: PUSH 0x2ceed30
//   XREF to: 02ceed30 (DATA)
// 0049e6b8: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 0049e6bd: ADD ESP,0xc
// 0049e6c0: MOV EBX,dword ptr [0x02cf2a8c]
//   XREF to: 02cf2a8c (READ)
// 0049e6c6: PUSH EBX
// 0049e6c7: PUSH 0x2ceed30
//   XREF to: 02ceed30 (DATA)
// 0049e6cc: XOR ECX,ECX
// 0049e6ce: PUSH 0x623008
//   XREF to: 00623008 (DATA)
// 0049e6d3: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x8] (WRITE)
// 0049e6d7: CALL shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130
//   XREF to: 0049e130 (UNCONDITIONAL_CALL)
// 0049e6dc: ADD ESP,0xc
// 0049e6df: ADD ESP,0x4
// 0049e6e2: POP EBX
// 0049e6e3: RET
