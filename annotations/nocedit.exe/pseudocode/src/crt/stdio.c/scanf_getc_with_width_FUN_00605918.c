// Name: crt_stdio.c_scanf_getc_with_width_FUN_00605918
// Address: 00605918
// Address Range: [[00605918, 00605941]]
// Convention: __cdecl
// Signature: int crt_stdio.c_scanf_getc_with_width_FUN_00605918(scanf_state_t * state)

#include "nocturne.h"

int __cdecl crt_stdio_c_scanf_getc_with_width_FUN_00605918(scanf_state_t *state)

{
  int iVar1;
  
  iVar1 = state->field_width;
  state->field_width = iVar1 + -1;
  if ((iVar1 != 0) &&
     (iVar1 = crt_stdio_c_scanf_getc_wrapper_FUN_00604930(state), (state->flags & 2) == 0)) {
    return iVar1;
  }
  return -1;
}
