// Name: crt_unknown.c_FUN_005abbf8
// Address: 005abbf8
// Address Range: [[005abbf8, 005abc1c]]
// Convention: unknown
// Signature: HANDLE crt_unknown_c_FUN_005abbf8(void)

#include "nocturne.h"

HANDLE FUN_005abbf8(void)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  if (pvVar1 == (HANDLE)0x0) {
    pvVar1 = (HANDLE)(DAT_00607be4 + 1);
    DAT_00607be4 = (int)pvVar1;
  }
  return pvVar1;
}
