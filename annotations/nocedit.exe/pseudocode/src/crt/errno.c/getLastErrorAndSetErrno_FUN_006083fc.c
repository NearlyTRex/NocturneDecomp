// Name: crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
// Address: 006083fc
// Address Range: [[006083fc, 0060840c]]
// Convention: __cdecl
// Signature: DWORD crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc(void)
// Cross-references:
//   crt_file.c_create_directory_FUN_00600e10 (00600e10) at 00600e20 [CONDITIONAL_JUMP]
//   crt_file.c_setReadonlyAttribute_FUN_00600c30 (00600c30) at 00600c43 [UNCONDITIONAL_CALL]
//   crt_io.c_chdir_FUN_006012a0 (006012a0) at 006012ae [CONDITIONAL_JUMP]
//   crt_io.c_check_file_access_FUN_0060c9f0 (0060c9f0) at 0060c9ff [CONDITIONAL_JUMP]
//   crt_io.c_findFirstFileWrapper_FUN_006021f0 (006021f0) at 00602210 [UNCONDITIONAL_CALL]
//   crt_io.c_findNextFileWrapper_FUN_00602300 (00602300) at 0060231d [UNCONDITIONAL_CALL]
//   crt_io.c_ftruncate_FUN_00600cf0 (00600cf0) at 00600d81 [UNCONDITIONAL_CALL]
//   crt_io.c_getcwd_FUN_00608d20 (00608d20) at 00608d4c [UNCONDITIONAL_CALL]
//   crt_io.c_realpath_FUN_00601140 (00601140) at 006011e7 [UNCONDITIONAL_CALL]
//   crt_io.c_stat_FUN_00607e64 (00607e64) at 00607f99 [UNCONDITIONAL_CALL]
//   crt_io.c_tell_FUN_00606720 (00606720) at 00606776 [UNCONDITIONAL_CALL]
//   crt_io.c_utime_FUN_00608160 (00608160) at 0060818e [UNCONDITIONAL_CALL]
//   crt_io.c_write_FUN_006084ec (006084ec) at 006087c2 [UNCONDITIONAL_CALL]
//   crt_process.c_spawn_FUN_006105a0 (006105a0) at 006106a0 [UNCONDITIONAL_CALL]
//   crt_stdio.c_CreateFileImpl_FUN_006090a0 (006090a0) at 00609230 [UNCONDITIONAL_CALL]
//   crt_stdio.c_ReadFileWithDeviceAbstraction_FUN_00602880 (00602880) at 00602927 [UNCONDITIONAL_CALL]
//   crt_stdio.c_flushFileBuffers_FUN_0060af00 (0060af00) at 0060af44 [UNCONDITIONAL_CALL]
//   crt_stdio.c_lseek_FUN_00606690 (00606690) at 0060670f [UNCONDITIONAL_CALL]
//   crt_stdio.c_remove_FUN_00606600 (00606600) at 0060660e [CONDITIONAL_JUMP]
//   crt_stdio.c_rename_FUN_006015d0 (006015d0) at 006015e6 [UNCONDITIONAL_CALL]
//   crt_stdio.c_write_FUN_006038c0 (006038c0) at 0060392c [UNCONDITIONAL_CALL]
//   crt_unknown.c_ReadFileBytesMaybe_FUN_0060e930 (0060e930) at 0060ea3a [UNCONDITIONAL_CALL]
// Globals:
//   GetLastError* GetLastError = 00211f22
// Function calls:
//   crt_errno.c_convertWindowsErrorToErrno_FUN_00608390
//   GetLastError

#include "nocturne.h"

DWORD __cdecl crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc(void)

{
  DWORD DVar1;
  
  DVar1 = (*GetLastError)();
  DVar1 = crt_errno_c_convertWindowsErrorToErrno_FUN_00608390(DVar1);
  return DVar1;
}


// Assembly code:
// 006083fc: CALL dword ptr CS:[0x6115a4]
//   Label: crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   XREF to: EXTERNAL:00000074 (COMPUTED_CALL)
//   XREF to: 006115a4 (READ)
// 00608403: PUSH EAX
// 00608404: CALL crt_errno.c_convertWindowsErrorToErrno_FUN_00608390
//   XREF to: 00608390 (UNCONDITIONAL_CALL)
// 00608409: ADD ESP,0x4
// 0060840c: RET
