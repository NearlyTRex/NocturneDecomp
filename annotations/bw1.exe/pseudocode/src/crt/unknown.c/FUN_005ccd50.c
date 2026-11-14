// Name: crt_unknown.c_FUN_005ccd50
// Address: 005ccd50
// Address Range: [[005ccd50, 005ccd86]]
// Convention: unknown
// Signature: LPVOID crt_unknown_c_FUN_005ccd50(void)

#include "nocturne.h"

LPVOID FUN_005ccd50(void)

{
  int iVar1;
  LPVOID pvVar2;
  
  pvVar2 = (LPVOID)0x0;
  iVar1 = FUN_005cacd8(0);
  if (iVar1 != 0) {
    pvVar2 = TlsGetValue(DAT_006265f8);
  }
  if (pvVar2 == (LPVOID)0x0) {
    FUN_005c9f70("Thread has no thread-specific data\r\n",1);
  }
  return pvVar2;
}
