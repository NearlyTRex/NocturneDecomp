// Name: engine_pod.cpp_CPodFile_dtor_FUN_0054f610
// Address: 0054f610
// Address Range: [[0054f610, 0054f621]]
// Convention: __cdecl
// Signature: CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr)
// Cross-references:
//   engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460 (004b7460) at 004b76b2 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bb202 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0 (004b82a0) at 004b8542 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50 (004bca50) at 004bcb21 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 (004b76d0) at 004b7a2b [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 (004b6e10) at 004b7201 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b9171 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b6342 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190 (004bd190) at 004bd2fa [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50 (004b7f50) at 004b8249 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_cleanup_FUN_00550c80 (00550c80) at 00550ccd [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_computeAndStoreCRC_FUN_00551000 (00551000) at 00551219 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_dismountPod_FUN_005518c0 (005518c0) at 00551918 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_verifyIntegrity_FUN_00551280 (00551280) at 005512d9 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_pod.cpp_CPodFile_cleanup_FUN_00550090

#include "nocturne.h"

CPodFile * __cdecl engine_pod_cpp_CPodFile_dtor_FUN_0054f610(CPodFile *this_ptr)

{
  engine_pod_cpp_CPodFile_cleanup_FUN_00550090(this_ptr);
  return this_ptr;
}


// Assembly code:
// 0054f610: PUSH EBX
//   Label: engine_pod.cpp_CPodFile_dtor_FUN_0054f610
// 0054f611: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0054f615: PUSH EBX
// 0054f616: CALL engine_pod.cpp_CPodFile_cleanup_FUN_00550090
//   XREF to: 00550090 (UNCONDITIONAL_CALL)
// 0054f61b: ADD ESP,0x4
// 0054f61e: MOV EAX,EBX
// 0054f620: POP EBX
// 0054f621: RET
