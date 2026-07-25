// Name: FUN_0055b0b0
// Address: 0055b0b0
// Address Range: [[0055b0b0, 0055b17d]]
// Convention: unknown
// Signature: float FUN_0055b0b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float FUN_0055b0b0(void)

{
  float10 fVar1;
  double in_stack_00000004;
  double in_stack_0000000c;
  float local_c;
  
  if ((_DAT_0059825e <= in_stack_00000004) || (in_stack_00000004 <= _DAT_00598266)) {
    if ((_DAT_0059826e < in_stack_0000000c) && (in_stack_0000000c < 1.0)) {
      fVar1 = (float10)acos((float10)in_stack_0000000c);
      local_c = (float)fVar1;
    }
    if (in_stack_00000004 < 0.0) {
      local_c = -local_c;
    }
  }
  else {
    fVar1 = (float10)asin((float10)in_stack_00000004);
    local_c = (float)fVar1;
    if (in_stack_0000000c < 0.0) {
      local_c = (float)_DAT_00598276 - local_c;
    }
  }
  if (local_c < (float)_DAT_0059827e) {
    local_c = local_c + _DAT_00598286;
  }
  if ((float)_DAT_00598276 < local_c) {
    return local_c + _DAT_0059828a;
  }
  return local_c;
}
