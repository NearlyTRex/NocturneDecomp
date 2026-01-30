// Name: core_hero.cpp_CallInventorySelectHealth_FUN_004f3760
// Address: 004f3760
// Address Range: [[004f3760, 004f37ce]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CallInventorySelectHealth_FUN_004f3760(void)

#include "nocturne.h"

int __cdecl core_hero_cpp_CallInventorySelectHealth_FUN_004f3760(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (*(CDemonActor **)(in_stack_00000004 + 0x1fa6c) == (CDemonActor *)0x0) {
    return 0;
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0
                    (*(CDemonActor **)(in_stack_00000004 + 0x1fa6c),"CHealthItem");
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x15c))();
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = core_hero_cpp_FUN_004f35b0();
    if (iVar1 != 0) {
      return 0;
    }
  }
  iVar1 = core_inv_cpp_CInventory_select_FUN_004ff800
                    ((CInventory *)(in_stack_00000004 + 0x1f738),
                     *(CDemonActor **)(in_stack_00000004 + 0x1fa6c));
  return iVar1;
}
