// Name: core_event.cpp_getVectorDistance_FUN_004818e0
// Address: 004818e0
// Address Range: [[004818e0, 00481914]]
// Convention: unknown
// Signature: float core_event_cpp_getVectorDistance_FUN_004818e0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float core_event_cpp_getVectorDistance_FUN_004818e0(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  
  return SQRT((in_stack_00000004[2] - in_stack_00000008[2]) *
              (in_stack_00000004[2] - in_stack_00000008[2]) +
              (in_stack_00000004[1] - in_stack_00000008[1]) *
              (in_stack_00000004[1] - in_stack_00000008[1]) +
              (*in_stack_00000004 - *in_stack_00000008) * (*in_stack_00000004 - *in_stack_00000008))
  ;
}
