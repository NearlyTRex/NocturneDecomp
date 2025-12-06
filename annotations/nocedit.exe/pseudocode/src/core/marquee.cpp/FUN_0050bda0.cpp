// Name: core_marquee.cpp_FUN_0050bda0
// Address: 0050bda0
// Address Range: [[0050bda0, 0050be42]]
// Convention: unknown
// Signature: undefined core_marquee.cpp_FUN_0050bda0()

#include "nocturne.h"

/* Signature: byte actors_other_marquee.cpp_FUN_0050bda0(uint param_1, uint
   param_2) */

void core_marquee_cpp_FUN_0050bda0(void)

{
  float fVar1;
  float fVar2;
  int in_stack_00000004;
  float in_stack_00000008;
  
  fVar1 = (float)*(int *)(in_stack_00000004 + 0x1a4);
  if (*(int *)(in_stack_00000004 + 0x1a0) == 1) {
    fVar2 = (in_stack_00000008 * fVar1) / *(float *)(in_stack_00000004 + 0x178) +
            *(float *)(in_stack_00000004 + 0x17c);
    *(float *)(in_stack_00000004 + 0x17c) = fVar2;
    if (fVar1 < fVar2) {
      *(float *)(in_stack_00000004 + 0x17c) = *(float *)(in_stack_00000004 + 0x17c) - fVar1;
      return;
    }
  }
  else if (*(int *)(in_stack_00000004 + 0x1a0) == 0) {
    fVar1 = in_stack_00000008 / *(float *)(in_stack_00000004 + 0x178) +
            *(float *)(in_stack_00000004 + 0x17c);
    *(float *)(in_stack_00000004 + 0x17c) = fVar1;
    if ((float)*(int *)(in_stack_00000004 + 0x180) < fVar1) {
      *(float *)(in_stack_00000004 + 0x17c) =
           *(float *)(in_stack_00000004 + 0x17c) - (float)*(int *)(in_stack_00000004 + 0x180);
      return;
    }
  }
  return;
}
