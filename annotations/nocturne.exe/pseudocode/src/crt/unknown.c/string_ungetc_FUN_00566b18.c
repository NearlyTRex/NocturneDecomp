// Name: crt_unknown.c_string_ungetc_FUN_00566b18
// Address: 00566b18
// Address Range: [[00566b18, 00566b1f]]
// Convention: __cdecl
// Signature: int __cdecl crt_unknown_c_string_ungetc_FUN_00566b18(int ch,scanf_state_t *state)

#include "nocturne.h"

int __cdecl string_ungetc(int ch,scanf_state_t *state)

{
  state->input_ptr = (void *)((int)state->input_ptr + -1);
  return (int)state;
}
