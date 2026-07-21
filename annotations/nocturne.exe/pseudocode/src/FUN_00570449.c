// Name: FUN_00570449
// Address: 00570449
// Address Range: [[00570449, 005704c0]]
// Convention: unknown
// Signature: int FUN_00570449(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00570449(int param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) == 0) {
    *(byte ***)(param_1 + 0x28) = &PTR_FUN_005a4b0c;
    if (*(int *)(param_1 + 0x2c) != -1) {
      if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x18)) {
        FUN_005723ae(param_1);
      }
      if ((*(byte *)(param_1 + 0x39) & 1) == 0) {
        FUN_0056cd52(param_1);
      }
    }
    param_1 = FUN_00571d9f(param_1,1);
    if ((param_2 & 2) == 0) {
      return param_1;
    }
    FUN_00564494(param_1);
  }
  else {
    uVar1 = __vec_delete(param_1,&DAT_005a4b60);
    shape_memdbg_cpp_free_FUN_00564486(uVar1);
  }
  return param_1;
}
