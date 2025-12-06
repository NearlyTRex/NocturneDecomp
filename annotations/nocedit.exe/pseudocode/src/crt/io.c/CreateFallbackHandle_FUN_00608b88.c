// Name: crt_io.c_CreateFallbackHandle_FUN_00608b88
// Address: 00608b88
// Address Range: [[00608b88, 00608bac]]
// Convention: __cdecl
// Signature: HANDLE crt_io.c_CreateFallbackHandle_FUN_00608b88(void)

#include "nocturne.h"

HANDLE __cdecl crt_io_c_CreateFallbackHandle_FUN_00608b88(void)

{
  HANDLE pvVar1;
  
  pvVar1 = (*PTR_CreateEventA_0061150c)((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  if (pvVar1 == (HANDLE)0x0) {
    pvVar1 = (HANDLE)((int)g_FakeHandleCounter + 1);
    g_FakeHandleCounter = pvVar1;
  }
  return pvVar1;
}
