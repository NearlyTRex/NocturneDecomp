// Name: FUN_0056e52c
// Address: 0056e52c
// Address Range: [[0056e52c, 0056e56b]]
// Convention: unknown
// Signature: LPVOID FUN_0056e52c(void)

#include "nocturne.h"

LPVOID FUN_0056e52c(void)

{
  DWORD dwErrCode;
  LPVOID pvVar1;
  
  dwErrCode = GetLastError();
  pvVar1 = TlsGetValue(DAT_005c1ab8);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = (LPVOID)FUN_00571170();
  }
  else if (*(char *)((int)pvVar1 + 0x53) != '\0') {
    pvVar1 = (LPVOID)FUN_005711a8();
  }
  SetLastError(dwErrCode);
  return pvVar1;
}
