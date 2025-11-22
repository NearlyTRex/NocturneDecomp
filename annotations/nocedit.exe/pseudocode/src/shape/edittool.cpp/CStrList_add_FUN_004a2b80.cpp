// Name: shape_edittool.cpp_CStrList_add_FUN_004a2b80
// Address: 004a2b80
// Address Range: [[004a2b80, 004a2b98]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
// Cross-references:
//   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 (0040eed0) at 0040f665 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CBodyPart_initializeInEditor_FUN_0041b280 (0041b280) at 0041b3c6 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00423110 (00423110) at 00423156 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042f3e0 (0042f3e0) at 0042f544 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043c430 (0043c430) at 0043c498 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 (00479330) at 00479605 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d2770 (004d2770) at 004d27a5 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db780 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 (004e1cb0) at 004e2100 [UNCONDITIONAL_CALL]
//   core_menu.cpp_configureCustomKeyBindings_FUN_005138e0 (005138e0) at 00514746 [UNCONDITIONAL_CALL]
//   core_menu.cpp_configureSoundOptions_FUN_00511e50 (00511e50) at 00512c7b [UNCONDITIONAL_CALL]
//   core_mission.cpp_FUN_00524c20 (00524c20) at 00524c5d [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052c545 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DeleteActors_FUN_0053df90 (0053df90) at 0053dfc7 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90 (00538f90) at 00538fd2 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00536bf0 (00536bf0) at 00536cac [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00537330 (00537330) at 005373f4 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_005379e0 (005379e0) at 00537a10 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053b510 (0053b510) at 0053b845 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053b9f0 (0053b9f0) at 0053ba26 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053c210 (0053c210) at 0053c25b [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053c730 (0053c730) at 0053c7f5 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053cc30 (0053cc30) at 0053cc83 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053d3b0 (0053d3b0) at 0053d589 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053d8b0 (0053d8b0) at 0053d933 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053ec80 (0053ec80) at 0053ed69 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_HideActors_FUN_0053dcf0 (0053dcf0) at 0053dd2a [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053a865 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_RelevantActorsToTesting_FUN_0053b030 (0053b030) at 0053b365 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_RunNoneFunctorForCancelAndElse_FUN_0053cad0 (0053cad0) at 0053cbac [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0 (0053ccf0) at 0053cfc3 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054e530 (0054e530) at 0054e58d [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_CallLoadingScriptFile_FUN_00566fa0 (00566fa0) at 00567003 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80 (00559f80) at 0055a1a3 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_editorAction_FUN_00564820 (00564820) at 00565062 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_editorPutLine_FUN_005662a0 (005662a0) at 0056631a [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055c561 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_0055ff00 (0055ff00) at 0055ffcc [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00562920 (00562920) at 00563060 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00567310 (00567310) at 00567422 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005677a0 (005677a0) at 00567a26 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00567bc0 (00567bc0) at 00567c8e [UNCONDITIONAL_CALL]
//   core_script.cpp_SCmdParse_bestParse_FUN_00561db0 (00561db0) at 00561e69 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 00581e92 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 005798b3 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 (00584940) at 00584bdb [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057eba4 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00581021 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630 (00578630) at 00578861 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00581450 (00581450) at 00581473 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_OpenSomethingBackdropThumbs_FUN_005769a0 (005769a0) at 00576a35 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0 (0057bbe0) at 0057c2e9 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057e2c4 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 (0057c5d0) at 0057ca8b [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 00598005 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810 (0058f810) at 0059150b [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0 (00595fc0) at 00596547 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589c20 (00589c20) at 00589c9e [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058afe0 (0058afe0) at 0058b069 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c6e5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 00593086 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_selectReverbPreset_FUN_005b3d20 (005b3d20) at 005b3d43 [UNCONDITIONAL_CALL]
//   core_sound.cpp_playSfxInternal_FUN_005b1fd0 (005b1fd0) at 005b2482 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 (004b5030) at 004b51b6 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b44ef [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50 (004b3f50) at 004b40f6 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460 (004b7460) at 004b7612 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bb190 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0 (004b82a0) at 004b8600 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0 (004bccf0) at 004bcd44 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 (004b9f40) at 004ba480 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 (004b76d0) at 004b77ba [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b8e05 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0 (004bcec0) at 004bd096 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0 (004ba4f0) at 004ba5bd [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b6b00 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_searchMountedPods_FUN_004bcb70 (004bcb70) at 004bcc42 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0 (004bc2b0) at 004bc442 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50 (004b7f50) at 004b810d [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90 (004b2f90) at 004b3002 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230 (00550230) at 005504c8 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060 (0049f060) at 0049f0b0 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f180 (0049f180) at 0049f1be [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 (0049f420) at 0049f8a3 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0 (0049f0f0) at 0049f140 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_copyFrom_FUN_004a2ac0 (004a2ac0) at 004a2b00 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 (004a37b0) at 004a39ab [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0 (004a39e0) at 004a3b38 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 (0051d990) at 0051e5ed [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20 (005acf20) at 005ad395 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0 (005ad5c0) at 005ada45 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_add_FUN_004a2b80(CStrList *this_ptr,char *string_data)

{
  (*this_ptr->vtable->insert)(this_ptr,this_ptr->item_count,string_data);
  return;
}


// Assembly code:
// 004a2b80: PUSH EBX
//   Label: shape_edittool.cpp_CStrList_add_FUN_004a2b80
// 004a2b81: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004a2b85: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004a2b89: PUSH ECX
// 004a2b8a: MOV EBX,dword ptr [EDX]
// 004a2b8c: PUSH EBX
// 004a2b8d: MOV EAX,dword ptr [EDX + 0xc]
// 004a2b90: PUSH EDX
// 004a2b91: CALL dword ptr [EAX + 0xc]
// 004a2b94: ADD ESP,0xc
// 004a2b97: POP EBX
// 004a2b98: RET
