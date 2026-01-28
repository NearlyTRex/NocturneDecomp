// Name: crt_unknown.c_FUN_00603d60
// Address: 00603d60
// Address Range: [[00603d60, 00603db0]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00603d60(void)

#include "nocturne.h"

/* Signature: byte FUN_00603d60(uint param_1, uint param_2) */

void crt_unknown_c_FUN_00603d60(void)

{
  int in_stack_00000008;
  
  if ((0x1000 < in_stack_00000008) || (in_stack_00000008 < -0x1000)) {
    crt_unknown_c_CondCallDoNothing_FUN_00603ccc();
  }
  crt_unknown_c_CondCallDoNothing_FUN_00603ccc();
  return;
}
