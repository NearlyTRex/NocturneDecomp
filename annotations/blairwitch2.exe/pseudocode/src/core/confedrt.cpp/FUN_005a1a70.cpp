// Name: core_confedrt.cpp_FUN_005a1a70
// Address: 005a1a70
// Address Range: [[005a1a70, 005a1aa2]]
// Convention: unknown
// Signature: void core_confedrt_cpp_FUN_005a1a70(undefined4 param_1,int param_2)

#include "nocturne.h"

void core_confedrt_cpp_FUN_005a1a70(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                    (*(uint *)(param_2 + 0x38),g_CConfederateClassInfo.name_hash);
  if (iVar1 != 0) {
    return;
  }
  unkafter_basicene_cpp_FUN_0059f800(param_1,param_2);
  return;
}
