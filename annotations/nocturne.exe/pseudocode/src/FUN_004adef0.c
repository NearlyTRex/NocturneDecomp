// Name: FUN_004adef0
// Address: 004adef0
// Address Range: [[004adef0, 004adf64]]
// Convention: unknown
// Signature: int FUN_004adef0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_004adef0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = __vec_delete(param_1,&DAT_0059e490);
    shape_memdbg_cpp_free_FUN_00564486(uVar2);
    return param_1;
  }
  iVar1 = core_glass_cpp_CVector3f_arrdtor_FUN_004adf70(param_1 + 900,0);
  iVar1 = core_mirror_cpp_CMirror_dtor_FUN_004d6570(iVar1 + -0x1a0,0);
  iVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(iVar1 + -0x1e4,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
