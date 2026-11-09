// Name: unkafter_asgaya.cpp_FUN_005ada6c
// Address: 005ada6c
// Address Range: [[005ada6c, 005adaab]]
// Convention: unknown
// Signature: LPVOID unkafter_asgaya_cpp_FUN_005ada6c(void)

#include "nocturne.h"

LPVOID unkafter_asgaya_cpp_FUN_005ada6c(void)

{
  DWORD dwErrCode;
  LPVOID pvVar1;
  
  dwErrCode = GetLastError();
  pvVar1 = TlsGetValue(DAT_0060799c);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = (LPVOID)unkafter_asgaya_cpp_FUN_005afae0();
  }
  else if (*(char *)((int)pvVar1 + 0x53) != '\0') {
    pvVar1 = (LPVOID)unkafter_asgaya_cpp_FUN_005afb18();
  }
  SetLastError(dwErrCode);
  return pvVar1;
}
