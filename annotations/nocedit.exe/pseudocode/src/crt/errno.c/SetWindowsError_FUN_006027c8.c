// Name: crt_errno.c_SetWindowsError_FUN_006027c8
// Address: 006027c8
// Address Range: [[006027c8, 006027d5]]
// Convention: __cdecl
// Signature: void crt_errno.c_SetWindowsError_FUN_006027c8(DWORD windows_error_code)
// Cross-references:
//   crt_errno.c_convertWindowsErrorToErrno_FUN_00608390 (00608390) at 00608396 [UNCONDITIONAL_CALL]
//   crt_process.c_build_cmdline_FUN_00610258 (00610258) at 006102ed [UNCONDITIONAL_CALL]
//   crt_process.c_spawnvp_FUN_0060f39c (0060f39c) at 0060f5f6 [UNCONDITIONAL_CALL]
//   crt_process.c_spawnvp_with_path_search_FUN_0060e6a0 (0060e6a0) at 0060e7a2 [UNCONDITIONAL_CALL]
// Globals:
//   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
// Function calls:
//   crt_thread.c_GetTLS_FUN_0060242c

#include "nocturne.h"

void __cdecl crt_errno_c_SetWindowsError_FUN_006027c8(DWORD windows_error_code)

{
  ThreadData *pTVar1;
  
  pTVar1 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  pTVar1->windows_error_code = windows_error_code;
  return;
}


// Assembly code:
// 006027c8: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   Label: crt_errno.c_SetWindowsError_FUN_006027c8
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 006027ce: MOV EDX,dword ptr [ESP + 0x4]
// 006027d2: MOV dword ptr [EAX + 0x8],EDX
// 006027d5: RET
