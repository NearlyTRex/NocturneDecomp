// Name: crt_unknown.c_FUN_0060b07a
// Address: 0060b07a
// Address Range: [[0060b07a, 0060b0c7]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_0060b07a(void)

#include "nocturne.h"

uint FUN_0060b07a(void)

{
  int *in_stack_00000004;
  
  if ((*(ushort *)(in_stack_00000004 + 2) & 0x7fff) == 0x7fff) {
    if ((in_stack_00000004[1] == -0x80000000) && (*in_stack_00000004 == 0)) {
      return 3;
    }
    return 2;
  }
  if ((*(ushort *)(in_stack_00000004 + 2) & 0x7fff) != 0) {
    return 1;
  }
  if ((in_stack_00000004[1] == 0) && (*in_stack_00000004 == 0)) {
    return 0;
  }
  return 4;
}
