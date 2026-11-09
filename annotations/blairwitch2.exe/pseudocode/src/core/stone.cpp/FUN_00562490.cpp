// Name: core_stone.cpp_FUN_00562490
// Address: 00562490
// Address Range: [[00562490, 005624e8]]
// Convention: unknown
// Signature: undefined4 core_stone_cpp_FUN_00562490(int param_1,CDemonActor *param_2)

#include "nocturne.h"

uint core_stone_cpp_FUN_00562490(int param_1,CDemonActor *param_2)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                    (*(uint *)(param_1 + 0x7d4),g_CActorDestinationClassInfo.name_hash);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x2e0) != 0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x470) != 3) {
    iVar1 = core_actor_cpp_FUN_0040c840(param_2,"CHero");
    if (iVar1 == 0) {
      return 0;
    }
  }
  return *(uint *)(param_1 + 0x470);
}
