// Name: core_hero.cpp_FUN_004d3c90
// Address: 004d3c90
// Address Range: [[004d3c90, 004d3e13]]
// Convention: unknown
// Signature: int core_hero_cpp_FUN_004d3c90(CHero *param_1)

#include "nocturne.h"

int core_hero_cpp_FUN_004d3c90(CHero *param_1)

{
  int iVar1;
  
  if (*(CDemonActor **)(param_1 + 0x20a24) == (CDemonActor *)0x0) {
    return 0;
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c790
                    (*(CDemonActor **)(param_1 + 0x20a24),"N@CHealthItem" + 2);
  if (iVar1 != 0) {
    iVar1 = core_inv_cpp_CInventory_select_FUN_004dcb40
                      ((CInventory *)(param_1 + 0x206e8),*(CDemonActor **)(param_1 + 0x20a24));
    return iVar1;
  }
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                    (*(uint *)(param_1 + 0x20a24),g_CBoxActorClassInfo.name_hash);
  if (iVar1 != 0) {
    iVar1 = _stricmp((char *)(iVar1 + 0x1d0),"journal.kfm");
    if (iVar1 == 0) {
      *(uint *)&g_CFieldNotesPtr->field_0x40 = (uint)(*(int *)&g_CFieldNotesPtr->field_0x40 == 0);
      return 0;
    }
  }
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                    (*(uint *)(param_1 + 0x20a24),g_CBoxActorClassInfo.name_hash);
  if (iVar1 != 0) {
    iVar1 = _stricmp((char *)(iVar1 + 0x1d0),"lantern.kfm");
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0xcdec) = 1;
      return 0;
    }
  }
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                    (*(uint *)(param_1 + 0x20a24),g_CBoxActorClassInfo.name_hash);
  if (iVar1 != 0) {
    iVar1 = _stricmp((char *)(iVar1 + 0x1d0),"voodoo_d.kfm");
    if (iVar1 == 0) {
      core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,"UseSPS");
      return 0;
    }
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x148))(param_1);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = core_hero_cpp_FUN_004d3b20(param_1);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = core_inv_cpp_CInventory_select_FUN_004dcb40
                    ((CInventory *)(param_1 + 0x206e8),*(CDemonActor **)(param_1 + 0x20a24));
  return iVar1;
}
