// Name: FUN_00558c00
// Address: 00558c00
// Address Range: [[00558c00, 00558c33]]
// Convention: unknown
// Signature: void FUN_00558c00(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_00558c00(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  if ((((_DAT_01c00c58 < in_stack_00000004) && (_DAT_01c00c5c < in_stack_00000008)) &&
      (in_stack_00000004 < _DAT_01c00c60)) && (in_stack_00000008 < _DAT_01c00c64)) {
    engine_2d_c_plotPixel_FUN_00401530();
    return;
  }
  return;
}
