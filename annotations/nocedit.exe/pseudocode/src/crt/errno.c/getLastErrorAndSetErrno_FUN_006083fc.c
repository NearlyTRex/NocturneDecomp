// Name: crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
// Address: 006083fc
// Address Range: [[006083fc, 0060840c]]
// Convention: __cdecl
// Signature: DWORD crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc(void)

#include "nocturne.h"

DWORD __cdecl crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc(void)

{
  DWORD DVar1;
  
  DVar1 = (*GetLastError)();
  DVar1 = crt_errno_c_convertWindowsErrorToErrno_FUN_00608390(DVar1);
  return DVar1;
}
