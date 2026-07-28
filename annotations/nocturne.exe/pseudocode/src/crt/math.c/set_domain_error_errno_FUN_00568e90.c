// Name: crt_math.c_set_domain_error_errno_FUN_00568e90
// Address: 00568e90
// Address Range: [[00568e90, 00568e9a]]
// Convention: __cdecl
// Signature: void __cdecl crt_math_c_set_domain_error_errno_FUN_00568e90(void)

#include "nocturne.h"

void __cdecl set_domain_error_errno(void)

{
  setErrno(0xd);
  return;
}
