// Name: crt_stdio.c_ungetc_helper_FUN_005fe720
// Address: 005fe720
// Address Range: [[005fe720, 005fe737]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_stdio_c_ungetc_helper_FUN_005fe720(int character,scanf_state_t *state)

#include "nocturne.h"

int __watcallStack ungetc_helper(int character,scanf_state_t *state)

{
  int iVar1;
  
  iVar1 = _fputc(character,state->input_ptr);
  return iVar1;
}
