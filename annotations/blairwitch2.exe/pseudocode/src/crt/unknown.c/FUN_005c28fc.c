// Name: crt_unknown.c_FUN_005c28fc
// Address: 005c28fc
// Address Range: [[005c28fc, 005c293b]]
// Convention: unknown
// Signature: LPVOID crt_unknown_c_FUN_005c28fc(void)

#include "nocturne.h"

LPVOID FUN_005c28fc(void)

{
  DWORD dwErrCode;
  LPVOID pvVar1;
  
  dwErrCode = GetLastError();
  pvVar1 = TlsGetValue(DAT_0061f2a0);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = (LPVOID)FUN_005c4a50();
  }
  else if (*(char *)((int)pvVar1 + 0x53) != '\0') {
    pvVar1 = (LPVOID)FUN_005c4a88();
  }
  SetLastError(dwErrCode);
  return pvVar1;
}
