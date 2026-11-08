// Name: FUN_005afae0
// Address: 005afae0
// Address Range: [[005afae0, 005afb16]]
// Convention: unknown
// Signature: LPVOID FUN_005afae0(void)

#include "nocturne.h"

LPVOID FUN_005afae0(void)

{
  int iVar1;
  LPVOID pvVar2;
  
  pvVar2 = (LPVOID)0x0;
  iVar1 = FUN_005adb48(0);
  if (iVar1 != 0) {
    pvVar2 = TlsGetValue(DAT_0060799c);
  }
  if (pvVar2 == (LPVOID)0x0) {
    FUN_005acde0("Thread has no thread-specific data\r\n",1);
  }
  return pvVar2;
}
