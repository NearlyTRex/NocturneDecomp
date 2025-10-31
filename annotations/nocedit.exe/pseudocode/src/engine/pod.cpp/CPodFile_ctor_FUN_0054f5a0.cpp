// Name: engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
// Address: 0054f5a0
// Address Range: [[0054f5a0, 0054f609]]
// Convention: __cdecl
// Signature: CPodFile * engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0(CPodFile * this_ptr)
// Cross-references:
//   engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460 (004b7460) at 004b74c8 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004baf53 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0 (004b82a0) at 004b8305 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50 (004bca50) at 004bca62 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 (004b76d0) at 004b7712 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 (004b6e10) at 004b6e7a [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b8a69 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b5bf4 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190 (004bd190) at 004bd1fa [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50 (004b7f50) at 004b7fb8 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_computeAndStoreCRC_FUN_00551000 (00551000) at 00551029 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_mount_FUN_00550a10 (00550a10) at 00550a3c [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_verifyIntegrity_FUN_00551280 (00551280) at 0055128a [UNCONDITIONAL_CALL]

#include "nocturne.h"

CPodFile * __cdecl engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0(CPodFile *this_ptr)

{
  this_ptr->directory_entries = (CPodDirectoryEntry *)0x0;
  this_ptr->filename[0] = '\0';
  this_ptr->description[0] = '\0';
  this_ptr->author_info[0] = '\0';
  this_ptr->copyright_info[0] = '\0';
  this_ptr->pod_format_version = 0;
  this_ptr->audit_count = 0;
  this_ptr->dependency_count = 0;
  this_ptr->file_data_buffer = (char *)0x0;
  this_ptr->mount_priority = 1000;
  this_ptr->format_flags = 0;
  this_ptr->file_count = 0;
  return this_ptr;
}


// Assembly code:
// 0054f5a0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
//   XREF to: Stack[0x4] (READ)
// 0054f5a4: MOV dword ptr [EAX + 0x414],0x0
// 0054f5ae: MOV byte ptr [EAX + 0x4],0x0
// 0054f5b2: MOV byte ptr [EAX + 0x108],0x0
// 0054f5b9: MOV byte ptr [EAX + 0x208],0x0
// 0054f5c0: MOV byte ptr [EAX + 0x308],0x0
// 0054f5c7: MOV dword ptr [EAX],0x0
// 0054f5cd: MOV dword ptr [EAX + 0x41c],0x0
// 0054f5d7: MOV dword ptr [EAX + 0x424],0x0
// 0054f5e1: MOV dword ptr [EAX + 0x418],0x0
// 0054f5eb: MOV dword ptr [EAX + 0x408],0x3e8
// 0054f5f5: MOV dword ptr [EAX + 0x40c],0x0
// 0054f5ff: MOV dword ptr [EAX + 0x410],0x0
// 0054f609: RET
