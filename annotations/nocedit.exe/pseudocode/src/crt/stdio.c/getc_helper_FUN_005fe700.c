// Name: crt_stdio.c_getc_helper_FUN_005fe700
// Address: 005fe700
// Address Range: [[005fe700, 005fe71b]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_getc_helper_FUN_005fe700(scanf_state_t *state)

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
