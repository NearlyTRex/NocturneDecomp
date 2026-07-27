// Name: core_cloth.cpp_FUN_00438900
// Address: 00438900
// Address Range: [[00438900, 0043894e]]
// Convention: unknown
// Signature: void core_cloth_cpp_FUN_00438900(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_cloth_cpp_FUN_00438900(void)

{
  float fVar1;
  float *in_stack_00000004;
  
  fVar1 = (float)((int)CVector3f_01c70708.z -
                 ((int)(in_stack_00000004[2] * in_stack_00000004[2] +
                       *in_stack_00000004 * *in_stack_00000004 +
                       in_stack_00000004[1] * in_stack_00000004[1]) >> 1));
  *in_stack_00000004 = *in_stack_00000004 * fVar1;
  in_stack_00000004[1] = in_stack_00000004[1] * fVar1;
  in_stack_00000004[2] = in_stack_00000004[2] * fVar1;
  return;
}
