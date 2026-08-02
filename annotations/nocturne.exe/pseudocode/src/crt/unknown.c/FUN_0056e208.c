// Name: crt_unknown.c_FUN_0056e208
// Address: 0056e208
// Address Range: [[0056e208, 0056e22c]]
// Convention: unknown
// Signature: HANDLE crt_unknown_c_FUN_0056e208(void)

#include "nocturne.h"

HANDLE FUN_0056e208(void)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  if (pvVar1 == (HANDLE)0x0) {
    pvVar1 = (HANDLE)(DAT_005c1f5c + 1);
    DAT_005c1f5c = (int)pvVar1;
  }
  return pvVar1;
}
