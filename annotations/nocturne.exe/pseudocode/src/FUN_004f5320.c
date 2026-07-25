// Name: FUN_004f5320
// Address: 004f5320
// Address Range: [[004f5320, 004f534d]]
// Convention: unknown
// Signature: void FUN_004f5320(undefined4 *param_1)

#include "nocturne.h"

void FUN_004f5320(uint *param_1)

{
  uint uVar1;
  
  uVar1 = __vec_delete(param_1[1],&DAT_005a1340);
  shape_memdbg_cpp_free_FUN_00564486(uVar1);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}
