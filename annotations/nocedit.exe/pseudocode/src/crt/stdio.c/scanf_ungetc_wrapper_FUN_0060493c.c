// Name: crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c
// Address: 0060493c
// Address Range: [[0060493c, 0060494c]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_scanf_ungetc_wrapper_FUN_0060493c(int character,scanf_state_t *state)

#include "nocturne.h"

int __cdecl crt_stdio_c_scanf_ungetc_wrapper_FUN_0060493c(int character,scanf_state_t *state)

{
  int iVar1;
  
  iVar1 = (*state->ungetc_func)(character,state);
  return iVar1;
}
