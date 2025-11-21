// Name: shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
// Address: 004a3e20
// Address Range: [[004a3e20, 004a3eed]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
// Cross-references:
//   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 (0040eed0) at 0040f4e3 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CBodyPart_initializeInEditor_FUN_0041b280 (0041b280) at 0041b3e5 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00423110 (00423110) at 004231cf [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042f3e0 (0042f3e0) at 0042f4f5 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043c430 (0043c430) at 0043c4bc [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 (00479330) at 0047961d [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d2770 (004d2770) at 004d2827 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db4cc [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 (004e1cb0) at 004e2784 [UNCONDITIONAL_CALL]
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 00512c97 [UNCONDITIONAL_CALL]
//   core_menu.cpp_configureCustomKeyBindings_FUN_005138e0 (005138e0) at 00514783 [UNCONDITIONAL_CALL]
//   core_mission.cpp_FUN_00524c20 (00524c20) at 00524c9f [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052c9dc [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 005388f6 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DeleteActors_FUN_0053df90 (0053df90) at 0053e010 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90 (00538f90) at 00539007 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_005379e0 (005379e0) at 00537a3d [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053b510 (0053b510) at 0053b78f [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053b9f0 (0053b9f0) at 0053ba5a [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053c210 (0053c210) at 0053c2d2 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053c730 (0053c730) at 0053c845 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053d3b0 (0053d3b0) at 0053d74f [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053d8b0 (0053d8b0) at 0053d9a1 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053ec80 (0053ec80) at 0053edda [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_HideActors_FUN_0053dcf0 (0053dcf0) at 0053dd51 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053ac30 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_RelevantActorsToTesting_FUN_0053b030 (0053b030) at 0053b2af [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_RunNoneFunctorForCancelAndElse_FUN_0053cad0 (0053cad0) at 0053cb50 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0 (0053ccf0) at 0053d002 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054e530 (0054e530) at 0054e5ce [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80 (00559f80) at 0055a1ea [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00562920 (00562920) at 00563247 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566080 (00566080) at 005660e7 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005677a0 (005677a0) at 00567987 [UNCONDITIONAL_CALL]
//   core_script.cpp_SCmdParse_bestParse_FUN_00561db0 (00561db0) at 00561e8e [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0 (00576da0) at 00576fa5 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 00581efe [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 005798cf [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 (00584940) at 00584bfe [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057ee45 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 005810f6 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630 (00578630) at 00578701 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00581450 (00581450) at 005814d5 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0 (0057bbe0) at 0057c314 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057e2f2 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 (0057c5d0) at 0057cc01 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 00598188 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810 (0058f810) at 00591550 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589c20 (00589c20) at 00589cd8 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058afe0 (0058afe0) at 0058b0bd [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c734 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 005937da [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_selectReverbPreset_FUN_005b3d20 (005b3d20) at 005b3d6c [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleportDest_FUN_005da870 (005da870) at 005da91e [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 (004b5030) at 004b51fc [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b4529 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50 (004b3f50) at 004b4127 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460 (004b7460) at 004b765b [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bb1d3 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0 (004b82a0) at 004b851e [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0 (004bccf0) at 004bcd6c [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 (004b9f40) at 004ba4b9 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 (004b76d0) at 004b7812 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b8e4f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0 (004bcec0) at 004bd019 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b6419 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_searchMountedPods_FUN_004bcb70 (004bcb70) at 004bccc2 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0 (004bc2b0) at 004bc49c [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50 (004b7f50) at 004b81bd [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90 (004b2f90) at 004b3084 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230 (00550230) at 00550518 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 (0049f420) at 0049f69e [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 (0049f270) at 0049f357 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 (0051d990) at 0051e627 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0 (005ad5c0) at 005adb92 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00622eae
//   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_InputKeyMask = 0x7f
//   CBitFont* g_EditorFont
//   CEditorTools g_CEditorToolsPtr
//   int g_FontCharacterHeight
//   int g_FontCharacterWidth
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   shape_edittool.cpp_CPickList_handleDialogInput_FUN_004a4340
//   shape_edittool.cpp_CPickList_initializeDialog_FUN_004a3ef0
//   shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
          (CPickList *this_ptr,char *dialog_title,int config_param1,int config_param2)

{
  int iVar1;
  int iVar2;
  int in_stack_00000014;
  int in_stack_00000018;
  
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_height;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x6a);
  iVar1 = g_InputKeyMask;
  if (0 < (this_ptr->base_strlist).item_count) {
    g_InputKeyMask = 0x7f;
    shape_edittool_cpp_CPickList_initializeDialog_FUN_004a3ef0
              (this_ptr,(char *)config_param2,in_stack_00000014,in_stack_00000018);
    do {
      iVar2 = shape_edittool_cpp_CPickList_handleDialogInput_FUN_004a4340(this_ptr);
      shape_edittool_cpp_CPickList_renderDialog_FUN_004a4d40(this_ptr);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    } while (iVar2 == -2);
    engine_2d_c_clearInputAndWait_FUN_00403260();
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    g_InputKeyMask = iVar1;
    return iVar2;
  }
  return -1;
}


// Assembly code:
// 004a3e20: PUSH EBX
//   Label: shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
// 004a3e21: PUSH ESI
// 004a3e22: PUSH EDI
// 004a3e23: PUSH EBP
// 004a3e24: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004a3e28: CMP dword ptr [0x02cf1cd0],0x0
//   XREF to: 02cf1cd0 (READ)
// 004a3e2f: JNZ 0x004a3e54
//   XREF to: 004a3e54 (CONDITIONAL_JUMP)
// 004a3e31: MOV ECX,0x622eae
//   XREF to: 00622eae (PARAM)
// 004a3e36: MOV EBX,0x8d
// 004a3e3b: PUSH 0x622ec4
//   XREF to: 00622ec4 (DATA)
// 004a3e40: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004a3e46: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 004a3e4c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a3e51: ADD ESP,0x4
// 004a3e54: MOV EAX,[0x02cf1cd0]
//   Label: LAB_004a3e54
//   XREF to: 02cf1cd0 (READ)
// 004a3e59: PUSH 0x6a
// 004a3e5b: MOV EBX,dword ptr [EAX + 0x3168]
// 004a3e61: PUSH EAX
// 004a3e62: MOV dword ptr [0x02cf2668],EBX
//   XREF to: 02cf2668 (WRITE)
// 004a3e68: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004a3e6d: ADD ESP,0x8
// 004a3e70: MOV EDI,dword ptr [ESI]
// 004a3e72: MOV [0x02cf266c],EAX
//   XREF to: 02cf266c (WRITE)
// 004a3e77: CMP EDI,0x1
// 004a3e7a: JL 0x004a3ee4
//   XREF to: 004a3ee4 (CONDITIONAL_JUMP)
// 004a3e7c: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004a3e80: PUSH EAX
// 004a3e81: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 004a3e85: PUSH EDX
// 004a3e86: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 004a3e8a: PUSH ECX
// 004a3e8b: MOV EBP,0x7f
// 004a3e90: PUSH ESI
// 004a3e91: MOV EDI,dword ptr [0x006793a8]
//   XREF to: 006793a8 (READ)
// 004a3e97: MOV dword ptr [0x006793a8],EBP
//   XREF to: 006793a8 (WRITE)
// 004a3e9d: CALL shape_edittool.cpp_CPickList_initializeDialog_FUN_004a3ef0
//   XREF to: 004a3ef0 (UNCONDITIONAL_CALL)
// 004a3ea2: ADD ESP,0x10
// 004a3ea5: PUSH ESI
//   Label: LAB_004a3ea5
// 004a3ea6: CALL shape_edittool.cpp_CPickList_handleDialogInput_FUN_004a4340
//   XREF to: 004a4340 (UNCONDITIONAL_CALL)
// 004a3eab: ADD ESP,0x4
// 004a3eae: PUSH ESI
// 004a3eaf: MOV EBX,EAX
// 004a3eb1: CALL shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40
//   XREF to: 004a4d40 (UNCONDITIONAL_CALL)
// 004a3eb6: ADD ESP,0x4
// 004a3eb9: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 004a3ebe: CMP EBX,-0x2
// 004a3ec1: JZ 0x004a3ea5
//   XREF to: 004a3ea5 (CONDITIONAL_JUMP)
// 004a3ec3: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 004a3ec8: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004a3ece: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004a3ecf: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 004a3ed4: ADD ESP,0x4
// 004a3ed7: MOV dword ptr [0x006793a8],EDI
//   XREF to: 006793a8 (WRITE)
// 004a3edd: MOV EAX,EBX
// 004a3edf: POP EBP
// 004a3ee0: POP EDI
// 004a3ee1: POP ESI
// 004a3ee2: POP EBX
// 004a3ee3: RET
// 004a3ee4: MOV EAX,0xffffffff
//   Label: LAB_004a3ee4
// 004a3ee9: POP EBP
// 004a3eea: POP EDI
// 004a3eeb: POP ESI
// 004a3eec: POP EBX
// 004a3eed: RET
