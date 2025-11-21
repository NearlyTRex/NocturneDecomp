// Name: shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
// Address: 004a03d0
// Address Range: [[004a03d0, 004a03f2]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, int dialog_flags)
// Cross-references:
//   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 (0040eed0) at 0040f180 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 (00479330) at 00479790 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047e684 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 (004bda20) at 004bdaeb [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 (004be270) at 004be51b [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004df205 [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004e2fc0 (004e2fc0) at 004e2feb [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 00538b3e [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DeleteActors_FUN_0053df90 (0053df90) at 0053e1a3 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DuplicateActorCheckMaybe_FUN_0053bd80 (0053bd80) at 0053c024 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00537410 (00537410) at 00537462 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_005379e0 (005379e0) at 00537ad3 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053b9f0 (0053b9f0) at 0053bb6a [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_HideActors_FUN_0053dcf0 (0053dcf0) at 0053df00 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0 (0053ccf0) at 0053d0c4 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_FUN_00541390 (00541390) at 00541c50 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_Unk20_FUN_00565130 (00565130) at 005655a0 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00562920 (00562920) at 00562a68 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50 (0057ae50) at 0057b2d3 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057ef71 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_0057b410 (0057b410) at 0057b492 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_0057b600 (0057b600) at 0057b837 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0 (0057bbe0) at 0057c105 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 00598883 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810 (0058f810) at 0058fdf2 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c484 [UNCONDITIONAL_CALL]
//   core_sound.cpp_editSoundName_FUN_005b3de0 (005b3de0) at 005b3df6 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_buildPodFromResponseFile_FUN_004b7ac0 (004b7ac0) at 004b7adf [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 (004b9f40) at 004b9fa6 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b874f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b6392 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190 (004bd190) at 004bd280 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_searchMountedPods_FUN_004bcb70 (004bcb70) at 004bcbbf [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_establishUserIdentity_FUN_004b1c00 (004b1c00) at 004b1c5c [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_promptForValidDouble_FUN_004a01f0 (004a01f0) at 004a0238 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 (004a00f0) at 004a0129 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020 (004a0020) at 004a004e [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_004a0300 (004a0300) at 004a0329 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 (0049f420) at 0049f6e5 [UNCONDITIONAL_CALL]
// Function calls:
//   shape_edittool.cpp_showTextInputDialog_FUN_0049db10

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
          (CEditorTools *this_ptr,char *prompt_text,char *input_buffer,int buffer_size,
          int dialog_flags)

{
  int iVar1;
  
  iVar1 = shape_edittool_cpp_showTextInputDialog_FUN_0049db10
                    ((int)prompt_text,input_buffer,(char *)buffer_size,dialog_flags,0);
  return iVar1;
}


// Assembly code:
// 004a03d0: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
// 004a03d1: PUSH ESI
// 004a03d2: PUSH 0x0
// 004a03d4: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 004a03d8: PUSH EDX
// 004a03d9: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004a03dd: PUSH ECX
// 004a03de: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 004a03e2: PUSH EBX
// 004a03e3: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 004a03e7: PUSH ESI
// 004a03e8: CALL shape_edittool.cpp_showTextInputDialog_FUN_0049db10
//   XREF to: 0049db10 (UNCONDITIONAL_CALL)
// 004a03ed: ADD ESP,0x14
// 004a03f0: POP ESI
// 004a03f1: POP EBX
// 004a03f2: RET
