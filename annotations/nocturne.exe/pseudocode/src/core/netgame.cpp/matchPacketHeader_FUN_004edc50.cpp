// Name: core_netgame.cpp_matchPacketHeader_FUN_004edc50
// Address: 004edc50
// Address Range: [[004edc50, 004edc73]]
// Convention: unknown
// Signature: undefined4 core_netgame_cpp_matchPacketHeader_FUN_004edc50(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint core_netgame_cpp_matchPacketHeader_FUN_004edc50(void)

{
  int *in_stack_00000004;
  int *in_stack_00000008;
  
  if (((short)in_stack_00000008[1] == (short)in_stack_00000004[1]) &&
     (*in_stack_00000004 == *in_stack_00000008)) {
    return 1;
  }
  return 0;
}
