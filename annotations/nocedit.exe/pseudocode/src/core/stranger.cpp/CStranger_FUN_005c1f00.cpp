// Name: core_stranger.cpp_CStranger_FUN_005c1f00
// Address: 005c1f00
// Address Range: [[005c1f00, 005c1f78]]
// Convention: unknown
// Signature: void core_stranger_cpp_CStranger_FUN_005c1f00(void)

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005c1f00(CStranger* param_1) */

void core_stranger_cpp_CStranger_FUN_005c1f00(void)

{
  CDemonActor *pCVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x1fba0) != 0) {
    if (*(int *)(in_stack_00000004 + 0x1fc38) != 4) {
      shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                 *(int *)(in_stack_00000004 + 0x1fc38),0xd52);
    }
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(in_stack_00000004 + 0x1fba0),g_CAmmoBoxClassInfo.name_hash
                       );
    if (pCVar1 != (CDemonActor *)0x0) {
      core_ammobox_cpp_AllocateMemoryMaybe_FUN_00411700();
    }
    *(uint *)(in_stack_00000004 + 0x1fc38) = 1;
    *(uint *)(in_stack_00000004 + 0x1fba0) = 0;
  }
  return;
}
