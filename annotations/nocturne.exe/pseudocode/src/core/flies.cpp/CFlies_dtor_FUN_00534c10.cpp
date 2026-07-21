// Name: core_flies.cpp_CFlies_dtor_FUN_00534c10
// Address: 00534c10
// Address Range: [[00534c10, 00534c74]]
// Convention: unknown
// Signature: int core_flies_cpp_CFlies_dtor_FUN_00534c10(int param_1,byte param_2)

#include "nocturne.h"

int core_flies_cpp_CFlies_dtor_FUN_00534c10(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = __vec_delete(param_1,&DAT_005a2590);
    shape_memdbg_cpp_free_FUN_00564486(uVar2);
    return param_1;
  }
  iVar1 = core_flies_cpp_SFly_arrdtor_FUN_00534c80(param_1 + 0x168,0);
  iVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(iVar1 + -0x168,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
