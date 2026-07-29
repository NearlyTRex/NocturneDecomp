// Name: crt_unknown.c_getc_helper_FUN_00563290
// Address: 00563290
// Address Range: [[00563290, 005632af]]
// Convention: __cdecl
// Signature: int __cdecl crt_unknown_c_getc_helper_FUN_00563290(scanf_state_t *state)

#include "nocturne.h"

int __cdecl getc_helper(scanf_state_t *state)

{
  int iVar1;
  
  iVar1 = _fgetc(state->input_ptr);
  if (iVar1 == -1) {
    state->flags = state->flags | 2;
  }
  return iVar1;
}
