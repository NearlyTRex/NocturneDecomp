// Name: crt_errno.c_setErrno_FUN_005c6450
// Address: 005c6450
// Address Range: [[005c6450, 005c645d]]
// Convention: __cdecl
// Signature: void __cdecl crt_errno_c_setErrno_FUN_005c6450(int error_code)

#include "nocturne.h"

void __cdecl setErrno(int error_code)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_crt_unknown_c_FUN_005c50cc_006265fc)();
  *(int *)(iVar1 + 4) = error_code;
  return;
}
