// Name: core_stone.cpp_CTempleStone_canPickup_FUN_00534d60
// Address: 00534d60
// Address Range: [[00534d60, 00534db8]]
// Convention: unknown
// Signature: undefined4 core_stone_cpp_CTempleStone_canPickup_FUN_00534d60(int param_1,undefined4 param_2)

#include "nocturne.h"

uint core_stone_cpp_CTempleStone_canPickup_FUN_00534d60(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                    (*(uint *)(param_1 + 0x664),
                     g_CActorDestinationActorType_014b8a1c.name_hash);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x17c) != 0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x30c) != 3) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CHero");
    if (iVar1 == 0) {
      return 0;
    }
  }
  return *(uint *)(param_1 + 0x30c);
}
