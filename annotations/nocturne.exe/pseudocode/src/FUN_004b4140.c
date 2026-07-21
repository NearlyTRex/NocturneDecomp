// Name: FUN_004b4140
// Address: 004b4140
// Address Range: [[004b4140, 004b418d]]
// Convention: unknown
// Signature: undefined4 FUN_004b4140(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_004b4140(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = __vec_delete(param_1,&DAT_0059e9d0);
    shape_memdbg_cpp_free_FUN_00564486(uVar1);
    return param_1;
  }
  uVar1 = FUN_004b4800(param_1,1);
  if ((param_2 & 2) == 0) {
    return uVar1;
  }
  FUN_00564494(uVar1);
  return uVar1;
}
