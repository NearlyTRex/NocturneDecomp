// Name: core_basicnpc.cpp_FUN_005a4950
// Address: 005a4950
// Address Range: [[005a4950, 005a497b]]
// Convention: unknown
// Signature: uint core_basicnpc_cpp_FUN_005a4950(uint param_1,uint param_2)

#include "nocturne.h"

uint core_basicnpc_cpp_FUN_005a4950(uint param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == param_1) {
    return param_2 ^ param_1;
  }
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0(param_2,g_CBasicNPCClassInfo.name_hash);
  if (iVar1 != 0) {
    return 0;
  }
  return 1;
}
