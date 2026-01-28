// Name: core_event.cpp_FUN_004b0f90
// Address: 004b0f90
// Address Range: [[004b0f90, 004b0fb9]]
// Convention: unknown
// Signature: undefined4 core_event_cpp_FUN_004b0f90(void)

#include "nocturne.h"

uint core_event_cpp_FUN_004b0f90(void)

{
  int in_stack_00000004;
  
  if ((((g_CharacterClassificationTable[(byte)((char)in_stack_00000004 + 1)] & 0xe0U) == 0) &&
      (in_stack_00000004 != 0x5f)) && (in_stack_00000004 != 0x2d)) {
    return 0;
  }
  return 1;
}
