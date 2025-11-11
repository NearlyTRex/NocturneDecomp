// Name: crt_time.c_localtime_FUN_00600288
// Address: 00600288
// Address Range: [[00600288, 0060029f]]
// Convention: __cdecl
// Signature: tm * crt_time.c_localtime_FUN_00600288(time_t * timer)
// Cross-references:
//   core_main.c_displayErrorAndQuit_FUN_00506f10 (00506f10) at 0050708b [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b1fd0 (005b1fd0) at 005b24e9 [UNCONDITIONAL_CALL]
//   crt_io.c_utime_FUN_00608160 (00608160) at 006081e4 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b4e76 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460 (004b7460) at 004b7530 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bbf4b [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 (004b76d0) at 004b78d1 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 (004b6e10) at 004b6eb6 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50 (004b7f50) at 004b8086 [UNCONDITIONAL_CALL]
//   shape_design.c_embedCopyrightWatermark_FUN_0046b9a0 (0046b9a0) at 0046bb04 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 (0049f420) at 0049f831 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_004a3360 (004a3360) at 004a3449 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_HandleSoundError_FUN_005adba0 (005adba0) at 005adc59 [UNCONDITIONAL_CALL]
// Globals:
//   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
// Function calls:
//   crt_thread.c_GetTLS_FUN_0060242c
//   crt_time.c_localtime_r_FUN_00600230

#include "nocturne.h"

tm * __cdecl crt_time_c_localtime_FUN_00600288(time_t *timer)

{
  ThreadData *pTVar1;
  tm *ptVar2;
  
  pTVar1 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  ptVar2 = crt_time_c_localtime_r_FUN_00600230(timer,&pTVar1->localtime_buffer);
  return ptVar2;
}


// Assembly code:
// 00600288: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   Label: crt_time.c_localtime_FUN_00600288
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 0060028e: ADD EAX,0x14
// 00600291: PUSH EAX
// 00600292: MOV EDX,dword ptr [ESP + 0x8]
// 00600296: PUSH EDX
// 00600297: CALL crt_time.c_localtime_r_FUN_00600230
//   XREF to: 00600230 (UNCONDITIONAL_CALL)
// 0060029c: ADD ESP,0x8
// 0060029f: RET
