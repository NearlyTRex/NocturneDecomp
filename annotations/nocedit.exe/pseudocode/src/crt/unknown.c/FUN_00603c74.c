// Name: crt_unknown.c_FUN_00603c74
// Address: 00603c74
// Address Range: [[00603c74, 00603ccb]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00603c74()

#include "nocturne.h"

/* Signature: byte FUN_00603c74(uint param_1, uint param_2) */

void crt_unknown_c_FUN_00603c74(void)

{
  float10 *pfVar1;
  float10 *in_stack_00000004;
  uint in_stack_00000008;
  
  if (0x1fff < (int)in_stack_00000008) {
    in_stack_00000008 = 0x2000;
  }
  pfVar1 = (float10 *)&DAT_00684f30;
  for (; 0 < (int)in_stack_00000008; in_stack_00000008 = (int)in_stack_00000008 >> 1) {
    if ((in_stack_00000008 & 1) != 0) {
      *in_stack_00000004 = *pfVar1 * *in_stack_00000004;
    }
    pfVar1 = (float10 *)((int)pfVar1 + 10);
  }
  crt_unknown_c_FUN_0060445e();
  return;
}
