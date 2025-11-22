// Name: shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
// Address: 0049e740
// Address Range: [[0049e740, 0049e783]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format, ...)
// Cross-references:
//   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 (0040eed0) at 0040ff25 [UNCONDITIONAL_CALL]
//   core_actor.cpp_FUN_0040fffe (0040fffe) at 00410059 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042f3e0 (0042f3e0) at 0042f583 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 (0043d590) at 0043d928 [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_save_FUN_00442a90 (00442a90) at 00442ba5 [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 (00443040) at 00443440 [UNCONDITIONAL_CALL]
//   core_course.cpp_OpeningCourseFile2_FUN_00442d70 (00442d70) at 00442e8c [UNCONDITIONAL_CALL]
//   core_course.cpp_OpeningCourseFileMaybe_FUN_00442bc0 (00442bc0) at 00442d1a [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_exportToS3D_FUN_00479f30 (00479f30) at 0047a352 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047decc [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_copyFile_FUN_0047c930 (0047c930) at 0047c980 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 (004bda20) at 004be000 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e19e0 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_openSomething_FUN_004e2910 (004e2910) at 004e2d44 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004df235 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0 (004e0cd0) at 004e127b [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004e2f10 (004e2f10) at 004e2f9e [UNCONDITIONAL_CALL]
//   core_menu.cpp_configureCustomKeyBindings_FUN_005138e0 (005138e0) at 0051484d [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_FUN_00524760 (00524760) at 0052484e [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_createOneHero_FUN_00524920 (00524920) at 00524a6d [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_loadActor_FUN_00523990 (00523990) at 00523ab0 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052c937 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 005385b6 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90 (00538f90) at 0053903e [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DuplicateActorCheckMaybe_FUN_0053bd80 (0053bd80) at 0053bfc6 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053c210 (0053c210) at 0053c273 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053d220 (0053d220) at 0053d360 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053eb40 (0053eb40) at 0053ec69 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_NotGoingtoAddToList_CantAdd_FUN_00538d60 (00538d60) at 00538daa [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053ac06 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UndoChangeMaybe_FUN_0053c0b0 (0053c0b0) at 0053c0f9 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_WalkAroundOnSet_FUN_00538ba0 (00538ba0) at 00538d4c [UNCONDITIONAL_CALL]
//   core_netgame.cpp_initializeNetworkToJoin_FUN_0053f900 (0053f900) at 0053fb29 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_initializeNetwork_FUN_0053fbc0 (0053fbc0) at 0053fc9d [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80 (00559f80) at 0055a2d0 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_SkipCinematic_FUN_005602e0 (005602e0) at 0056039d [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_dbLoad_FUN_005603c0 (005603c0) at 00560587 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_process_FUN_00559960 (00559960) at 00559a85 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055d530 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00562920 (00562920) at 00563ce3 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565d00 (00565d00) at 00565daf [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566180 (00566180) at 00566205 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005677a0 (005677a0) at 00567b37 [UNCONDITIONAL_CALL]
//   core_script.cpp_SCmdParm_setTemplateText_FUN_00560de0 (00560de0) at 00561584 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 005828cd [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 00583c67 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 005799ae [UNCONDITIONAL_CALL]
//   core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630 (00578630) at 0057880e [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_0057b410 (0057b410) at 0057b4e8 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_0057b500 (0057b500) at 0057b59c [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_0057b600 (0057b600) at 0057b87d [UNCONDITIONAL_CALL]
//   core_setedit.cpp_OpenSomethingBackdropThumbs_FUN_005769a0 (005769a0) at 00576d5d [UNCONDITIONAL_CALL]
//   core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0 (0057bbe0) at 0057c398 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057e38b [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 00598e12 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0 (00595fc0) at 005963e5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589c20 (00589c20) at 00589df6 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 005927e6 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c5b90 (005c5b90) at 005c5c2e [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleportDest_FUN_005da870 (005da870) at 005da8d7 [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleport_FUN_005dabe0 (005dabe0) at 005dad9d [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 (004b3920) at 004b3ae9 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 (004b5030) at 004b5279 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b44a2 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 (004b35a0) at 004b36d2 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50 (004b3f50) at 004b4071 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_load_FUN_004b2890 (004b2890) at 004b2a3f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60 (004b2a60) at 004b2ca0 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0 (004b2eb0) at 004b2f33 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_buildPodFromResponseFile_FUN_004b7ac0 (004b7ac0) at 004b7b70 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460 (004b7460) at 004b76a3 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bb236 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004ba88d [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0 (004b82a0) at 004b8564 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 (004b9f40) at 004ba303 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50 (004bca50) at 004bcb42 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 (004b76d0) at 004b7aa9 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 (004b6e10) at 004b7228 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b908f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b6369 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190 (004bd190) at 004bd234 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_searchMountedPods_FUN_004bcb70 (004bcb70) at 004bcc86 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50 (004b7f50) at 004b8205 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_copyFileTimestamp_FUN_004b31e0 (004b31e0) at 004b320f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_establishUserIdentity_FUN_004b1c00 (004b1c00) at 004b1d33 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_extractFileWithTimestamp_FUN_004b7d50 (004b7d50) at 004b7e90 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220 (004b3220) at 004b32fe [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_logOnAsVersionControlUser_FUN_004b2770 (004b2770) at 004b280b [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_readTimestampFile_FUN_004b23a0 (004b23a0) at 004b2467 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650 (004bc650) at 004bc9e0 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_promptForValidDouble_FUN_004a01f0 (004a01f0) at 004a02c0 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 (004a00f0) at 004a01af [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020 (004a0020) at 004a00c9 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_004a0300 (004a0300) at 004a03be [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 (0049f420) at 0049f721 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 (0049f270) at 0049f3ed [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_FUN_005173f0 (005173f0) at 0051751c [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_FUN_00518910 (00518910) at 0051914d [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_FUN_005197c0 (005197c0) at 00519815 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 (0051d990) at 0051e594 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_addAdjacentEdgeToVertex_FUN_00515d90 (00515d90) at 00515dc5 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_addAdjacentTriangleToEdge_FUN_00515ca0 (00515ca0) at 00515cc9 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0 (005ad5c0) at 005ad8b2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Error_00623018
//   char[256] g_ErrorMessageBuffer
//   CEditorTools* g_CUserInterfacePtr
// Function calls:
//   crt_stdio.c_vsprintf_FUN_005fdba8
//   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(CEditorTools *this_ptr,char *format,...)

{
  BADSPACEBASE *in_ESP;
  
  crt_stdio_c_vsprintf_FUN_005fdba8(g_ErrorMessageBuffer,format,(va_list_t *)&stack0xfffffff8);
  shape_edittool_cpp_drawSingleButtonPrompt_FUN_0049e130
            ("Error",g_ErrorMessageBuffer,(int)g_CUserInterfacePtr);
  return;
}


// Assembly code:
// 0049e740: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
// 0049e741: SUB ESP,0x4
// 0049e744: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[0xc] (DATA)
// 0049e748: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x8] (DATA)
// 0049e74b: MOV EAX,ESP
// 0049e74d: PUSH EAX
// 0049e74e: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0049e752: PUSH EDX
// 0049e753: PUSH 0x2cef530
//   XREF to: 02cef530 (DATA)
// 0049e758: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 0049e75d: ADD ESP,0xc
// 0049e760: MOV EBX,dword ptr [0x02cf2a94]
//   XREF to: 02cf2a94 (READ)
// 0049e766: PUSH EBX
// 0049e767: PUSH 0x2cef530
//   XREF to: 02cef530 (DATA)
// 0049e76c: XOR ECX,ECX
// 0049e76e: PUSH 0x623018
//   XREF to: 00623018 (DATA)
// 0049e773: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x8] (WRITE)
// 0049e777: CALL shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130
//   XREF to: 0049e130 (UNCONDITIONAL_CALL)
// 0049e77c: ADD ESP,0xc
// 0049e77f: ADD ESP,0x4
// 0049e782: POP EBX
// 0049e783: RET
