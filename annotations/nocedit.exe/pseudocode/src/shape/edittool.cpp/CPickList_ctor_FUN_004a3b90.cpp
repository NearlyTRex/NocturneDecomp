// Name: shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
// Address: 004a3b90
// Address Range: [[004a3b90, 004a3c7f]]
// Convention: __cdecl
// Signature: CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
// Cross-references:
//   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 (0040eed0) at 0040f64a [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_0041b280 (0041b280) at 0041b345 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00423110 (00423110) at 00423138 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042f3e0 (0042f3e0) at 0042f449 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043c430 (0043c430) at 0043c45e [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 (00479330) at 004795c9 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d2770 (004d2770) at 004d2781 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db763 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 (004e1cb0) at 004e20ca [UNCONDITIONAL_CALL]
//   core_game.cpp_staticInit_FUN_004d76d0 (004d76d0) at 004d7713 [UNCONDITIONAL_CALL]
//   core_menu.cpp_SettingCustomKeys_FUN_005138e0 (005138e0) at 005146d4 [UNCONDITIONAL_CALL]
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 00512c4b [UNCONDITIONAL_CALL]
//   core_mission.cpp_FUN_00524c20 (00524c20) at 00524c33 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052c4f1 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 005388b1 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DeleteActors_FUN_0053df90 (0053df90) at 0053e030 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90 (00538f90) at 00538fb3 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_005379e0 (005379e0) at 005379fb [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053b510 (0053b510) at 0053b5d7 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053b9f0 (0053b9f0) at 0053b9ff [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053c210 (0053c210) at 0053c235 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053c730 (0053c730) at 0053c79d [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053d3b0 (0053d3b0) at 0053d3c3 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053d8b0 (0053d8b0) at 0053d8dc [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053ec80 (0053ec80) at 0053ec99 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_HideActors_FUN_0053dcf0 (0053dcf0) at 0053dd06 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053a843 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_RelevantActorsToTesting_FUN_0053b030 (0053b030) at 0053b0f7 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_RunNoneFunctorForCancelAndElse_FUN_0053cad0 (0053cad0) at 0053caeb [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0 (0053ccf0) at 0053cf4a [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054e530 (0054e530) at 0054e569 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80 (00559f80) at 0055a191 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00562920 (00562920) at 00563bc6 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005677a0 (005677a0) at 005677b9 [UNCONDITIONAL_CALL]
//   core_script.cpp_SCmdParse_bestParse_FUN_00561db0 (00561db0) at 00561e3c [UNCONDITIONAL_CALL]
//   core_script.cpp_staticInit_FUN_005591b0 (005591b0) at 005591b5 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 00581e7e [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 00579889 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 (00584940) at 00584bc3 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057eb81 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00580fd9 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630 (00578630) at 00578666 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00581450 (00581450) at 00581461 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0 (0057bbe0) at 0057c180 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057e270 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 (0057c5d0) at 0057ca61 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_staticInit_FUN_00576930 (00576930) at 00576935 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 00597fc7 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589c20 (00589c20) at 00589c8c [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058afe0 (0058afe0) at 0058b000 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c6b7 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058f810 (0058f810) at 005914f6 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 00592a4e [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b3d20 (005b3d20) at 005b3d2c [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleportDest_FUN_005da870 (005da870) at 005da89c [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 (004b5030) at 004b50f8 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b44dd [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50 (004b3f50) at 004b409b [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460 (004b7460) at 004b74f6 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bb17b [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0 (004b82a0) at 004b8333 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0 (004bccf0) at 004bcd20 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 (004b9f40) at 004ba135 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 (004b76d0) at 004b776e [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b8d63 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0 (004bcec0) at 004bcf67 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b60e5 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_searchMountedPods_FUN_004bcb70 (004bcb70) at 004bcbde [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0 (004bc2b0) at 004bc430 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50 (004b7f50) at 004b802f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90 (004b2f90) at 004b2fcc [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230 (00550230) at 0055042c [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 (0049f420) at 0049f4cc [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 (0049f270) at 0049f284 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d990 (0051d990) at 0051e5db [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0 (005ad5c0) at 005ad5cd [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_OK_006239eb
//   TerminatedCString s_Cancel_006239ee
//   CStrList_vtable g_CPickListVTable
// Function calls:
//   shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0
//   shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0
//   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0

#include "nocturne.h"

CPickList * __cdecl shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(CPickList *this_ptr)

{
  char cVar1;
  CStrList *pCVar2;
  CEdScrollBar *pCVar3;
  CEdButton *pCVar4;
  char *pcVar5;
  char *pcVar6;
  
  pCVar2 = shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&this_ptr->base_strlist);
  pCVar3 = shape_edittool_cpp_CEdScrollBar_ctor_FUN_004a5ae0((CEdScrollBar *)&pCVar2[0x1a].capacity)
  ;
  pCVar4 = shape_edittool_cpp_CEdButton_ctor_FUN_004a64e0((CEdButton *)&pCVar3[1].current_value);
  pCVar4 = shape_edittool_cpp_CEdButton_ctor_FUN_004a64e0(pCVar4 + 1);
  *(CStrList_vtable **)(pCVar4[-4].button_text + 0xc0) = &g_CPickListVTable;
  pCVar4[-0xffffffff00000002].button_text[0xc4] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0xc5] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0xc6] = '\0';
  pCVar4[-0xffffffff00000002].button_text[199] = '\0';
  pCVar4[1].enabled = -1;
  pCVar4[-0xffffffff00000002].button_text[0x80] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0x81] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0x82] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0x83] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0x84] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0x85] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0x86] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0x87] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0x88] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0x89] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0x8a] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0x8b] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0x8c] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0x8d] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0x8e] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0x8f] = '\0';
  pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("OK");
  pcVar6 = pCVar4[-3].button_text + 0x14;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Cancel");
  pcVar6 = pCVar4[-3].button_text + 0x78;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pCVar4[-0xffffffff00000003].button_text[0xc] = -1;
  pCVar4[-0xffffffff00000003].button_text[0xd] = -1;
  pCVar4[-0xffffffff00000003].button_text[0xe] = -1;
  pCVar4[-0xffffffff00000003].button_text[0xf] = -1;
  pCVar4[-0xffffffff00000003].button_text[0x10] = '\0';
  pCVar4[-0xffffffff00000003].button_text[0x11] = '\0';
  pCVar4[-0xffffffff00000003].button_text[0x12] = '\0';
  pCVar4[-0xffffffff00000003].button_text[0x13] = '\0';
  return (CPickList *)(pCVar4[-4].button_text + 0xb4);
}


// Assembly code:
// 004a3b90: PUSH EBX
//   Label: shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
// 004a3b91: PUSH ESI
// 004a3b92: PUSH EDI
// 004a3b93: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004a3b97: PUSH EBX
// 004a3b98: CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
// 004a3b9d: ADD ESP,0x4
// 004a3ba0: ADD EAX,0x1a4
// 004a3ba5: PUSH EAX
// 004a3ba6: CALL shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0
//   XREF to: 004a5ae0 (UNCONDITIONAL_CALL)
// 004a3bab: ADD ESP,0x4
// 004a3bae: ADD EAX,0x38
// 004a3bb1: PUSH EAX
// 004a3bb2: CALL shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0
//   XREF to: 004a64e0 (UNCONDITIONAL_CALL)
// 004a3bb7: ADD ESP,0x4
// 004a3bba: ADD EAX,0xe4
// 004a3bbf: PUSH EAX
// 004a3bc0: CALL shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0
//   XREF to: 004a64e0 (UNCONDITIONAL_CALL)
// 004a3bc5: LEA EBX,[EAX + 0xfffffd40]
// 004a3bcb: MOV dword ptr [EBX + 0xc],0x65d494
//   XREF to: 0065d494 (DATA)
// 004a3bd2: MOV dword ptr [EBX + 0x1d8],0x0
// 004a3bdc: MOV dword ptr [EBX + 0x3a4],0xffffffff
// 004a3be6: MOV dword ptr [EBX + 0x194],0x0
// 004a3bf0: MOV dword ptr [EBX + 0x198],0x0
// 004a3bfa: ADD ESP,0x4
// 004a3bfd: MOV dword ptr [EBX + 0x19c],0x0
// 004a3c07: PUSH 0x6239eb
//   XREF to: 006239eb (DATA)
// 004a3c0c: MOV dword ptr [EBX + 0x1a0],0x0
// 004a3c16: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004a3c1b: ADD ESP,0x4
// 004a3c1e: LEA EDI,[EBX + 0x44]
// 004a3c21: MOV ESI,EAX
// 004a3c23: PUSH EDI
// 004a3c24: MOV AL,byte ptr [ESI]
//   Label: LAB_004a3c24
// 004a3c26: MOV byte ptr [EDI],AL
// 004a3c28: CMP AL,0x0
// 004a3c2a: JZ 0x004a3c3c
//   XREF to: 004a3c3c (CONDITIONAL_JUMP)
// 004a3c2c: MOV AL,byte ptr [ESI + 0x1]
// 004a3c2f: ADD ESI,0x2
// 004a3c32: MOV byte ptr [EDI + 0x1],AL
// 004a3c35: ADD EDI,0x2
// 004a3c38: CMP AL,0x0
// 004a3c3a: JNZ 0x004a3c24
//   XREF to: 004a3c24 (CONDITIONAL_JUMP)
// 004a3c3c: POP EDI
//   Label: LAB_004a3c3c
// 004a3c3d: PUSH 0x6239ee
//   XREF to: 006239ee (DATA)
// 004a3c42: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004a3c47: ADD ESP,0x4
// 004a3c4a: LEA EDI,[EBX + 0xa8]
// 004a3c50: MOV ESI,EAX
// 004a3c52: PUSH EDI
// 004a3c53: MOV AL,byte ptr [ESI]
//   Label: LAB_004a3c53
// 004a3c55: MOV byte ptr [EDI],AL
// 004a3c57: CMP AL,0x0
// 004a3c59: JZ 0x004a3c6b
//   XREF to: 004a3c6b (CONDITIONAL_JUMP)
// 004a3c5b: MOV AL,byte ptr [ESI + 0x1]
// 004a3c5e: ADD ESI,0x2
// 004a3c61: MOV byte ptr [EDI + 0x1],AL
// 004a3c64: ADD EDI,0x2
// 004a3c67: CMP AL,0x0
// 004a3c69: JNZ 0x004a3c53
//   XREF to: 004a3c53 (CONDITIONAL_JUMP)
// 004a3c6b: POP EDI
//   Label: LAB_004a3c6b
// 004a3c6c: MOV dword ptr [EBX + 0x3c],0xffffffff
// 004a3c73: MOV EAX,EBX
// 004a3c75: MOV dword ptr [EBX + 0x40],0x0
// 004a3c7c: POP EDI
// 004a3c7d: POP ESI
// 004a3c7e: POP EBX
// 004a3c7f: RET
