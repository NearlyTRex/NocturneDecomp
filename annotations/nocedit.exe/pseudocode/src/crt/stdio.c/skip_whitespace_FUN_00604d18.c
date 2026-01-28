// Name: crt_stdio.c_skip_whitespace_FUN_00604d18
// Address: 00604d18
// Address Range: [[00604d18, 00604d53]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_skip_whitespace_FUN_00604d18(scanf_state_t *state)

#include "nocturne.h"

int __cdecl crt_stdio_c_skip_whitespace_FUN_00604d18(scanf_state_t *state)

{
  int character;
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    character = crt_stdio_c_scanf_getc_wrapper_FUN_00604930(state);
    if ((g_CharacterClassificationTable[(byte)((char)character + 1)] & 2U) == 0) break;
    iVar1 = iVar1 + 1;
  }
  if ((state->flags & 2) == 0) {
    crt_stdio_c_scanf_ungetc_wrapper_FUN_0060493c(character,state);
  }
  return iVar1;
}
