// Name: crt_stdio.c_scanf_getc_wrapper_FUN_00604930
// Address: 00604930
// Address Range: [[00604930, 0060493a]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_scanf_getc_wrapper_FUN_00604930(scanf_state_t *state)

#include "nocturne.h"

int __cdecl crt_stdio_c_scanf_getc_wrapper_FUN_00604930(scanf_state_t *state)

{
  int iVar1;
  
  iVar1 = (*state->getc_func)(state);
  return iVar1;
}
