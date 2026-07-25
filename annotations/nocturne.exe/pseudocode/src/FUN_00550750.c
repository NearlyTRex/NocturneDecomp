// Name: FUN_00550750
// Address: 00550750
// Address Range: [[00550750, 00550794]]
// Convention: unknown
// Signature: float FUN_00550750(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float FUN_00550750(void)

{
  float10 fVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  fVar1 = (float10)fsin((float10)in_stack_00000008 * (float10)_DAT_00597527 * (float10)_DAT_0059752f
                        + (float10)in_stack_00000004 * (float10)_DAT_00597527 +
                        (float10)_DAT_02dd9260);
  return (float)(fVar1 * (float10)_DAT_00597537);
}
