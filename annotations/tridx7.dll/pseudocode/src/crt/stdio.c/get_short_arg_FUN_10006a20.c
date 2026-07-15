// Name: crt_stdio.c_get_short_arg_FUN_10006a20
// Address: 10006a20
// Address Range: [[10006a20, 10006a2f]]
// Convention: __cdecl
// Signature: short __cdecl crt_stdio_c_get_short_arg_FUN_10006a20(va_list *parg)

#include "nocturne.h"

short __cdecl get_short_arg(va_list *parg)

{
  short *psVar1;
  
  psVar1 = (short *)*parg;
  *parg = (va_list)(psVar1 + 2);
  return *psVar1;
}
