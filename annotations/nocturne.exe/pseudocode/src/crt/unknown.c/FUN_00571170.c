// Name: crt_unknown.c_FUN_00571170
// Address: 00571170
// Address Range: [[00571170, 005711a6]]
// Convention: unknown
// Signature: LPVOID crt_unknown_c_FUN_00571170(void)

#include "nocturne.h"

LPVOID FUN_00571170(void)

{
  int iVar1;
  LPVOID pvVar2;
  
  pvVar2 = (LPVOID)0x0;
  iVar1 = FUN_0056e608(0);
  if (iVar1 != 0) {
    pvVar2 = TlsGetValue(DAT_005c1ab8);
  }
  if (pvVar2 == (LPVOID)0x0) {
    HandleRuntimeError("Thread has no thread-specific data\r\n",1);
  }
  return pvVar2;
}
