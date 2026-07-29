// Name: crt_unknown.c_ungetc_helper_FUN_005632b0
// Address: 005632b0
// Address Range: [[005632b0, 005632c7]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_unknown_c_ungetc_helper_FUN_005632b0(int character,scanf_state_t *state)

#include "nocturne.h"

int __watcallStack ungetc_helper(int character,scanf_state_t *state)

{
  int iVar1;
  
  iVar1 = _ungetc(character,state->input_ptr);
  return iVar1;
}
