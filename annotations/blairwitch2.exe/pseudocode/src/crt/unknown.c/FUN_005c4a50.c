// Name: crt_unknown.c_FUN_005c4a50
// Address: 005c4a50
// Address Range: [[005c4a50, 005c4a86]]
// Convention: unknown
// Signature: LPVOID crt_unknown_c_FUN_005c4a50(void)

#include "nocturne.h"

LPVOID FUN_005c4a50(void)

{
  int iVar1;
  LPVOID pvVar2;
  
  pvVar2 = (LPVOID)0x0;
  iVar1 = FUN_005c29d8(0);
  if (iVar1 != 0) {
    pvVar2 = TlsGetValue(DAT_0061f2a0);
  }
  if (pvVar2 == (LPVOID)0x0) {
    FUN_005c1c20("Thread has no thread-specific data\r\n",1);
  }
  return pvVar2;
}
