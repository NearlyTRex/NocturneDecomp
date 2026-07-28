// Name: core_stone.cpp_CTempleStone_canPickup_FUN_00534d60
// Address: 00534d60
// Address Range: [[00534d60, 00534db8]]
// Convention: unknown
// Signature: undefined4 core_stone_cpp_CTempleStone_canPickup_FUN_00534d60(int param_1,CDemonActor *param_2)

#include "nocturne.h"

uint core_stone_cpp_CTempleStone_canPickup_FUN_00534d60(int param_1,CDemonActor *param_2)

{
  CDemonActor *pCVar1;
  int iVar2;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                     (*(CDemonActor **)(param_1 + 0x664),
                      g_CActorDestinationActorType_014b8a1c.name_hash);
  if ((pCVar1 != (CDemonActor *)0x0) && (pCVar1[1].location.area_id != 0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x30c) != 3) {
    iVar2 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CHero");
    if (iVar2 == 0) {
      return 0;
    }
  }
  return *(uint *)(param_1 + 0x30c);
}
