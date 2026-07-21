// Name: crt_errno.c___set_errno_FUN_0056c73c
// Address: 0056c73c
// Address Range: [[0056c73c, 0056c74c]]
// Convention: __cdecl
// Signature: void __cdecl crt_errno_c___set_errno_FUN_0056c73c(void)

#include "nocturne.h"

void __cdecl __set_errno(void)

{
  DWORD DVar1;
  
  DVar1 = GetLastError();
  FUN_0056c6d0(DVar1);
  return;
}
