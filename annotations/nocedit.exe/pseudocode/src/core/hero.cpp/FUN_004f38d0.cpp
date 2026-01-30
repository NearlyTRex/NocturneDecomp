// Name: core_hero.cpp_FUN_004f38d0
// Address: 004f38d0
// Address Range: [[004f38d0, 004f390f]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_FUN_004f38d0(void)

#include "nocturne.h"

/* Signature: byte actors_hero_hero.cpp_FUN_004f38d0(uint param_1, uint param_2)
    */

void __cdecl core_hero_cpp_FUN_004f38d0(void)

{
  int iVar1;
  CDemonActor *item_actor;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar1 = in_stack_00000004 + in_stack_00000008 * 0x44;
  item_actor = *(CDemonActor **)(iVar1 + 0x24b4);
  if (item_actor == (CDemonActor *)0x0) {
    return;
  }
  core_inv_cpp_CInventory_addItem_FUN_004fd600
            ((CInventory *)(in_stack_00000004 + 0x1f738),item_actor,1);
  *(uint *)(iVar1 + 0x24b4) = 0;
  return;
}
