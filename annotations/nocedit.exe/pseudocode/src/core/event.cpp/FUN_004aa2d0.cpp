// Name: core_event.cpp_FUN_004aa2d0
// Address: 004aa2d0
// Address Range: [[004aa2d0, 004aa2e9]]
// Convention: unknown
// Signature: void core_event_cpp_FUN_004aa2d0(void)

#include "nocturne.h"

void core_event_cpp_FUN_004aa2d0(void)

{
  char *in_stack_00000004;
  
  while ((g_CharacterClassificationTable[(byte)(*in_stack_00000004 + 1)] & 2U) != 0) {
    in_stack_00000004 = in_stack_00000004 + 1;
  }
  return;
}
