// Name: crt_unknown.c_FUN_00607c88
// Address: 00607c88
// Address Range: [[00607c88, 00607cbb]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_00607c88(void)

#include "nocturne.h"

uint FUN_00607c88(void)

{
  uint uVar1;
  int *in_stack_00000004;
  int *in_stack_00000008;
  
  uVar1 = 0;
  if ((in_stack_00000004[2] < in_stack_00000008[2]) ||
     ((in_stack_00000004[2] == in_stack_00000008[2] &&
      ((in_stack_00000004[1] < in_stack_00000008[1] ||
       ((in_stack_00000004[1] == in_stack_00000008[1] && (*in_stack_00000004 < *in_stack_00000008)))
       ))))) {
    uVar1 = 1;
  }
  return uVar1;
}
