// Name: crt_unknown.c_FUN_005cabfc
// Address: 005cabfc
// Address Range: [[005cabfc, 005cac3b]]
// Convention: unknown
// Signature: LPVOID crt_unknown_c_FUN_005cabfc(void)

#include "nocturne.h"

LPVOID FUN_005cabfc(void)

{
  DWORD dwErrCode;
  LPVOID pvVar1;
  
  dwErrCode = GetLastError();
  pvVar1 = TlsGetValue(DAT_006265f8);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = (LPVOID)FUN_005ccd50();
  }
  else if (*(char *)((int)pvVar1 + 0x53) != '\0') {
    pvVar1 = (LPVOID)FUN_005ccd88();
  }
  SetLastError(dwErrCode);
  return pvVar1;
}
