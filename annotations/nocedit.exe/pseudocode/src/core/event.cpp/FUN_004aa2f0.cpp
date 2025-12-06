// Name: core_event.cpp_FUN_004aa2f0
// Address: 004aa2f0
// Address Range: [[004aa2f0, 004aa311]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004aa2f0()

#include "nocturne.h"

void core_event_cpp_FUN_004aa2f0(void)

{
  int in_stack_00000004;
  int *in_stack_00000008;
  
  while ((g_CharacterClassificationTable
          [(byte)(*(char *)(in_stack_00000004 + *in_stack_00000008) + 1)] & 2U) != 0) {
    *in_stack_00000008 = *in_stack_00000008 + 1;
  }
  return;
}
