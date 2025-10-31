// Name: crt_thread.c_GetTLS_FUN_0060242c
// Address: 0060242c
// Address Range: [[0060242c, 00602433]]
// Convention: __cdecl
// Signature: ThreadData * crt_thread.c_GetTLS_FUN_0060242c(void)
// Cross-references:
//   crt_errno.c_SetWindowsError_FUN_006027c8 (006027c8) at 006027c8 [COMPUTED_CALL]
//   crt_errno.c_errno_FUN_00601450 (00601450) at 00601450 [COMPUTED_CALL]
//   crt_errno.c_setErrno_FUN_00602790 (00602790) at 00602790 [COMPUTED_CALL]
//   crt_exception.c_RemoveExceptionHandler_FUN_0060abf4 (0060abf4) at 0060ac08 [COMPUTED_CALL]
//   crt_exception.c_installExceptionHandler_FUN_0060aba8 (0060aba8) at 0060abc8 [COMPUTED_CALL]
//   crt_process.c_execv_FUN_006101f0 (006101f0) at 0061020c [COMPUTED_CALL]
//   crt_process.c_spawnvp_FUN_0060f39c (0060f39c) at 0060f701 [COMPUTED_CALL]
//   crt_process.c_spawnvp_with_path_search_FUN_0060e6a0 (0060e6a0) at 0060e6e7 [COMPUTED_CALL]
//   crt_signal.c_getSignalHandler_FUN_0060ceb4 (0060ceb4) at 0060cecc [COMPUTED_CALL]
//   crt_signal.c_setSignalHandler_FUN_0060ce60 (0060ce60) at 0060ce93 [COMPUTED_CALL]
//   crt_stack.c_GetStackUsage_FUN_0060c260 (0060c260) at 0060c261 [COMPUTED_CALL]
//   crt_stack.c_check_stack_target_FUN_005ffa03 (005ffa03) at 005ffa0e [COMPUTED_CALL]
//   crt_startup.cpp_InitializeWinAppRuntime_FUN_006026a8 (006026a8) at 006026c7 [COMPUTED_CALL]
//   crt_stdio.c_fwrite_FUN_005fdc00 (005fdc00) at 005fdcdf [COMPUTED_CALL]
//   crt_stdlib.c_GetRandomSeedPointer_FUN_005feb50 (005feb50) at 005feb50 [COMPUTED_CALL]
//   crt_string.c_strtok_FUN_005fff50 (005fff50) at 005fffed [COMPUTED_CALL]
//   crt_thread.c_threadStartupWrapper_FUN_0060f8c0 (0060f8c0) at 0060f91a [COMPUTED_CALL]
//   crt_time.c_asctime_FUN_00601768 (00601768) at 00601768 [COMPUTED_CALL]
//   crt_time.c_localtime_FUN_00600288 (00600288) at 00600288 [COMPUTED_CALL]
//   crt_unknown.c_FUN_0060ced8 (0060ced8) at 0060cef0 [COMPUTED_CALL]
//   crt_unknown.c_FUN_0060d1a8 (0060d1a8) at 0060d1b1 [COMPUTED_CALL]
//   crt_unknown.c_FUN_0060d480 (0060d480) at 0060d480 [COMPUTED_CALL]
// Globals:
//   void* g_CurrentThreadTlsBlock

#include "nocturne.h"

ThreadData * __cdecl crt_thread_c_GetTLS_FUN_0060242c(void)

{
  return (ThreadData *)g_CurrentThreadTlsBlock;
}


// Assembly code:
// 0060242c: MOV EAX,[0x03f9b22c]
//   Label: crt_thread.c_GetTLS_FUN_0060242c
//   XREF to: 03f9b22c (READ)
// 00602431: LEA EAX,[EAX]
