// Name: FUN_005262a0
// Address: 005262a0
// Address Range: [[005262a0, 005262cd]]
// Convention: unknown
// Signature: void FUN_005262a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_005262a0(void)

{
  uint in_stack_00000004;
  
  *(uint *)(_DAT_02dc1b74 * 0x6c + 0x2dc1bd4) =
       *(uint *)(_DAT_02dc1b74 * 0x6c + 0x2dc1bd4) & ~in_stack_00000004;
  return;
}
