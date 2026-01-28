// Name: core_melee.cpp_FUN_0050eb50
// Address: 0050eb50
// Address Range: [[0050eb50, 0050ebd5]]
// Convention: unknown
// Signature: void core_melee_cpp_FUN_0050eb50(void)

#include "nocturne.h"

/* Signature: byte actors_weapon_melee.cpp_FUN_0050eb50(uint param_1, uint
   param_2, byte param_3, uint param_4) */

void core_melee_cpp_FUN_0050eb50(void)

{
  CDemonActor *pCVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  CDemonActor *in_stack_00000010;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000010,g_CCharacterClassInfo.name_hash);
  if (pCVar1 != (CDemonActor *)0x0) {
    core_melee_cpp_FUN_0050ebe0();
    if (in_stack_00000008 == 1) {
      (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
      return;
    }
    (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
    return;
  }
  if (in_stack_00000010 == (CDemonActor *)0x0) {
    return;
  }
  (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
  return;
}
