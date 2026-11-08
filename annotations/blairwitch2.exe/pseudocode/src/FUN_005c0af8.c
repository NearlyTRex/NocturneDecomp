// Name: FUN_005c0af8
// Address: 005c0af8
// Address Range: [[005c0af8, 005c0b1c]]
// Convention: unknown
// Signature: HANDLE FUN_005c0af8(void)

#include "nocturne.h"

HANDLE FUN_005c0af8(void)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  if (pvVar1 == (HANDLE)0x0) {
    pvVar1 = (HANDLE)(DAT_0061f4e0 + 1);
    DAT_0061f4e0 = (int)pvVar1;
  }
  return pvVar1;
}
