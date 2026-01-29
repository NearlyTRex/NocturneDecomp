// Name: crt_errno.c_setErrno_FUN_00602790
// Address: 00602790
// Address Range: [[00602790, 0060279d]]
// Convention: __cdecl
// Signature: void __cdecl crt_errno_c_setErrno_FUN_00602790(int error_code)

#include "nocturne.h"

void __cdecl setErrno(int error_code)

{
  ThreadData *pTVar1;
  
  pTVar1 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  pTVar1->errno_value = error_code;
  return;
}
