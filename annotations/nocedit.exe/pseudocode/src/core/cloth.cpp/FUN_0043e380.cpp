// Name: core_cloth.cpp_FUN_0043e380
// Address: 0043e380
// Address Range: [[0043e380, 0043e3ce]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043e380()

#include "nocturne.h"

void core_cloth_cpp_FUN_0043e380(void)

{
  float fVar1;
  float *in_stack_00000004;
  
  fVar1 = (float)(g_LightAttenuationMax -
                 ((int)(in_stack_00000004[2] * in_stack_00000004[2] +
                       *in_stack_00000004 * *in_stack_00000004 +
                       in_stack_00000004[1] * in_stack_00000004[1]) >> 1));
  *in_stack_00000004 = *in_stack_00000004 * fVar1;
  in_stack_00000004[1] = in_stack_00000004[1] * fVar1;
  in_stack_00000004[2] = in_stack_00000004[2] * fVar1;
  return;
}
