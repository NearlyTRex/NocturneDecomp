// Name: core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
// Address: 00409ea0
// Address Range: [[00409ea0, 00409ecf] [00409ed1, 00409ef8]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(int param_1,uint param_2)

#include "nocturne.h"

int __cdecl core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = __vec_delete(param_1,&g_CDemonActorTypeInfo_005993d0);
    shape_memdbg_cpp_free_FUN_00564486(uVar1);
    return param_1;
  }
  *(uint *)(param_1 + 0x68) = 0x495fd67;
  *(byte ***)(param_1 + 0x14c) = &PTR_core_actor_cpp_CDemonActor_setup_FUN_00409fc0_005992d4;
  if ((param_2 & 2) == 0) {
    return param_1;
  }
  FUN_00564494(param_1);
  return param_1;
}
