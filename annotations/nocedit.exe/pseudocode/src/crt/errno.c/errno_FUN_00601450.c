// Name: crt_errno.c_errno_FUN_00601450
// Address: 00601450
// Address Range: [[00601450, 00601459]]
// Convention: unknown
// Signature: undefined crt_errno.c_errno_FUN_00601450()
// Cross-references:
//   core_main.c_displayErrorAndQuit_FUN_00506f10 (00506f10) at 005070ab [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 (004b3920) at 004b3c5f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b4b37 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 (004b35a0) at 004b3764 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_load_FUN_004b2890 (004b2890) at 004b29f0 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bbc9e [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004bab12 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b9c43 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_copyFileWithProgress_FUN_004b2030 (004b2030) at 004b20ac [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_findMaxFieldInTimestampFile_FUN_004b2640 (004b2640) at 004b2671 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_formatSystemError_FUN_004b1fe0 (004b1fe0) at 004b1fe5 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220 (004b3220) at 004b32c0 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_openFileWithRetry_FUN_004b2200 (004b2200) at 004b222a [UNCONDITIONAL_CALL]
// Globals:
//   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
// Function calls:
//   crt_thread.c_GetTLS_FUN_0060242c

#include "nocturne.h"

int * crt_errno_c_errno_FUN_00601450(void)

{
  ThreadData *pTVar1;
  
  pTVar1 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  return &pTVar1->errno_value;
}


// Assembly code:
// 00601450: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   Label: crt_errno.c_errno_FUN_00601450
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 00601456: ADD EAX,0x4
// 00601459: RET
