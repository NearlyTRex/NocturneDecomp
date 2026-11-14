// Name: crt_unknown.c_FUN_005ada6c
// Address: 005ada6c
// Address Range: [[005ada6c, 005adaab]]
// Convention: unknown
// Signature: LPVOID crt_unknown_c_FUN_005ada6c(void)

#include "nocturne.h"

LPVOID FUN_005ada6c(void)

{
  DWORD dwErrCode;
  LPVOID pvVar1;
  
  dwErrCode = GetLastError();
  pvVar1 = TlsGetValue(DAT_0060799c);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = (LPVOID)FUN_005afae0();
  }
  else if (*(char *)((int)pvVar1 + 0x53) != '\0') {
    pvVar1 = (LPVOID)FUN_005afb18();
  }
  SetLastError(dwErrCode);
  return pvVar1;
}
