// Name: shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
// Address: 004a2a20
// Address Range: [[004a2a20, 004a2a3f]]
// Convention: __cdecl
// Signature: CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
// Cross-references:
//   core_fileman.cpp_preprocessMusicFiles_FUN_004bd750 (004bd750) at 004bd762 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053b510 (0053b510) at 0053b522 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_RelevantActorsToTesting_FUN_0053b030 (0053b030) at 0053b042 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_ctor_FUN_005597f0 (005597f0) at 005597f8 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00561a30 (00561a30) at 00561a42 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005671a0 (005671a0) at 005671c0 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0 (00595fc0) at 00596084 [UNCONDITIONAL_CALL]
//   core_sound.cpp_PlaySfxByStringMaybe_FUN_005b1fd0 (005b1fd0) at 005b2461 [UNCONDITIONAL_CALL]
//   core_sound.cpp_staticInit_FUN_005b1760 (005b1760) at 005b1772 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bb49a [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004bae37 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0 (004bccf0) at 004bcd8f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 (004b9f40) at 004b9ff0 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 (004b6e10) at 004b7124 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b8795 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0 (004bcec0) at 004bcf03 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0 (004bc2b0) at 004bc364 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650 (004bc650) at 004bc662 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060 (0049f060) at 0049f08c [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f180 (0049f180) at 0049f1ac [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0 (0049f0f0) at 0049f11c [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 (004a3b90) at 004a3b98 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20 (005acf20) at 005ad0a6 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0 (005ad5c0) at 005ad6eb [UNCONDITIONAL_CALL]
// Globals:
//   CStrList_vtable g_CStrListVTable

#include "nocturne.h"

CStrList * __cdecl shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(CStrList *this_ptr)

{
  this_ptr->item_count = 0;
  this_ptr->data_array = (char **)0x0;
  this_ptr->capacity = 0;
  this_ptr->vtable = &g_CStrListVTable;
  return this_ptr;
}


// Assembly code:
// 004a2a20: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: Stack[0x4] (READ)
// 004a2a24: MOV dword ptr [EAX],0x0
// 004a2a2a: MOV dword ptr [EAX + 0x8],0x0
// 004a2a31: MOV dword ptr [EAX + 0x4],0x0
// 004a2a38: MOV dword ptr [EAX + 0xc],0x65d474
//   XREF to: 0065d474 (DATA)
// 004a2a3f: RET
