// Name: shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
// Address: 004a2f70
// Address Range: [[004a2f70, 004a2f7e]]
// Convention: __cdecl
// Signature: char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042f3e0 (0042f3e0) at 0042f639 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043c430 (0043c430) at 0043c523 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_preprocessMusicFiles_FUN_004bd750 (004bd750) at 004bd7a6 [UNCONDITIONAL_CALL]
//   core_mission.cpp_FUN_00524c20 (00524c20) at 00524cb6 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052c9f3 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DeleteActors_FUN_0053df90 (0053df90) at 0053e089 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053b510 (0053b510) at 0053b907 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053b9f0 (0053b9f0) at 0053ba75 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053c210 (0053c210) at 0053c2e4 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053d8b0 (0053d8b0) at 0053d9ba [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_HideActors_FUN_0053dcf0 (0053dcf0) at 0053ddd7 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053ac4a [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_RelevantActorsToTesting_FUN_0053b030 (0053b030) at 0053b427 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_RunNoneFunctorForCancelAndElse_FUN_0053cad0 (0053cad0) at 0053cb66 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0 (0053ccf0) at 0053d01a [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370 (0055a370) at 0055a3af [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_RelatedToSubtitles_FUN_00559d80 (00559d80) at 00559ed7 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_editorAction_FUN_00564820 (00564820) at 00564c8d [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_editorIndex2X_FUN_00566b30 (00566b30) at 00566b55 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_editorX2Index_FUN_00566a90 (00566a90) at 00566ab5 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00561a30 (00561a30) at 00561b20 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00562920 (00562920) at 00563620 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565ae0 (00565ae0) at 00565b4d [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565d00 (00565d00) at 00565d3e [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565e70 (00565e70) at 00565f19 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565f70 (00565f70) at 00565fc1 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566180 (00566180) at 005661de [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566230 (00566230) at 00566256 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005664d0 (005664d0) at 0056652e [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566800 (00566800) at 00566827 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566cc0 (00566cc0) at 00566d97 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005671a0 (005671a0) at 0056722a [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005677a0 (005677a0) at 00567b67 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00581128 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0 (00595fc0) at 00596782 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058afe0 (0058afe0) at 0058b113 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 00593811 [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b17d0 (005b17d0) at 005b1814 [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b1ed0 (005b1ed0) at 005b1f28 [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleportDest_FUN_005da870 (005da870) at 005da931 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50 (004b3f50) at 004b4139 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 (004b9f40) at 004ba340 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0 (004ba6c0) at 004ba702 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b8926 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0 (004bcec0) at 004bcfa5 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620 (004ba620) at 004ba6a2 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650 (004bc650) at 004bc6b2 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0 (004a45d0) at 004a4638 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_handleInput_FUN_004a3f20 (004a3f20) at 004a40a8 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40 (004a4d40) at 004a5094 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_copyFrom_FUN_004a2ac0 (004a2ac0) at 004a2af5 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_copyToClipboard_FUN_004a3270 (004a3270) at 004a3287 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_findByFirstField_FUN_004a3070 (004a3070) at 004a30a8 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_findString_FUN_004a3030 (004a3030) at 004a3046 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80 (004a2f80) at 004a2f9f [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_insertRange_FUN_004a2d80 (004a2d80) at 004a2dba [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_004a3360 (004a3360) at 004a33d6 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 (004a37b0) at 004a391c [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 (0049e9d0) at 0049eaa5 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20 (005acf20) at 005ad197 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0 (005ad5c0) at 005ad903 [UNCONDITIONAL_CALL]

#include "nocturne.h"

char * __cdecl shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(CStrList *this_ptr,int index)

{
  return this_ptr->data_array[index];
}


// Assembly code:
// 004a2f70: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: Stack[0x4] (READ)
// 004a2f74: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004a2f78: MOV EAX,dword ptr [EAX + 0x8]
// 004a2f7b: MOV EAX,dword ptr [EAX + EDX*0x4]
// 004a2f7e: RET
