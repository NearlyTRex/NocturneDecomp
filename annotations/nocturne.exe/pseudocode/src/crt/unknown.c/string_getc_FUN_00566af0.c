// Name: crt_unknown.c_string_getc_FUN_00566af0
// Address: 00566af0
// Address Range: [[00566af0, 00566b15]]
// Convention: __cdecl
// Signature: int __cdecl crt_unknown_c_string_getc_FUN_00566af0(scanf_state_t *state)

#include "nocturne.h"

int __cdecl string_getc(scanf_state_t *state)

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
