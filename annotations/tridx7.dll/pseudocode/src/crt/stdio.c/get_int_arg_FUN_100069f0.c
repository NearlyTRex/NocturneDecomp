// Name: crt_stdio.c_get_int_arg_FUN_100069f0
// Address: 100069f0
// Address Range: [[100069f0, 100069fe]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_get_int_arg_FUN_100069f0(va_list *parg)

#include "nocturne.h"

int __cdecl get_int_arg(va_list *parg)

{
  int *piVar1;
  
  piVar1 = (int *)*parg;
  *parg = (va_list)(piVar1 + 1);
  return *piVar1;
}
