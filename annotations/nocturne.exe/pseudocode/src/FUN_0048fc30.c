// Name: FUN_0048fc30
// Address: 0048fc30
// Address Range: [[0048fc30, 0048fc94]]
// Convention: unknown
// Signature: int FUN_0048fc30(int param_1,byte param_2)

#include "nocturne.h"

int FUN_0048fc30(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = __vec_delete(param_1,&DAT_0059db30);
    shape_memdbg_cpp_free_FUN_00564486(uVar2);
    return param_1;
  }
  iVar1 = FUN_0048fce0(param_1 + 0x160,0);
  iVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(iVar1 + -0x160,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
