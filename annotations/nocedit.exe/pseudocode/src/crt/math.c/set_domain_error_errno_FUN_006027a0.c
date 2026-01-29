// Name: crt_math.c_set_domain_error_errno_FUN_006027a0
// Address: 006027a0
// Address Range: [[006027a0, 006027aa]]
// Convention: __cdecl
// Signature: void __cdecl crt_math_c_set_domain_error_errno_FUN_006027a0(void)

#include "nocturne.h"

void __cdecl set_domain_error_errno(void)

{
  setErrno(0xd);
  return;
}
