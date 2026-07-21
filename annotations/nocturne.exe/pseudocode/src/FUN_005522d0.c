// Name: FUN_005522d0
// Address: 005522d0
// Address Range: [[005522d0, 00552334]]
// Convention: unknown
// Signature: int FUN_005522d0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_005522d0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = __vec_delete(param_1,&DAT_005a3ff0);
    shape_memdbg_cpp_free_FUN_00564486(uVar2);
    return param_1;
  }
  iVar1 = FUN_00552360(param_1 + 0x294,0);
  iVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(iVar1 + -0x294,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
