// Name: core_chain.cpp_FUN_0042fed0
// Address: 0042fed0
// Address Range: [[0042fed0, 004300c5]]
// Convention: unknown
// Signature: undefined core_chain.cpp_FUN_0042fed0()

#include "nocturne.h"

/* Signature: byte actors_other_chain.cpp_FUN_0042fed0(uint param_1, uint param_2,
   uint param_3) */

void core_chain_cpp_FUN_0042fed0(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  float local_68 [12];
  float local_38;
  float local_34;
  float local_30;
  
  if ((*(int *)(in_stack_00000004 + 0x288) != 0) &&
     (in_stack_00000008[1] < *(float *)(in_stack_00000004 + 0x56c))) {
    in_stack_00000008[5] = 0.0;
    in_stack_00000008[4] = in_stack_00000008[5];
    in_stack_00000008[3] = in_stack_00000008[4];
    in_stack_00000008[1] = *(float *)(in_stack_00000004 + 0x56c);
  }
  if (&local_38 != local_68) {
    local_38 = *in_stack_00000008 - *in_stack_0000000c;
    local_34 = in_stack_00000008[1] - in_stack_0000000c[1];
    local_30 = in_stack_00000008[2] - in_stack_0000000c[2];
  }
  fVar6 = (float)(((int)(local_30 * local_30 + local_38 * local_38 + local_34 * local_34) >> 1) +
                 DAT_02d7a7b8);
  if (fVar6 <= *(float *)(in_stack_00000004 + 0x160)) {
    return;
  }
  fVar2 = fVar6 - *(float *)(in_stack_00000004 + 0x160);
  fVar6 = 1.0 / fVar6;
  fVar4 = local_38 * fVar2 * fVar6;
  fVar5 = local_34 * fVar2 * fVar6;
  fVar6 = local_30 * fVar2 * fVar6;
  *in_stack_00000008 = *in_stack_00000008 - fVar4;
  in_stack_00000008[1] = in_stack_00000008[1] - fVar5;
  pfVar1 = (float *)(in_stack_00000004 + 0x570);
  in_stack_00000008[2] = in_stack_00000008[2] - fVar6;
  fVar2 = *pfVar1;
  fVar3 = *pfVar1;
  in_stack_00000008[3] = in_stack_00000008[3] - fVar4 * *pfVar1;
  in_stack_00000008[4] = in_stack_00000008[4] - fVar5 * fVar2;
  in_stack_00000008[5] = in_stack_00000008[5] - fVar6 * fVar3;
  *in_stack_0000000c = *in_stack_0000000c + fVar4;
  in_stack_0000000c[1] = in_stack_0000000c[1] + fVar5;
  in_stack_0000000c[2] = in_stack_0000000c[2] + fVar6;
  fVar2 = *pfVar1;
  fVar3 = *pfVar1;
  in_stack_0000000c[3] = in_stack_0000000c[3] + fVar4 * *pfVar1;
  in_stack_0000000c[4] = in_stack_0000000c[4] + fVar5 * fVar2;
  in_stack_0000000c[5] = in_stack_0000000c[5] + fVar6 * fVar3;
  return;
}
