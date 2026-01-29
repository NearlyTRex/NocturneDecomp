// Name: crt_stdio.c_string_ungetc_FUN_006000f8
// Address: 006000f8
// Address Range: [[006000f8, 006000ff]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_string_ungetc_FUN_006000f8(int ch,scanf_state_t *state)

#include "nocturne.h"

int __cdecl string_ungetc(int ch,scanf_state_t *state)

{
  state->input_ptr = (void *)((int)state->input_ptr + -1);
  return (int)state;
}
