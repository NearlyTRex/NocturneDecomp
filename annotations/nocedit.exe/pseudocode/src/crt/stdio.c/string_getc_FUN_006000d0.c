// Name: crt_stdio.c_string_getc_FUN_006000d0
// Address: 006000d0
// Address Range: [[006000d0, 006000f5]]
// Convention: __cdecl
// Signature: int crt_stdio.c_string_getc_FUN_006000d0(scanf_state_t * state)

#include "nocturne.h"

int __cdecl crt_stdio_c_string_getc_FUN_006000d0(scanf_state_t *state)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)state->input_ptr;
  if (uVar1 != 0) {
    state->input_ptr = (byte *)((int)state->input_ptr + 1);
    return uVar1;
  }
  state->flags = state->flags | 2;
  return -1;
}
