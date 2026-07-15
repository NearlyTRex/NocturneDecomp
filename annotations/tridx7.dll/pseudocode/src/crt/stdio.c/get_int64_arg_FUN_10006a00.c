// Name: crt_stdio.c_get_int64_arg_FUN_10006a00
// Address: 10006a00
// Address Range: [[10006a00, 10006a14]]
// Convention: __cdecl
// Signature: longlong __cdecl crt_stdio_c_get_int64_arg_FUN_10006a00(va_list *parg)

#include "nocturne.h"

longlong __cdecl get_int64_arg(va_list *parg)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*parg;
  *parg = (va_list)(plVar1 + 1);
  return *plVar1;
}
