// Name: shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
// Address: 004a2a40
// Address Range: [[004a2a40, 004a2a8e]]
// Convention: __cdecl
// Signature: CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint d1, uint d2)
// Cross-references:
//   core_fileman.cpp_preprocessMusicFiles_FUN_004bd750 (004bd750) at 004bd874 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053b510 (0053b510) at 0053b969 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_RelevantActorsToTesting_FUN_0053b030 (0053b030) at 0053b489 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_dtor_FUN_00559840 (00559840) at 00559854 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00561a30 (00561a30) at 00561bd6 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005671a0 (005671a0) at 0056720e [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0 (00595fc0) at 0059684c [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bb550 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004baee2 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0 (004bccf0) at 004bce34 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 (004b9f40) at 004ba315 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 (004b6e10) at 004b71f2 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b90a1 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0 (004bcec0) at 004bd107 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0 (004bc2b0) at 004bc41a [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650 (004bc650) at 004bc7fa [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060 (0049f060) at 0049f0dc [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f180 (0049f180) at 0049f226 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0 (0049f0f0) at 0049f16c [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 (004a3c80) at 004a3cd4 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20 (005acf20) at 005ad1dd [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0 (005ad5c0) at 005ad802 [UNCONDITIONAL_CALL]
// Globals:
//   CStrList_vtable g_CStrListVTable
//   WatcomTypeInfo g_CStrListTypeInfo
// Function calls:
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_edittool.cpp_CStrList_clear_FUN_004a2b10
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CStrList * __cdecl shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(CStrList *this_ptr,uint d1,uint d2)

{
  void *ptr;
  
  if ((d1 & 4) != 0) {
    ptr = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CStrListTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &g_CStrListVTable;
  shape_edittool_cpp_CStrList_clear_FUN_004a2b10(this_ptr);
  if ((d2 & 2) == 0) {
    return this_ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  return this_ptr;
}


// Assembly code:
// 004a2a40: PUSH EBX
//   Label: shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
// 004a2a41: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004a2a45: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004a2a4a: JNZ 0x004a2a67
//   XREF to: 004a2a67 (CONDITIONAL_JUMP)
// 004a2a4c: PUSH EBX
// 004a2a4d: MOV dword ptr [EBX + 0xc],0x65d474
//   XREF to: 0065d474 (DATA)
// 004a2a54: CALL shape_edittool.cpp_CStrList_clear_FUN_004a2b10
//   XREF to: 004a2b10 (UNCONDITIONAL_CALL)
// 004a2a59: ADD ESP,0x4
// 004a2a5c: TEST byte ptr [ESP + 0xc],0x2
//   XREF to: Stack[0x8] (READ)
// 004a2a61: JNZ 0x004a2a82
//   XREF to: 004a2a82 (CONDITIONAL_JUMP)
// 004a2a63: MOV EAX,EBX
// 004a2a65: POP EBX
// 004a2a66: RET
// 004a2a67: PUSH 0x65d4f0
//   Label: LAB_004a2a67
//   XREF to: 0065d4f0 (DATA)
// 004a2a6c: PUSH EBX
// 004a2a6d: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004a2a72: ADD ESP,0x8
// 004a2a75: PUSH EAX
// 004a2a76: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004a2a7b: ADD ESP,0x4
// 004a2a7e: MOV EAX,EBX
// 004a2a80: POP EBX
// 004a2a81: RET
// 004a2a82: PUSH EBX
//   Label: LAB_004a2a82
// 004a2a83: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004a2a88: ADD ESP,0x4
// 004a2a8b: MOV EAX,EBX
// 004a2a8d: POP EBX
// 004a2a8e: RET
