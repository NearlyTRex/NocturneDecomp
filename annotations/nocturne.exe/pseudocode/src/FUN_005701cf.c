// Name: FUN_005701cf
// Address: 005701cf
// Address Range: [[005701cf, 00570247]]
// Convention: unknown
// Signature: int FUN_005701cf(int param_1,byte param_2)

#include "nocturne.h"

int FUN_005701cf(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) == 0) {
    *(byte ***)(param_1 + 0x28) = &PTR_FUN_005a4884;
    if ((((*(byte *)(param_1 + 0x3c) & 2) != 0) && ((*(byte *)(param_1 + 0x3c) & 1) == 0)) &&
       (iVar1 = *(int *)(param_1 + 4), iVar1 != 0)) {
      if (*(int *)(param_1 + 0x30) == 0) {
        shape_memdbg_cpp_free_FUN_00564486(iVar1);
      }
      else {
        (**(code **)(param_1 + 0x30))(iVar1);
      }
    }
    param_1 = FUN_00571d9f(param_1,1);
    if ((param_2 & 2) == 0) {
      return param_1;
    }
    FUN_00564494(param_1);
  }
  else {
    uVar2 = __vec_delete(param_1,&g_strstreambufTypeInfo_005a4af0);
    shape_memdbg_cpp_free_FUN_00564486(uVar2);
  }
  return param_1;
}
