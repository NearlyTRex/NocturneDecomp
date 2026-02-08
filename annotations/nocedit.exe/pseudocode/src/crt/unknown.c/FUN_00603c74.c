// Name: crt_unknown.c_FUN_00603c74
// Address: 00603c74
// Address Range: [[00603c74, 00603ccb]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_FUN_00603c74(void)

#include "nocturne.h"

void __cdecl FUN_00603c74(void)

{
  int *piVar1;
  float10 *in_stack_00000004;
  uint in_stack_00000008;
  
  if (0x1fff < (int)in_stack_00000008) {
    in_stack_00000008 = 0x2000;
  }
  piVar1 = &DAT_00684f30;
  for (; 0 < (int)in_stack_00000008; in_stack_00000008 = (int)in_stack_00000008 >> 1) {
    if ((in_stack_00000008 & 1) != 0) {
      *in_stack_00000004 = *(float10 *)piVar1 * *in_stack_00000004;
    }
    piVar1 = (int *)((int)piVar1 + 10);
  }
  FUN_0060445e();
  return;
}
