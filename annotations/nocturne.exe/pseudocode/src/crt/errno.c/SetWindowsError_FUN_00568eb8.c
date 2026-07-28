// Name: crt_errno.c_SetWindowsError_FUN_00568eb8
// Address: 00568eb8
// Address Range: [[00568eb8, 00568ec5]]
// Convention: __cdecl
// Signature: void __cdecl crt_errno_c_SetWindowsError_FUN_00568eb8(DWORD windows_error_code)

#include "nocturne.h"

void __cdecl SetWindowsError(DWORD windows_error_code)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_crt_thread_c_GetTLS_FUN_005671dc_005c1abc)();
  *(DWORD *)(iVar1 + 8) = windows_error_code;
  return;
}
