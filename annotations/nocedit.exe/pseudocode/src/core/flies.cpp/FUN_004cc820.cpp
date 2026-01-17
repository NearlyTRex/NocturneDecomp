// Name: core_flies.cpp_FUN_004cc820
// Address: 004cc820
// Address Range: [[004cc820, 004cc840]]
// Convention: unknown
// Signature: undefined core_flies.cpp_FUN_004cc820()

#include "nocturne.h"

/* Signature: byte actors_other_flies.cpp_FUN_004cc820(uint param_1, uint param_2,
   uint param_3) */

float * core_flies_cpp_FUN_004cc820(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  float local_44 [6];
  float local_2c [5];
  float local_18;
  
  local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
  in_stack_00000008[1] = local_18;
  in_stack_00000008[1] =
       in_stack_00000008[1] * in_stack_00000008[1] * *(float *)(in_stack_00000004 + 0x15c);
  local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                       (*(float *)(in_stack_00000004 + 0x158) * (float)-0.5,
                        *(float *)(in_stack_00000004 + 0x158) * (float)0.5);
  *in_stack_00000008 = local_18;
  fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                    (*(float *)(in_stack_00000004 + 0x160) * (float)-0.5,
                     *(float *)(in_stack_00000004 + 0x160) * (float)0.5);
  in_stack_00000008[2] = fVar6;
  if (in_stack_0000000c != (float *)0x0) {
    fVar6 = *in_stack_00000008 - *in_stack_0000000c;
    fVar4 = in_stack_00000008[1] - in_stack_0000000c[1];
    fVar5 = in_stack_00000008[2] - in_stack_0000000c[2];
    fVar3 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4);
    if ((float)4 < fVar3) {
      fVar4 = fVar4 * 4.0f;
      fVar5 = fVar5 * 4.0f;
      fVar3 = 1.0 / fVar3;
      fVar1 = in_stack_0000000c[1];
      fVar2 = in_stack_0000000c[2];
      if (in_stack_00000008 != local_2c) {
        *in_stack_00000008 = *in_stack_0000000c + fVar6 * 4.0f * fVar3;
        in_stack_00000008[1] = fVar1 + fVar4 * fVar3;
        in_stack_00000008[2] = fVar2 + fVar5 * fVar3;
        return in_stack_00000008;
      }
    }
    else if ((fVar3 < 1.0) && (0.0 < fVar3)) {
      fVar3 = 1.0 / fVar3;
      fVar1 = in_stack_0000000c[1];
      fVar2 = in_stack_0000000c[2];
      if (in_stack_00000008 != local_44) {
        *in_stack_00000008 = *in_stack_0000000c + fVar6 * fVar3;
        in_stack_00000008[1] = fVar1 + fVar4 * fVar3;
        in_stack_00000008[2] = fVar2 + fVar5 * fVar3;
        return in_stack_00000008;
      }
    }
  }
  return in_stack_00000008;
}
