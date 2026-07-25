// Name: FUN_00548ea0
// Address: 00548ea0
// Address Range: [[00548ea0, 00548ec7]]
// Convention: unknown
// Signature: undefined4 FUN_00548ea0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint FUN_00548ea0(void)

{
  uint in_stack_00000004;
  
  _DAT_01cc4800 = "..\\support\\trisock.cpp";
  _DAT_01cc4804 = 0xd1;
  FUN_004c8440("Should never be called!");
  return in_stack_00000004;
}
