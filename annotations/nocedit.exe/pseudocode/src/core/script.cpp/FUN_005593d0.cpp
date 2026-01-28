// Name: core_script.cpp_FUN_005593d0
// Address: 005593d0
// Address Range: [[005593d0, 005593e9]]
// Convention: unknown
// Signature: void core_script_cpp_FUN_005593d0(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_005593d0(uint param_1) */

void core_script_cpp_FUN_005593d0(void)

{
  char *in_stack_00000004;
  
  while ((g_CharacterClassificationTable[(byte)(*in_stack_00000004 + 1)] & 2U) != 0) {
    in_stack_00000004 = in_stack_00000004 + 1;
  }
  return;
}
