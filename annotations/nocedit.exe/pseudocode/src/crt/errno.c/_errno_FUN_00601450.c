// Name: crt_errno.c__errno_FUN_00601450
// Address: 00601450
// Address Range: [[00601450, 00601459]]
// Convention: __cdecl
// Signature: int * __cdecl crt_errno_c__errno_FUN_00601450(void)

#include "nocturne.h"

int * __cdecl _errno(void)

{
  ThreadData *pTVar1;
  
  pTVar1 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  return &pTVar1->errno_value;
}
