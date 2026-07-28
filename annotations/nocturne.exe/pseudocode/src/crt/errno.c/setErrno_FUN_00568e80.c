// Name: crt_errno.c_setErrno_FUN_00568e80
// Address: 00568e80
// Address Range: [[00568e80, 00568e8d]]
// Convention: __cdecl
// Signature: void __cdecl crt_errno_c_setErrno_FUN_00568e80(int error_code)

#include "nocturne.h"

void __cdecl setErrno(int error_code)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_crt_thread_c_GetTLS_FUN_005671dc_005c1abc)();
  *(int *)(iVar1 + 4) = error_code;
  return;
}
