// Name: core_lever.cpp_CLever_isAccessibleFrom_FUN_004c68f0
// Address: 004c68f0
// Address Range: [[004c68f0, 004c6966]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_lever_cpp_CLever_isAccessibleFrom_FUN_004c68f0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint __cdecl core_lever_cpp_CLever_isAccessibleFrom_FUN_004c68f0(int param_1,uint param_2)

{
  byte local_20 [8];
  float local_18;
  
  if (*(int *)(param_1 + 0x804) != 2) {
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(param_1,local_20,param_2);
    if ((*(int *)(param_1 + 0x804) != 0) || (local_18 <= 0.0)) {
      if ((*(int *)(param_1 + 0x804) == 1) && (local_18 < 0.0)) {
        return 1;
      }
      return 0;
    }
  }
  return 1;
}
