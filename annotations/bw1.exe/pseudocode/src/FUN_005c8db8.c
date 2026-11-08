// Name: FUN_005c8db8
// Address: 005c8db8
// Address Range: [[005c8db8, 005c8ddc]]
// Convention: unknown
// Signature: HANDLE FUN_005c8db8(void)

#include "nocturne.h"

HANDLE FUN_005c8db8(void)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  if (pvVar1 == (HANDLE)0x0) {
    pvVar1 = (HANDLE)(DAT_00626840 + 1);
    DAT_00626840 = (int)pvVar1;
  }
  return pvVar1;
}
