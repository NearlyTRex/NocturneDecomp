// Name: crt_errno.c_setErrno_FUN_00602790
// Address: 00602790
// Address Range: [[00602790, 0060279d]]
// Convention: __cdecl
// Signature: void crt_errno.c_setErrno_FUN_00602790(int error_code)
// Cross-references:
//   crt_errno.c_convertWindowsErrorToErrno_FUN_00608390 (00608390) at 006083ca [UNCONDITIONAL_CALL]
//   crt_io.c_close_FUN_00609bd0 (00609bd0) at 00609be9 [UNCONDITIONAL_CALL]
//   crt_io.c_close_handle_safe_FUN_0060c2e0 (0060c2e0) at 0060c2f4 [UNCONDITIONAL_CALL]
//   crt_io.c_ftruncate_FUN_00600cf0 (00600cf0) at 00600d0d [UNCONDITIONAL_CALL]
//   crt_io.c_get_handle_FUN_006109f0 (006109f0) at 00610a02 [UNCONDITIONAL_CALL]
//   crt_io.c_getcwd_FUN_00608d20 (00608d20) at 00608d8b [UNCONDITIONAL_CALL]
//   crt_io.c_realpath_FUN_00601140 (00601140) at 0060116d [UNCONDITIONAL_CALL]
//   crt_io.c_stat_FUN_00607e64 (00607e64) at 00607e98 [UNCONDITIONAL_CALL]
//   crt_io.c_tell_FUN_00606720 (00606720) at 00606734 [UNCONDITIONAL_CALL]
//   crt_io.c_write_FUN_006084ec (006084ec) at 00608880 [UNCONDITIONAL_CALL]
//   crt_math.c_set_domain_error_errno_FUN_006027a0 (006027a0) at 006027a2 [UNCONDITIONAL_CALL]
//   crt_math.c_set_range_error_errno_FUN_006027ac (006027ac) at 006027ae [UNCONDITIONAL_CALL]
//   crt_process.c_build_cmdline_FUN_00610258 (00610258) at 006102e3 [UNCONDITIONAL_CALL]
//   crt_process.c_spawnvp_FUN_0060f39c (0060f39c) at 0060f621 [UNCONDITIONAL_CALL]
//   crt_process.c_spawnvp_with_path_search_FUN_0060e6a0 (0060e6a0) at 0060e798 [UNCONDITIONAL_CALL]
//   crt_stdio.c_AllocateFileStruct_FUN_006092f0 (006092f0) at 0060939a [UNCONDITIONAL_CALL]
//   crt_stdio.c_CreateFileImpl_FUN_006090a0 (006090a0) at 006090b6 [UNCONDITIONAL_CALL]
//   crt_stdio.c_OpenModeStringParser_FUN_006017d0 (006017d0) at 00601824 [UNCONDITIONAL_CALL]
//   crt_stdio.c_ReadFileWithDeviceAbstraction_FUN_00602880 (00602880) at 00602899 [UNCONDITIONAL_CALL]
//   crt_stdio.c_fflushInternal_FUN_006039d0 (006039d0) at 00603a55 [UNCONDITIONAL_CALL]
//   crt_stdio.c_fgetc_FUN_005fe840 (005fe840) at 005fe881 [UNCONDITIONAL_CALL]
//   crt_stdio.c_flushFileBuffers_FUN_0060af00 (0060af00) at 0060af16 [UNCONDITIONAL_CALL]
//   crt_stdio.c_fputc_FUN_006007a0 (006007a0) at 006007ea [UNCONDITIONAL_CALL]
//   crt_stdio.c_fread_FUN_005fd990 (005fd990) at 005fd9b6 [UNCONDITIONAL_CALL]
//   crt_stdio.c_fseek_FUN_005ffacc (005ffacc) at 005ffc80 [UNCONDITIONAL_CALL]
//   crt_stdio.c_fwrite_FUN_005fdc00 (005fdc00) at 005fdc26 [UNCONDITIONAL_CALL]
//   crt_stdio.c_lseek_FUN_00606690 (00606690) at 006066a5 [UNCONDITIONAL_CALL]
//   crt_stdio.c_write_FUN_006038c0 (006038c0) at 006039ad [UNCONDITIONAL_CALL]
//   crt_stdlib.c_strtol_internal_FUN_0060ec70 (0060ec70) at 0060eceb [UNCONDITIONAL_CALL]
//   crt_unknown.c_DoSomethingAndSetCtrlHandler_FUN_0060d068 (0060d068) at 0060d07f [UNCONDITIONAL_CALL]
//   crt_unknown.c_MultipleDoNothingCalls_FUN_00601a94 (00601a94) at 00601b01 [UNCONDITIONAL_CALL]
//   crt_unknown.c_ReadFileBytesMaybe_FUN_0060e930 (0060e930) at 0060e984 [UNCONDITIONAL_CALL]
// Globals:
//   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
// Function calls:
//   crt_thread.c_GetTLS_FUN_0060242c

#include "nocturne.h"

void __cdecl crt_errno_c_setErrno_FUN_00602790(int error_code)

{
  ThreadData *pTVar1;
  
  pTVar1 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  pTVar1->errno_value = error_code;
  return;
}


// Assembly code:
// 00602790: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   Label: crt_errno.c_setErrno_FUN_00602790
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 00602796: MOV EDX,dword ptr [ESP + 0x4]
// 0060279a: MOV dword ptr [EAX + 0x4],EDX
// 0060279d: RET
