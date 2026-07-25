// Name: FUN_00548e70
// Address: 00548e70
// Address Range: [[00548e70, 00548e97]]
// Convention: unknown
// Signature: undefined4 FUN_00548e70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint FUN_00548e70(void)

{
  uint in_stack_00000004;
  
  _DAT_01cc4800 = "..\\support\\trisock.cpp";
  _DAT_01cc4804 = 0xd0;
  FUN_004c8440("Should never be called!");
  return in_stack_00000004;
}
