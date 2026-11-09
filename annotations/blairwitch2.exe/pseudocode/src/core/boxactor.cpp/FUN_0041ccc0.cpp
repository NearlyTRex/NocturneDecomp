// Name: core_boxactor.cpp_FUN_0041ccc0
// Address: 0041ccc0
// Address Range: [[0041ccc0, 0041ccee]]
// Convention: unknown
// Signature: undefined4 core_boxactor_cpp_FUN_0041ccc0(int param_1,CDemonActor *param_2)

#include "nocturne.h"

uint core_boxactor_cpp_FUN_0041ccc0(int param_1,CDemonActor *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x470) != 3) {
    iVar1 = core_actor_cpp_FUN_0040c840(param_2,"?CHero" + 1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return *(uint *)(param_1 + 0x470);
}
