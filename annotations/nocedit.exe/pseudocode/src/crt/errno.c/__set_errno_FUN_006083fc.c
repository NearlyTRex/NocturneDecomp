// Name: crt_errno.c___set_errno_FUN_006083fc
// Address: 006083fc
// Address Range: [[006083fc, 0060840c]]
// Convention: __cdecl
// Signature: DWORD __cdecl crt_errno_c___set_errno_FUN_006083fc(void)

#include "nocturne.h"

DWORD __cdecl __set_errno(void)

{
  DWORD DVar1;
  
  DVar1 = (*g_GetLastErrorFunc)();
  DVar1 = convertWindowsErrorToErrno(DVar1);
  return DVar1;
}
