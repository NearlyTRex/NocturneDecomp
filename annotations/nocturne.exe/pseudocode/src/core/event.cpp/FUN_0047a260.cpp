// Name: core_event.cpp_FUN_0047a260
// Address: 0047a260
// Address Range: [[0047a260, 0047a279]]
// Convention: unknown
// Signature: void core_event_cpp_FUN_0047a260(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_event_cpp_FUN_0047a260(void)

{
  char *in_stack_00000004;
  
  while ((g_CharacterClassificationTable[(byte)(*in_stack_00000004 + 1)] & 2) != 0) {
    in_stack_00000004 = in_stack_00000004 + 1;
  }
  return;
}
