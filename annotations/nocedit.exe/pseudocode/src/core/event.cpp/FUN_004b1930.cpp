// Name: core_event.cpp_FUN_004b1930
// Address: 004b1930
// Address Range: [[004b1930, 004b1964]]
// Convention: unknown
// Signature: float core_event_cpp_FUN_004b1930(void)

#include "nocturne.h"

float core_event_cpp_FUN_004b1930(void)

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
