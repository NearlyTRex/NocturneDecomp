// Name: core_dirmat.cpp_FUN_0044db00
// Address: 0044db00
// Address Range: [[0044db00, 0044dbcd]]
// Convention: unknown
// Signature: float core_dirmat_cpp_FUN_0044db00(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float core_dirmat_cpp_FUN_0044db00(void)

{
  float10 fVar1;
  double dVar2;
  double in_stack_00000004;
  double in_stack_0000000c;
  float local_c;
  
  if ((_DAT_0057c4de <= in_stack_00000004) || (in_stack_00000004 <= _DAT_0057c4e6)) {
    if ((_DAT_0057c4ee < in_stack_0000000c) && (in_stack_0000000c < 1.0)) {
      dVar2 = acos(in_stack_0000000c);
      local_c = (float)dVar2;
    }
    if (in_stack_00000004 < 0.0) {
      local_c = -local_c;
    }
  }
  else {
    fVar1 = asin((float10)in_stack_00000004);
    local_c = (float)fVar1;
    if (in_stack_0000000c < 0.0) {
      local_c = (float)_DAT_0057c4f6 - local_c;
    }
  }
  if (local_c < (float)_DAT_0057c4fe) {
    local_c = local_c + _DAT_0057c506;
  }
  if ((float)_DAT_0057c4f6 < local_c) {
    return local_c + _DAT_0057c50a;
  }
  return local_c;
}
