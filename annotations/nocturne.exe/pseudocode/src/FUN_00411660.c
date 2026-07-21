// Name: FUN_00411660
// Address: 00411660
// Address Range: [[00411660, 004116ad]]
// Convention: unknown
// Signature: undefined4 FUN_00411660(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_00411660(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = __vec_delete(param_1,&DAT_00599d30);
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
