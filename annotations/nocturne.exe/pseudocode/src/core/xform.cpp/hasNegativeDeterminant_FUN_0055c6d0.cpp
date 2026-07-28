// Name: core_xform.cpp_hasNegativeDeterminant_FUN_0055c6d0
// Address: 0055c6d0
// Address Range: [[0055c6d0, 0055c729]]
// Convention: unknown
// Signature: bool core_xform_cpp_hasNegativeDeterminant_FUN_0055c6d0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool core_xform_cpp_hasNegativeDeterminant_FUN_0055c6d0(void)

{
  float *in_stack_00000004;
  
  return *in_stack_00000004 *
         (in_stack_00000004[5] * in_stack_00000004[10] - in_stack_00000004[6] * in_stack_00000004[9]
         ) + in_stack_00000004[1] *
             (in_stack_00000004[6] * in_stack_00000004[8] -
             in_stack_00000004[4] * in_stack_00000004[10]) +
         in_stack_00000004[2] *
         (in_stack_00000004[4] * in_stack_00000004[9] - in_stack_00000004[8] * in_stack_00000004[5])
         < 0.0;
}
