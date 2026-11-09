// Name: crt_errno.c_setErrno_FUN_005be180
// Address: 005be180
// Address Range: [[005be180, 005be18d]]
// Convention: __cdecl
// Signature: void __cdecl crt_errno_c_setErrno_FUN_005be180(int error_code)

#include "nocturne.h"

void __cdecl setErrno(int error_code)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_crt_unknown_c_FUN_005bcdfc_0061f2a4)();
  *(int *)(iVar1 + 4) = error_code;
  return;
}
