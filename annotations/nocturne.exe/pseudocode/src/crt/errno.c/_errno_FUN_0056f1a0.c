// Name: crt_errno.c__errno_FUN_0056f1a0
// Address: 0056f1a0
// Address Range: [[0056f1a0, 0056f1a9]]
// Convention: __cdecl
// Signature: int * __cdecl crt_errno_c__errno_FUN_0056f1a0(void)

#include "nocturne.h"

int * __cdecl _errno(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_crt_thread_c_GetTLS_FUN_005671dc_005c1abc)();
  return (int *)(iVar1 + 4);
}
