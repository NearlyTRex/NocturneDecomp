// Name: core_stone.cpp_FUN_00584f10
// Address: 00584f10
// Address Range: [[00584f10, 00584f68]]
// Convention: unknown
// Signature: undefined4 core_stone_cpp_FUN_00584f10(int param_1,CDemonActor *param_2)

#include "nocturne.h"

uint core_stone_cpp_FUN_00584f10(int param_1,CDemonActor *param_2)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c600
                    (*(uint *)(param_1 + 0x678),g_CActorDestinationClassInfo.name_hash);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x184) != 0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x314) != 3) {
    iVar1 = core_actor_cpp_FUN_0040c550(param_2,"CHero");
    if (iVar1 == 0) {
      return 0;
    }
  }
  return *(uint *)(param_1 + 0x314);
}
