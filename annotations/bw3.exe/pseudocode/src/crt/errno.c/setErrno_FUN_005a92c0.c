// Name: crt_errno.c_setErrno_FUN_005a92c0
// Address: 005a92c0
// Address Range: [[005a92c0, 005a92cd]]
// Convention: __cdecl
// Signature: void __cdecl crt_errno_c_setErrno_FUN_005a92c0(int error_code)

#include "nocturne.h"

void __cdecl setErrno(int error_code)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_crt_unknown_c_FUN_005a7f3c_006079a0)();
  *(int *)(iVar1 + 4) = error_code;
  return;
}
