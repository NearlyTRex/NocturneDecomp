// Name: crt_errno.c_SetWindowsError_FUN_006027c8
// Address: 006027c8
// Address Range: [[006027c8, 006027d5]]
// Convention: __cdecl
// Signature: void __cdecl crt_errno_c_SetWindowsError_FUN_006027c8(DWORD windows_error_code)

#include "nocturne.h"

void __cdecl crt_errno_c_SetWindowsError_FUN_006027c8(DWORD windows_error_code)

{
  ThreadData *pTVar1;
  
  pTVar1 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  pTVar1->windows_error_code = windows_error_code;
  return;
}
