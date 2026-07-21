// Name: FUN_0043ab60
// Address: 0043ab60
// Address Range: [[0043ab60, 0043abad]]
// Convention: unknown
// Signature: undefined4 FUN_0043ab60(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_0043ab60(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = __vec_delete(param_1,&DAT_0059b6c0);
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
