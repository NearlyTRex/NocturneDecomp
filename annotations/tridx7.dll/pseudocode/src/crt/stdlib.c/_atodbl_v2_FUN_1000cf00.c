// Name: crt_stdlib.c__atodbl_v2_FUN_1000cf00
// Address: 1000cf00
// Address Range: [[1000cf00, 1000cf48]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdlib_c__atodbl_v2_FUN_1000cf00(_CRT_DOUBLE *result,char *str)

#include "nocturne.h"

int __cdecl _atodbl_v2(_CRT_DOUBLE *result,char *str)

{
  uint uVar1;
  INTRNCVT_STATUS IVar2;
  char *in_stack_0000000c;
  int in_stack_00000010;
  _LDBL12 _Stack_c;
  
  uVar1 = _strgtold12
                    (&_Stack_c,(char **)str,in_stack_0000000c,in_stack_00000010,0,0,0);
  IVar2 = __ld12told(&_Stack_c,(_LDOUBLE *)result);
  if (IVar2 == INTRNCVT_OVERFLOW) {
    uVar1 = uVar1 | 2;
  }
  return uVar1;
}
